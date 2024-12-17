#pragma once

namespace proectic16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ izmen
	/// </summary>
	public ref class izmen : public System::Windows::Forms::Form
	{
	public:
		izmen(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~izmen()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ exit;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèÈçÏğîãğàììûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñìîòğåòüÊàòàëîãToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âÃëàâíîåÌåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåäàêòîğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãğèëüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûòÿæêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ õîëîäèëüíèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñóäîìîéêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòàâùèêToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñìîòğåòüÊàòàëîãToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âÃëàâíîåÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòîğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğèëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûòÿæêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->õîëîäèëüíèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñóäîìîéêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòàâùèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"îáùàÿ ñåáåñòîèìîñòü:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 32);
			this->label2->TabIndex = 8;
			this->label2->Text = L"âàø áşäæåò:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(5, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 66);
			this->button1->TabIndex = 10;
			this->button1->Text = L"ãğèëü";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &izmen::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(260, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 66);
			this->button2->TabIndex = 11;
			this->button2->Text = L"âûòÿæêà";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &izmen::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(5, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(218, 66);
			this->button3->TabIndex = 12;
			this->button3->Text = L"õîëîäèëüíèê";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &izmen::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(260, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(218, 66);
			this->button4->TabIndex = 13;
			this->button4->Text = L"ïîñóäîìîéêà";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &izmen::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(4, 17);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(218, 66);
			this->button5->TabIndex = 14;
			this->button5->Text = L"ïîñòàâùèê";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &izmen::button5_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::White;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->Location = System::Drawing::Point(22, 358);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(218, 66);
			this->save->TabIndex = 15;
			this->save->Text = L"ñîõğàíèòü";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &izmen::save_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::White;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(277, 358);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(218, 66);
			this->exit->TabIndex = 16;
			this->exit->Text = L"â ìåíş";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &izmen::exit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(203, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 32);
			this->label4->TabIndex = 17;
			this->label4->Text = L"***";
			this->label4->Click += gcnew System::EventHandler(this, &izmen::label4_Shown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(333, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 32);
			this->label5->TabIndex = 18;
			this->label5->Text = L"***";
			this->label5->Click += gcnew System::EventHandler(this, &izmen::label5_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->ğåäàêòîğToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(515, 28);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âûéòèÈçÏğîãğàììûToolStripMenuItem,
					this->ïîñìîòğåòüÊàòàëîãToolStripMenuItem, this->âÃëàâíîåÌåíşToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->ìåíşToolStripMenuItem->Text = L"ìåíş";
			this->ìåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::ìåíşToolStripMenuItem_Click);
			// 
			// âûéòèÈçÏğîãğàììûToolStripMenuItem
			// 
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Name = L"âûéòèÈçÏğîãğàììûToolStripMenuItem";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Text = L"âûéòè èç ïğîãğàììû";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::âûéòèÈçÏğîãğàììûToolStripMenuItem_Click);
			// 
			// ïîñìîòğåòüÊàòàëîãToolStripMenuItem
			// 
			this->ïîñìîòğåòüÊàòàëîãToolStripMenuItem->Name = L"ïîñìîòğåòüÊàòàëîãToolStripMenuItem";
			this->ïîñìîòğåòüÊàòàëîãToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->ïîñìîòğåòüÊàòàëîãToolStripMenuItem->Text = L"ïîñìîòğåòü êàòàëîã";
			this->ïîñìîòğåòüÊàòàëîãToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::ïîñìîòğåòüÊàòàëîãToolStripMenuItem_Click);
			// 
			// âÃëàâíîåÌåíşToolStripMenuItem
			// 
			this->âÃëàâíîåÌåíşToolStripMenuItem->Name = L"âÃëàâíîåÌåíşToolStripMenuItem";
			this->âÃëàâíîåÌåíşToolStripMenuItem->Size = System::Drawing::Size(242, 26);
			this->âÃëàâíîåÌåíşToolStripMenuItem->Text = L"â ãëàâíîå ìåíş";
			this->âÃëàâíîåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::âÃëàâíîåÌåíşToolStripMenuItem_Click);
			// 
			// ğåäàêòîğToolStripMenuItem
			// 
			this->ğåäàêòîğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ãğèëüToolStripMenuItem,
					this->âûòÿæêàToolStripMenuItem, this->õîëîäèëüíèêToolStripMenuItem, this->ïîñóäîìîéêàToolStripMenuItem, this->ïîñòàâùèêToolStripMenuItem
			});
			this->ğåäàêòîğToolStripMenuItem->Name = L"ğåäàêòîğToolStripMenuItem";
			this->ğåäàêòîğToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->ğåäàêòîğToolStripMenuItem->Text = L"ğåäàêòîğ";
			// 
			// ãğèëüToolStripMenuItem
			// 
			this->ãğèëüToolStripMenuItem->Name = L"ãğèëüToolStripMenuItem";
			this->ãğèëüToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->ãğèëüToolStripMenuItem->Text = L"ãğèëü";
			this->ãğèëüToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::ãğèëüToolStripMenuItem_Click);
			// 
			// âûòÿæêàToolStripMenuItem
			// 
			this->âûòÿæêàToolStripMenuItem->Name = L"âûòÿæêàToolStripMenuItem";
			this->âûòÿæêàToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->âûòÿæêàToolStripMenuItem->Text = L"âûòÿæêà";
			this->âûòÿæêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::âûòÿæêàToolStripMenuItem_Click);
			// 
			// õîëîäèëüíèêToolStripMenuItem
			// 
			this->õîëîäèëüíèêToolStripMenuItem->Name = L"õîëîäèëüíèêToolStripMenuItem";
			this->õîëîäèëüíèêToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->õîëîäèëüíèêToolStripMenuItem->Text = L"õîëîäèëüíèê";
			this->õîëîäèëüíèêToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::õîëîäèëüíèêToolStripMenuItem_Click);
			// 
			// ïîñóäîìîéêàToolStripMenuItem
			// 
			this->ïîñóäîìîéêàToolStripMenuItem->Name = L"ïîñóäîìîéêàToolStripMenuItem";
			this->ïîñóäîìîéêàToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->ïîñóäîìîéêàToolStripMenuItem->Text = L"ïîñóäîìîéêà";
			this->ïîñóäîìîéêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::ïîñóäîìîéêàToolStripMenuItem_Click);
			// 
			// ïîñòàâùèêToolStripMenuItem
			// 
			this->ïîñòàâùèêToolStripMenuItem->Name = L"ïîñòàâùèêToolStripMenuItem";
			this->ïîñòàâùèêToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->ïîñòàâùèêToolStripMenuItem->Text = L"ïîñòàâùèê";
			this->ïîñòàâùèêToolStripMenuItem->Click += gcnew System::EventHandler(this, &izmen::ïîñòàâùèêToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(18, 98);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(481, 160);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"îáîğóäîâàíèå";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Location = System::Drawing::Point(19, 265);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(479, 87);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ïğîäóêòû";
			// 
			// izmen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(515, 426);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(533, 473);
			this->MinimumSize = System::Drawing::Size(533, 473);
			this->Name = L"izmen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"izmen";
			this->Load += gcnew System::EventHandler(this, &izmen::izmen_Load);
			this->Shown += gcnew System::EventHandler(this, &izmen::izmen_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void izmen_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void izmen_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void label4_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûéòèÈçÏğîãğàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ìåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ïîñìîòğåòüÊàòàëîãToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âÃëàâíîåÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ãğèëüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûòÿæêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void õîëîäèëüíèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîñóäîìîéêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîñòàâùèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
