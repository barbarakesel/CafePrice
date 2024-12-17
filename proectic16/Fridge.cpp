#include "Fridge.h"
#include "izmen.h"
#include "change.h"
#include "Header.h"
#include "fstream"
#include "MainForm.h"
#include "Catalog.h"

System::Void proectic16::Fridge::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	izmen^ form = gcnew izmen();
	this->Hide();
	form->Show();
}

System::Void proectic16::Fridge::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox1->Text == "")
    {
        comboBox1->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox1->Text);

    if (schet < 750*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 750*x;
        st = st + 750*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "холодильник: Alpicool CR65 : 750$" << "/n";
    }
}

System::Void proectic16::Fridge::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox2->Text == "")
    {
        comboBox2->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox2->Text);

    if (schet < 240*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 240*x;
        st = st + 240*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "холодильник: BBK RF-068 : 240$" << "/n";
    }
}

System::Void proectic16::Fridge::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox3->Text == "")
    {
        comboBox3->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox3->Text);

    if (schet < 300*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 300*x;
        st = st + 300*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "холодильник: Nord NR 403 B : 300$" << "/n";
    }
}

System::Void proectic16::Fridge::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox4->Text == "")
    {
        comboBox4->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox4->Text);

    if (schet < 500*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 500*x;
        st = st + 500*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "холодильник: Sonata Quadro 1200 LED : 500$" << "/n";
    }
}

System::Void proectic16::Fridge::выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void proectic16::Fridge::посмотреть аталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Catalog^ form = gcnew Catalog();
    this->Hide();
    form->Show();
}

System::Void proectic16::Fridge::в√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

System::Void proectic16::Fridge::в–едакторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}