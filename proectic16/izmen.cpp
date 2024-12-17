#include "izmen.h"
#include "Cafe.h"
#include "Price.h"
#include "grill.h"
#include "Vityazhka.h"
#include "MainForm.h"
#include "Fridge.h"
#include "Dishwasher.h"
#include "postavka.h"
#include "header.h"
#include "fstream"
#include "Catalog.h"


System::Void proectic16::izmen::izmen_Shown(System::Object^ sender, System::EventArgs^ e)
{
	Show();
}

System::Void proectic16::izmen::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	grill^ form = gcnew grill();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Vityazhka^ form = gcnew Vityazhka();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Fridge^ form = gcnew Fridge();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Dishwasher^ form = gcnew Dishwasher();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	postavka^ form = gcnew postavka();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::save_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������� ���������", "Warning!");
	ofstream fout;
	fout.open("myCatalog.txt", fstream::app);
	fout << "����� ��������� �������: "<< st<<"$" << endl;
	////////////////////////////////////////////////////////////////////////////////////////
}					  

System::Void proectic16::izmen::exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ form = gcnew MainForm();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::label4_Shown(System::Object^ sender, System::EventArgs^ e)
{
	label4->Text = schet.ToString();
}

System::Void proectic16::izmen::label5_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = st.ToString();
}

System::Void proectic16::izmen::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void proectic16::izmen::�����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Catalog^ form = gcnew Catalog();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ form = gcnew MainForm();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	grill^ form = gcnew grill();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Vityazhka^ form = gcnew Vityazhka();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Fridge^ form = gcnew Fridge();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Dishwasher^ form = gcnew Dishwasher();
	this->Hide();
	form->Show();
}

System::Void proectic16::izmen::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	postavka^ form = gcnew postavka();
	this->Hide();
	form->Show();
}


