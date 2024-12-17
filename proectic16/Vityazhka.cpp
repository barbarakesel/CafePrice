#include "Vityazhka.h"
#include "Cafe.h"
#include "change.h"
#include "Header.h"
#include "izmen.h"
#include "fstream"
#include "MainForm.h"
#include "Catalog.h"

System::Void proectic16::Vityazhka::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox1->Text == "")
    {
        comboBox1->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox1->Text);
    if (schet < 120*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 120*x;
        st = st + 120*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "выт€жка: Era Argest 120E 2K M : 120$" << "/n";
    }
}

System::Void proectic16::Vityazhka::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox2->Text == "")
    {
        comboBox2->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox2->Text);
    if (schet < 70*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 70*x;
        st = st + 70*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "выт€жка: Era Storm YWF2E 200 : 70$" << "/n";
    }
}

System::Void proectic16::Vityazhka::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox3->Text == "")
    {
        comboBox3->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox3->Text);
    if (schet < 90*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 90*x;
        st = st + 90*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "выт€жка: Shuft CFk 100 MAX : 90$" << "/n";
    }
}

System::Void proectic16::Vityazhka::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox4->Text == "")
    {
        comboBox4->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox4->Text);
    if (schet < 160*x) {
        MessageBox::Show("¬ашего бюджета недостаточно дл€ покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 160*x;
        st = st + 160*x;
        MessageBox::Show("ќплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "выт€жка: Systemair K 100 M Sileo : 160$" << "/n";
    }
}

System::Void proectic16::Vityazhka::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}

System::Void proectic16::Vityazhka::выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void proectic16::Vityazhka::посмотреть аталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Catalog^ form = gcnew Catalog();
    this->Hide();
    form->Show();
}

System::Void proectic16::Vityazhka::в√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

System::Void proectic16::Vityazhka::в–едакторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}
