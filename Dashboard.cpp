#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]



void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POO::Dashboard frm;
	Application::Run(% frm);
}