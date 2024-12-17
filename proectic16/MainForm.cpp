#include "MainForm.h"
#include "change.h"
#include "izmen.h"
#include "Catalog.h"
#include "fstream"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	proectic16::MainForm form;
	Application::Run(% form);
}

System::Void proectic16::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void proectic16::MainForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void proectic16::MainForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void proectic16::MainForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Catalog^ form = gcnew Catalog();
	this->Hide();
	form->Show();
	
}

System::Void proectic16::MainForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	change^ form = gcnew change();
	this->Hide();
	form->Show();


}

System::Void proectic16::MainForm::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void proectic16::MainForm::посмотретьКаталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Catalog^ form = gcnew Catalog();
	this->Hide();
	form->Show();
}

System::Void proectic16::MainForm::создатьНовоеКафеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	change^ form = gcnew change();
	this->Hide();
	form->Show();
}

System::Void proectic16::MainForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Да нечего рассказывать, программку написала полукраб полупрограммист Варя!", "Warning!");
}
