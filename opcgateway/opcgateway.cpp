// opcgateway.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

#include "opc_ae.h"
#include "opcda.h"
#include "WTclientAPI.h"
#include "WtclientAPIex.h"

using namespace opcgateway;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{

	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());

	WTclientCoInit();
	WTclientCoUninit();

	return 0;
}
