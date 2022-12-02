#include "login.h"
#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]



void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POO::login frm;
	Application::Run(% frm);
}