#pragma once
#include"MyMenu.h"


namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyGame : public System::Windows::Forms::Form
	{
	public:
		MyGame(void)
		{	
			ShowSettingsForm();	
		}
	protected:
		~MyGame()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int winScore{};
		int sizeCol{};
		int sizeRow{};
		int howBomb{};
		int explosions{0};
		System::ComponentModel::Container ^components;
		array<Button^, 2>^ buttons;
		array<array<int>^>^ board;
		array<array<bool>^>^ visited;


		Label^ label1;
		Label^ label2;
		Label^ label3;
		Label^ label4;


		int randField(int numberEnd)
		{
			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<> dis(0, numberEnd - 1);
			int random_number = dis(gen);
			return random_number;
		}
		void ShowSettingsForm()
		{
			MyMenu^ settingsForm = gcnew MyMenu();
			if (settingsForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				sizeCol = settingsForm->boardCol;
				sizeRow = settingsForm->boardRow;
				howBomb = settingsForm->boardBomb;
				InitializeGame();
				GenerateBoard();
			}
			else
			{
				this->Close();
			}
			
		}
		void InitializeGame()
		{


			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->Text = L"Ilosc min: "+ howBomb.ToString();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->Text = L"Size (COL): " + sizeCol.ToString();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->Text = L"Size (Row): " + sizeRow.ToString();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->Text = L"Eksplozje: " + explosions.ToString();

			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;


			this->Text = "Saper Game";
			this->Width = sizeRow*50;
			this->Height = sizeRow * 50;

			int buttonSize = 40;
			int startX = 0;//(this->Width - (buttonSize) * buttonCount) / 2;
			int startY = 60;// (this->Height - (buttonSize)*buttonCount) / 2;

			this->Width = sizeCol * (buttonSize+2)+ startX;
			this->Height = sizeRow * (buttonSize+2)+ startY+24;

			buttons = gcnew array<Button^, 2>(sizeCol, sizeRow);

			for (int i = 0; i < sizeRow; ++i)
			{
				for (int j = 0; j < sizeCol; ++j)
				{
					int coder = i*1000  + j ;//linearyzacja wyniku

					Button^ button = gcnew Button();
					button->Text = "";
					button->Width = buttonSize;
					button->Height = buttonSize;
					button->Name = (coder).ToString();
					button->Left = startX + (buttonSize) * j;
					button->Top = startY + (buttonSize) * i;
					button->Click += gcnew EventHandler(this, &MyGame::Button_Click);
					this->Controls->Add(button);

					buttons[j,i] = button;
				}
			}
		}
		void GenerateBoard() {
			int maxSize = sizeCol;
			if (maxSize < sizeRow)
				maxSize=sizeRow;
			board = gcnew array<array<int>^>(maxSize);

			// Inicjalizacja pola minowego jako puste
			for (int i = 0; i < sizeRow; ++i)
			{
				board[i] = gcnew array<int>(sizeCol);

				for (int j = 0; j < sizeCol; ++j)
				{
					board[i][j] = 0;
				}
			}
			
			//generowanie min
			int bombs = howBomb;
			while (bombs > 0)
			{
				int x = randField(sizeRow);
				int y = randField(sizeCol);
				if (board[x][y] != 9)
				{
					board[x][y] = 9;
					bombs--;
					for (int i = x - 1; i <= x + 1; i++)
					{
						for (int j = y - 1; j <= y + 1; j++)
						{
							if (i >= 0 && i < sizeRow && j >= 0 && j < sizeCol && board[i][j] != 9)
							{

								board[i][j]++;
							}
						}
					}
				}
			}
			winScore += sizeRow * sizeCol-howBomb;

					

		}
		void Button_Click(Object^ sender, EventArgs^ e)
		{
			Button^ clickButton = dynamic_cast<Button^>(sender);
			if (clickButton != nullptr)
			{
				String^ decoderString = clickButton->Name;
				int decoder= System::Convert::ToInt16(decoderString);
				int decoderCol = decoder % 100;
				int decoderRow = decoder - decoderCol;
				decoderRow /= 1000;
				

				if (board[decoderRow][decoderCol] == 9)
				{
					clickButton->Text = "X";
					MessageBox::Show("Trafi³eœ na minê!");
					explosions++;
					this->label4->Text = L"Eksplozje: " + explosions.ToString();
					
				}
				else if (board[decoderRow][decoderCol] == 0&& clickButton->Text =="")
				{
					clickButton->Text = "0";
					winScore--;
					
				}
				else if(clickButton->Text == "")
				{
					clickButton->Text = board[decoderRow][decoderCol].ToString();
					winScore--;
					
				}
				if (winScore == 0)
				{
					MessageBox::Show("Wygraleœ!!!");
				}

				
				
			}
		}
#pragma endregion
	};
}
