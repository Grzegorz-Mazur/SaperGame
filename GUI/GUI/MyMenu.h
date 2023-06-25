#pragma once
	
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

public ref class MyMenu : public System::Windows::Forms::Form
	{
	public:
		int boardCol{};
		int boardRow{};
		int boardBomb{};
		MyMenu(void)
		{

			InitializeComponent();

		}

	protected:

		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;




	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 26);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Zaawansowany";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(247, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 26);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ekspert";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 340);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 26);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Zasady";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyMenu::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(348, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 26);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Zamknij";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(0, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(348, 80);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 26);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Dowolny";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyMenu::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"8";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(169, 178);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(285, 178);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Witaj w grze saper. Wybierz tryb gry";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Size (COL):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(166, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Size (ROW):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(282, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Iloœæ min: ";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(83, 241);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(287, 26);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Graj";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyMenu::button8_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Pocz¹tkuj¹cy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyMenu::button1_Click);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 0;
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 378);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "8";
		textBox2->Text = "8";
		textBox3->Text = "10";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "16";
		textBox2->Text = "16";
		textBox3->Text = "40";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "30";
		textBox2->Text = "16";
		textBox3->Text = "99";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Gra polega na odkrywaniu na planszy poszczególnych pól w taki sposób, aby nie natrafiæ na minê. Na ka¿dym z odkrytych pól napisana jest liczba min, które bezpoœrednio stykaj¹ siê z danym polem (od zera do oœmiu). Nale¿y u¿ywaæ tych liczb by wydedukowaæ gdzie schowane s¹ miny."+"\n\n" +"Gra zawiera 4 typy rozgrywki : " + "\n" + "Pocz¹tkuj¹cy – plansza 8×8 pól, 10 min, ryzyko trafienia na minê: 15,625%" + "\n"+"Zaawansowany – plansza 16×16 pól, 40 min, ryzyko trafienia na minê: 15,625%" + "\n"+"Ekspert – plansza 30×16 pól, 99 min, ryzyko trafienia na minê: 20,625%" + "\n"+"Plansza u¿ytkownika – gracz sam wybiera rozmiary planszy (od 8×8 do 30×24 pól) i liczbê min (od 10 do 240)." + "\n" + "\n"+"Mo¿liwa maksymalna liczba min zale¿na jest od rozmiarów planszy. Dla planszy o rozmiarach A×B maksymalna liczba wynosi A×B/3, czyli np. na planszy o rozmiarach 12×16 pól mo¿e byæ najwy¿ej 12×16/3=64 miny.");

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
		Application::Exit();
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ x = textBox1->Text;
		String^ y = textBox2->Text;
		String^ bomb = textBox3->Text;
		if (x == ""|| y == "" || bomb=="")
		{
			MessageBox::Show("Wpisz dane wejœæiowe odnoœnie iloœci pól i min");
		}
		else 
		{
			boardCol = System::Convert::ToInt16(x);
			boardRow = System::Convert::ToInt16(y);
			boardBomb = System::Convert::ToInt16(bomb);
			if (boardCol < 8 || boardCol>30)
			{
				MessageBox::Show("Niepoprawna iloœæ kolumn"+"\n"+"Iloœæ kolumn musi byæ z zakresu od 8 do 30");
			}
			else if (boardRow < 8 || boardRow>24)
			{
				MessageBox::Show("Niepoprawna iloœæ wierszy" + "\n" + "Iloœæ wierszy musi byæ z zakresu od 8 do 24");
			}
			else if ((boardBomb < 10 || boardBomb>240)|| boardBomb > boardCol* boardRow/3)
			{
				MessageBox::Show("Niepoprawna iloœæ bomb");
			}
			else 
			{
				this->DialogResult = System::Windows::Forms::DialogResult::OK;
				this->Close();
			}
			
		}
	}
		
	void numberTextBox_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		   {
			   if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
			   {
				   e->Handled = true;
			   }
		   }
	};
	

	}


