using namespace System;
using namespace System::Windows::Forms;
#include "SettingsForm.h"

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OOP4::SettingsForm form;
	Application::Run(% form);
}