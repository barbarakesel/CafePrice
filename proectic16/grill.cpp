#include "grill.h"
#include "Cafe.h"
#include "change.h"
#include "Header.h"
#include "izmen.h"
#include "fstream"
#include "MainForm.h"
#include "Catalog.h"



System::Void proectic16::grill::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox1->Text == "")
    {
        comboBox1->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox1->Text);
    
    
    if (schet <940*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
       
        schet = schet - 940*x;
        st = st + 940*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "гриль: ATESY Командор-4Э-Т : 940$"<<endl;

    }
    
}

System::Void proectic16::grill::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox2->Text == "")
    {
        comboBox2->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox2->Text);
    if (schet < 510*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 510*x;
        st = st + 510*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "гриль: GASTRORAG EL-280 : 510$"<<'\n' << endl;
    }
}

System::Void proectic16::grill::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox3->Text == "")
    {
        comboBox3->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox3->Text);
    if (schet < 1150*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 1150*x;
        st = st + 1150*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("myCatalog.txt", ofstream::app);
        fout << "гриль: Hurakan HKN-PEG550R : 1150$" << endl;
    }
}

System::Void proectic16::grill::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int x; x = 1;
    if (comboBox4->Text == "")
    {
        comboBox4->Text = "1";
        x = 1;
    }
    else
        x = System::Convert::ToInt32(comboBox4->Text);
    if (schet < 805*x) {
        MessageBox::Show("Вашего бюджета недостаточно для покупки!", "Warning!");
        return;
    }
    else {
        schet = schet - 805*x;
        st = st + 805*x;
        MessageBox::Show("Оплата прошла успешно!", "Warning!");
        //return;
        izmen^ form = gcnew izmen();
        this->Hide();
        form->Show();
        ofstream fout;
        fout.open("гриль: myCatalog.txt", ofstream::app);
        fout << "ИПГ-140164 : 805$" << endl;
    }
}



System::Void proectic16::grill::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}

System::Void proectic16::grill::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void proectic16::grill::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void proectic16::grill::посмотретьКаталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Catalog^ form = gcnew Catalog();
    this->Hide();
    form->Show();
}

System::Void proectic16::grill::вГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

System::Void proectic16::grill::вРедакторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    izmen^ form = gcnew izmen();
    this->Hide();
    form->Show();
}
