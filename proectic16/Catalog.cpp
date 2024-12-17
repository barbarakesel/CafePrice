#include "Catalog.h"
#include "MainForm.h"
#include "Cafe.h"
#include "Price.h"


using namespace System::IO;

System::Void proectic16::Catalog::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

System::Void proectic16::Catalog::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ FileName = "";
    if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
    {
        FileName = openFileDialog1->FileName;
    }
    try
    {
        StreamReader^ file = File::OpenText(FileName);
        textBox1->Text = file->ReadToEnd();
    }
    catch (Exception^ e)
    {
    }
}

System::Void proectic16::Catalog::âûéòèÈçÏðîãðàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void proectic16::Catalog::âÃëàâíîåÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}

;








