#include "Dishwasher.h"
#include "izmen.h"
#include "change.h"
#include "Header.h"
#include "fstream"
#include "MainForm.h"
#include "Catalog.h"

System::Void proectic16::Dishwasher::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	izmen^ form = gcnew izmen();
	this->Hide();
	form->Show();
}

System::Void proectic16::Dishwasher::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox1->Text == "")
    {
        comboBox1->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox1->Text);
    if (schet < 2500*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 2500*x;
        st = st + 2500*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "посудомойка: DW-1000eco MAKSAN : 2500$" << "/n";
    }
}

System::Void proectic16::Dishwasher::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox2->Text == "")
    {
        comboBox2->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox2->Text);
    if (schet < 1500*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 1500*x;
        st = st + 1500*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "посудомойка: ELETTO 500-01/220 : 1500$" << "/n";
    }
}

System::Void proectic16::Dishwasher::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox3->Text == "")
    {
        comboBox3->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox3->Text);
    if (schet < 1800*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 1800*x;
        st = st + 1800*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "посудомойка: TATRA TW.F50+DR : 1800$" << "/n";
    }
}

System::Void proectic16::Dishwasher::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox4->Text == "")
    {
        comboBox4->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox4->Text);
    if (schet < 2000*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 2000*x;
        st = st + 2000*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "посудомойка: Vortmax FDM 500 : 2000$" << "/n";
    }
}

System::Void proectic16::Dishwasher::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void proectic16::Dishwasher::посмотретьКаталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Catalog^ form = gcnew Catalog();
    this->Hide();
    form->Show();
}

System::Void proectic16::Dishwasher::вГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

System::Void proectic16::Dishwasher::вРедакторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}
