// Spectrator.cpp: ������� ���� �������.

#include "stdafx.h"
#include "MainView.h"

using namespace Spectrator;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew MainView());
	return 0;
}
