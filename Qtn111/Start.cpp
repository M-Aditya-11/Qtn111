#include "Start.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Qtn111::Start form;
	Application::Run(% form);
}
