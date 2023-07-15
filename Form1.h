#pragma once

namespace prackic2023 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::ListBox^ listBox1;




	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;






	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(474, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 60);
			this->button1->TabIndex = 9;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 52);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"N student";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(54, 122);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(248, 50);
			this->textBox2->TabIndex = 14;
			this->textBox2->Text = L"Surename";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(231, 34);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 50);
			this->button5->TabIndex = 16;
			this->button5->Text = L"fix";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(54, 207);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(100, 36);
			this->listBox1->TabIndex = 18;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(191, 207);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(240, 300);
			this->listView1->TabIndex = 23;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(54, 271);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(100, 36);
			this->listBox2->TabIndex = 24;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(54, 339);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(100, 36);
			this->listBox3->TabIndex = 25;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(54, 407);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(100, 36);
			this->listBox4->TabIndex = 26;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(54, 470);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(100, 36);
			this->listBox5->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(474, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 60);
			this->button2->TabIndex = 28;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->mark_5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mark_5->FormattingEnabled = true;
			this->mark_5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->mark_5->Location = System::Drawing::Point(29, 305);
			this->mark_5->Name = L"mark_5";
			this->mark_5->Size = System::Drawing::Size(80, 24);
			this->mark_5->TabIndex = 41;
			this->mark_5->SelectedIndexChanged += gcnew System::EventHandler(this, &TopSoft::comboBox5_SelectedIndexChanged);
			// 
			// sbros
			// 
			this->sbros->Location = System::Drawing::Point(237, 25);
			this->sbros->Name = L"sbros";
			this->sbros->Size = System::Drawing::Size(94, 23);
			this->sbros->TabIndex = 42;
			this->sbros->Text = L"clear";
			this->sbros->UseVisualStyleBackColor = true;
			this->sbros->Click += gcnew System::EventHandler(this, &TopSoft::button1_Click_1);
			// 
			// Number_stud
			// 
			this->Number_stud->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->Number_stud->Location = System::Drawing::Point(29, 22);
			this->Number_stud->MaxLength = 100;
			this->Number_stud->Multiline = true;
			this->Number_stud->Name = L"Number_stud";
			this->Number_stud->Size = System::Drawing::Size(83, 27);
			this->Number_stud->TabIndex = 13;
			this->Number_stud->Text = L"N student";
			this->Number_stud->TextChanged += gcnew System::EventHandler(this, &TopSoft::textBox1_TextChanged);
			// 
			// save_file
			// 
			this->save_file->Location = System::Drawing::Point(353, 116);
			this->save_file->Name = L"save_file";
			this->save_file->Size = System::Drawing::Size(83, 25);
			this->save_file->TabIndex = 44;
			this->save_file->Text = L"save_file";
			this->save_file->UseVisualStyleBackColor = true;
			this->save_file->Click += gcnew System::EventHandler(this, &TopSoft::save_file_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 383);
			this->Controls->Add(this->save_file);
			this->Controls->Add(this->sbros);
			this->Controls->Add(this->mark_5);
			this->Controls->Add(this->mark_4);
			this->Controls->Add(this->mark_3);
			this->Controls->Add(this->mark_2);
			this->Controls->Add(this->mark_1);
			this->Controls->Add(this->text_surename);
			this->Controls->Add(this->but_add);
			this->Controls->Add(this->ficha_4);
			this->Controls->Add(this->ficha_3);
			this->Controls->Add(this->ficha_2);
			this->Controls->Add(this->list);
			this->Controls->Add(this->but_fix);
			this->Controls->Add(this->text_name);
			this->Controls->Add(this->Number_stud);
			this->Controls->Add(this->ficha_1);
			this->MaximumSize = System::Drawing::Size(494, 430);
			this->MinimumSize = System::Drawing::Size(494, 430);
			this->Name = L"TopSoft";
			this->Text = L"TopSoft";
			this->Load += gcnew System::EventHandler(this, &TopSoft::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void menuStrip2_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	mark_1->SelectedIndex = 0;
	mark_2->SelectedIndex = 0;
	mark_3->SelectedIndex = 0;
	mark_4->SelectedIndex = 0;
	mark_5->SelectedIndex = 0;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void save_file_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
