#include <iostream>
#include <vector>
#include <random>
#include "MyGame.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]


void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUI::MyGame form;
	Application::Run(% form);
}
