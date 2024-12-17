#include "postavka.h"
#include "change.h"
#include "Header.h"
#include "izmen.h"
#include "fstream"
#include "MainForm.h"
#include "Catalog.h"

System::Void proectic16::postavka::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}

System::Void proectic16::postavka::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox1->Text == "")
    {
        comboBox1->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox1->Text);
    if (schet < 200*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 200*x;
        st = st + 200*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "поставщик: ProStore : 200$"<<"/n";
    }
}

System::Void proectic16::postavka::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox2->Text == "")
    {
        comboBox2->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox2->Text);
    if (schet < 100*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 100*x;
        st = st + 100*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "поставщик: Евроопт : 100$" << "/n";
    }
}

System::Void proectic16::postavka::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox3->Text == "")
    {
        comboBox3->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox3->Text);
    if (schet < 70*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 70*x;
        st = st + 70*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "поставщик: Копеечка : 70$" << "/n";
    }
}

System::Void proectic16::postavka::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox4->Text == "")
    {
        comboBox4->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox4->Text);
    if (schet < 150*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 150*x;
        st = st + 150*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        std::ofstream fout;
        fout.open("myCatalog.txt", std::ofstream::app);
        fout << "поставщик: Корона : 150$" << "/n";
    } System::Void();
}

System::Void proectic16::postavka::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void proectic16::postavka::посмотретьКаталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Catalog^ form = gcnew Catalog();
    this->Hide();
    form->Show();
}

System::Void proectic16::postavka::вГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

System::Void proectic16::postavka::вРедакторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}
