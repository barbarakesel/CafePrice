#include "change.h"
#include "MainForm.h"
#include <iostream>
#include"Price.h"
#include"izmen.h"
#include"Cafe.h"
#include "fstream"


int n; int schet, st, kk;
System::Void proectic16::change::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	

}

System::Void proectic16::change::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ form = gcnew MainForm();
	this->Hide();
	form->Show();
}

System::Void proectic16::change::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	

	if (textBox1->Text == "")
	{
		MessageBox::Show("Введите ваш бюджет!", "Warning!");
		return;
	}
			n = System::Convert::ToInt32(textBox1->Text);
			schet = n;
			st = 0;
	if (n < 70)
			{
				MessageBox::Show("Вашего бюджета недостаточно для открытия кафе!", "Warning!");
				return;
			}
	
	kk++;
	izmen^ form = gcnew izmen();
	this->Hide();
	form->Show();	

	ofstream fout;
	fout.open("myCatalog.txt", ofstream::app);
	fout << "ИДЕЯ №"<<kk<< endl;

}
