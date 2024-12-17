#pragma once

namespace proectic16 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Button^ sozdatnewcafe;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиИзПрограммыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ посмотретьКаталогToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьНовоеКафеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->exit = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->sozdatnewcafe = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиИзПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->посмотретьКаталогToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьНовоеКафеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::White;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::Black;
			this->exit->Location = System::Drawing::Point(113, 128);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(281, 66);
			this->exit->TabIndex = 1;
			this->exit->Text = L"выйти из программы";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(113, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 66);
			this->button2->TabIndex = 2;
			this->button2->Text = L"посмотреть каталог кафе";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// sozdatnewcafe
			// 
			this->sozdatnewcafe->BackColor = System::Drawing::Color::White;
			this->sozdatnewcafe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sozdatnewcafe->ForeColor = System::Drawing::Color::Black;
			this->sozdatnewcafe->Location = System::Drawing::Point(113, 292);
			this->sozdatnewcafe->Name = L"sozdatnewcafe";
			this->sozdatnewcafe->Size = System::Drawing::Size(281, 66);
			this->sozdatnewcafe->TabIndex = 3;
			this->sozdatnewcafe->Text = L"создать новое кафе";
			this->sozdatnewcafe->UseVisualStyleBackColor = false;
			this->sozdatnewcafe->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->менюToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(515, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выйтиИзПрограммыToolStripMenuItem,
					this->посмотретьКаталогToolStripMenuItem, this->создатьНовоеКафеToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->менюToolStripMenuItem->Text = L"меню";
			this->менюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::менюToolStripMenuItem_Click);
			// 
			// выйтиИзПрограммыToolStripMenuItem
			// 
			this->выйтиИзПрограммыToolStripMenuItem->Name = L"выйтиИзПрограммыToolStripMenuItem";
			this->выйтиИзПрограммыToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->выйтиИзПрограммыToolStripMenuItem->Text = L"выйти из программы";
			this->выйтиИзПрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выйтиИзПрограммыToolStripMenuItem_Click);
			// 
			// посмотретьКаталогToolStripMenuItem
			// 
			this->посмотретьКаталогToolStripMenuItem->Name = L"посмотретьКаталогToolStripMenuItem";
			this->посмотретьКаталогToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->посмотретьКаталогToolStripMenuItem->Text = L"посмотреть каталог";
			this->посмотретьКаталогToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::посмотретьКаталогToolStripMenuItem_Click);
			// 
			// создатьНовоеКафеToolStripMenuItem
			// 
			this->создатьНовоеКафеToolStripMenuItem->Name = L"создатьНовоеКафеToolStripMenuItem";
			this->создатьНовоеКафеToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->создатьНовоеКафеToolStripMenuItem->Text = L"создать новое кафе";
			this->создатьНовоеКафеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::создатьНовоеКафеToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(116, 24);
			this->оПрограммеToolStripMenuItem->Text = L"о программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оПрограммеToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(125, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ГЛАВНОЕ МЕНЮ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(515, 426);
			this->Controls->Add(this->sozdatnewcafe);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(533, 473);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Бизнес";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void посмотретьКаталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void создатьНовоеКафеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
