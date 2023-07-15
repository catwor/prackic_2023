#pragma once
#include <msclr/marshal_cppstd.h>
#include "AVL_tree.h"
#include "Dynamic_list_2.h"
#include "SeekTree.h"

namespace prackic2023 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ TopSoft
	/// </summary>
	public ref class TopSoft : public System::Windows::Forms::Form
	{
	public:
		TopSoft(void)
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
		~TopSoft()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ficha_1;
	protected:


	private: System::Windows::Forms::TextBox^ text_name;
	protected:


	private: System::Windows::Forms::Button^ but_fix;
	public: System::Windows::Forms::ListView^ list;
	private:

	private: System::Windows::Forms::Button^ ficha_2;
	private: System::Windows::Forms::Button^ ficha_3;
	private: System::Windows::Forms::Button^ ficha_4;






	private: System::Windows::Forms::Button^ but_add;
	private: System::Windows::Forms::TextBox^ text_surename;
	private: System::Windows::Forms::ComboBox^ mark_1;
	private: System::Windows::Forms::ComboBox^ mark_2;
	private: System::Windows::Forms::ComboBox^ mark_3;
	private: System::Windows::Forms::ComboBox^ mark_4;
	public: System::Windows::Forms::ComboBox^ mark_5;
	private: System::Windows::Forms::Button^ clear;
	public:
	private:









	private: System::Windows::Forms::TextBox^ Number_stud;

	private: System::Windows::Forms::Button^ save_file;

	public:
	private: System::ComponentModel::IContainer^ components;
	private:









	protected:















	protected:















	protected:










































	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ficha_1 = (gcnew System::Windows::Forms::Button());
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->but_fix = (gcnew System::Windows::Forms::Button());
			this->list = (gcnew System::Windows::Forms::ListView());
			this->ficha_2 = (gcnew System::Windows::Forms::Button());
			this->ficha_3 = (gcnew System::Windows::Forms::Button());
			this->ficha_4 = (gcnew System::Windows::Forms::Button());
			this->but_add = (gcnew System::Windows::Forms::Button());
			this->text_surename = (gcnew System::Windows::Forms::TextBox());
			this->mark_1 = (gcnew System::Windows::Forms::ComboBox());
			this->mark_2 = (gcnew System::Windows::Forms::ComboBox());
			this->mark_3 = (gcnew System::Windows::Forms::ComboBox());
			this->mark_4 = (gcnew System::Windows::Forms::ComboBox());
			this->mark_5 = (gcnew System::Windows::Forms::ComboBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->Number_stud = (gcnew System::Windows::Forms::TextBox());
			this->save_file = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ficha_1
			// 
			this->ficha_1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->ficha_1->Location = System::Drawing::Point(353, 163);
			this->ficha_1->Name = L"ficha_1";
			this->ficha_1->Size = System::Drawing::Size(83, 24);
			this->ficha_1->TabIndex = 9;
			this->ficha_1->Text = L"button1";
			this->ficha_1->UseVisualStyleBackColor = true;
			this->ficha_1->Click += gcnew System::EventHandler(this, &TopSoft::button1_Click);
			// 
			// text_name
			// 
			this->text_name->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->text_name->Location = System::Drawing::Point(29, 66);
			this->text_name->MaxLength = 20;
			this->text_name->Multiline = true;
			this->text_name->Name = L"text_name";
			this->text_name->Size = System::Drawing::Size(171, 25);
			this->text_name->TabIndex = 14;
			this->text_name->Text = L"Name";
			this->text_name->TextChanged += gcnew System::EventHandler(this, &TopSoft::textBox2_TextChanged_1);
			// 
			// but_fix
			// 
			this->but_fix->Location = System::Drawing::Point(133, 24);
			this->but_fix->Name = L"but_fix";
			this->but_fix->Size = System::Drawing::Size(94, 25);
			this->but_fix->TabIndex = 16;
			this->but_fix->Text = L"fix";
			this->but_fix->UseVisualStyleBackColor = true;
			this->but_fix->Click += gcnew System::EventHandler(this, &TopSoft::button5_Click);
			// 
			// list
			// 
			this->list->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->list->HideSelection = false;
			this->list->Location = System::Drawing::Point(133, 117);
			this->list->Name = L"list";
			this->list->Size = System::Drawing::Size(198, 243);
			this->list->TabIndex = 23;
			this->list->UseCompatibleStateImageBehavior = false;
			this->list->View = System::Windows::Forms::View::List;
			this->list->SelectedIndexChanged += gcnew System::EventHandler(this, &TopSoft::listView1_SelectedIndexChanged);
			// 
			// ficha_2
			// 
			this->ficha_2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->ficha_2->Location = System::Drawing::Point(353, 210);
			this->ficha_2->Name = L"ficha_2";
			this->ficha_2->Size = System::Drawing::Size(83, 24);
			this->ficha_2->TabIndex = 28;
			this->ficha_2->Text = L"button2";
			this->ficha_2->UseVisualStyleBackColor = true;
			this->ficha_2->Click += gcnew System::EventHandler(this, &TopSoft::button2_Click_1);
			// 
			// ficha_3
			// 
			this->ficha_3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->ficha_3->Location = System::Drawing::Point(353, 261);
			this->ficha_3->Name = L"ficha_3";
			this->ficha_3->Size = System::Drawing::Size(83, 24);
			this->ficha_3->TabIndex = 29;
			this->ficha_3->Text = L"button3";
			this->ficha_3->UseVisualStyleBackColor = true;
			this->ficha_3->Click += gcnew System::EventHandler(this, &TopSoft::button3_Click);
			// 
			// ficha_4
			// 
			this->ficha_4->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->ficha_4->Location = System::Drawing::Point(353, 305);
			this->ficha_4->Name = L"ficha_4";
			this->ficha_4->Size = System::Drawing::Size(83, 24);
			this->ficha_4->TabIndex = 30;
			this->ficha_4->Text = L"button4";
			this->ficha_4->UseVisualStyleBackColor = true;
			this->ficha_4->Click += gcnew System::EventHandler(this, &TopSoft::button4_Click);
			// 
			// but_add
			// 
			this->but_add->Location = System::Drawing::Point(353, 24);
			this->but_add->Name = L"but_add";
			this->but_add->Size = System::Drawing::Size(94, 25);
			this->but_add->TabIndex = 31;
			this->but_add->Text = L"add";
			this->but_add->UseVisualStyleBackColor = true;
			this->but_add->Click += gcnew System::EventHandler(this, &TopSoft::but_add_Click);
			// 
			// text_surename
			// 
			this->text_surename->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->text_surename->Location = System::Drawing::Point(276, 66);
			this->text_surename->MaxLength = 20;
			this->text_surename->Multiline = true;
			this->text_surename->Name = L"text_surename";
			this->text_surename->Size = System::Drawing::Size(171, 25);
			this->text_surename->TabIndex = 32;
			this->text_surename->Text = L"Surename";
			this->text_surename->TextChanged += gcnew System::EventHandler(this, &TopSoft::textBox3_TextChanged_1);
			// 
			// mark_1
			// 
			this->mark_1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mark_1->FormattingEnabled = true;
			this->mark_1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->mark_1->Location = System::Drawing::Point(29, 117);
			this->mark_1->Name = L"mark_1";
			this->mark_1->Size = System::Drawing::Size(80, 24);
			this->mark_1->TabIndex = 37;
			this->mark_1->SelectedIndexChanged += gcnew System::EventHandler(this, &TopSoft::comboBox1_SelectedIndexChanged);
			// 
			// mark_2
			// 
			this->mark_2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mark_2->FormattingEnabled = true;
			this->mark_2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->mark_2->Location = System::Drawing::Point(29, 164);
			this->mark_2->Name = L"mark_2";
			this->mark_2->Size = System::Drawing::Size(80, 24);
			this->mark_2->TabIndex = 38;
			this->mark_2->SelectedIndexChanged += gcnew System::EventHandler(this, &TopSoft::comboBox2_SelectedIndexChanged);
			// 
			// mark_3
			// 
			this->mark_3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mark_3->FormattingEnabled = true;
			this->mark_3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->mark_3->Location = System::Drawing::Point(29, 215);
			this->mark_3->Name = L"mark_3";
			this->mark_3->Size = System::Drawing::Size(80, 24);
			this->mark_3->TabIndex = 39;
			this->mark_3->SelectedIndexChanged += gcnew System::EventHandler(this, &TopSoft::comboBox3_SelectedIndexChanged);
			// 
			// mark_4
			// 
			this->mark_4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mark_4->FormattingEnabled = true;
			this->mark_4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->mark_4->Location = System::Drawing::Point(29, 260);
			this->mark_4->Name = L"mark_4";
			this->mark_4->Size = System::Drawing::Size(80, 24);
			this->mark_4->TabIndex = 40;
			this->mark_4->SelectedIndexChanged += gcnew System::EventHandler(this, &TopSoft::comboBox4_SelectedIndexChanged);
			// 
			// mark_5
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
			// clear
			// 
			this->clear->Location = System::Drawing::Point(237, 25);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(94, 23);
			this->clear->TabIndex = 42;
			this->clear->Text = L"clear";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &TopSoft::button1_Click_1);
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
			// 
			// TopSoft
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 383);
			this->Controls->Add(this->save_file);
			this->Controls->Add(this->clear);
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
	clear->Enabled = false;
	mark_1->SelectedIndex = 0;
	mark_2->SelectedIndex = 0;
	mark_3->SelectedIndex = 0;
	mark_4->SelectedIndex = 0;
	mark_5->SelectedIndex = 0;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	bool tryNumber = Int32::TryParse(Number_stud->Text, number);
	if (tryNumber) {
		number = Convert::ToInt32(Number_stud->Text);
		if (number > 0) {
			Number_stud->Enabled = false;
			clear->Enabled = true;
			but_fix->Enabled = false;
		}
		else
			MessageBox::Show("uncorect", "Message of ERROR");
	}
	else
		MessageBox::Show("uncorect", "Message of ERROR");
}


private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void but_add_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Number_stud->Enabled && !String::IsNullOrWhiteSpace(text_name->Text) && !String::IsNullOrWhiteSpace(text_surename->Text)){
		//std::string addItem;
		if (Convert::ToInt32(Number_stud->Text) > list->Items->Count) {
			String^ Item_FIO = text_name->Text + " " + text_surename->Text + " ";
			String^ Item_marks = mark_1->Text + " " + mark_2->Text + " " + mark_3->Text + " " + mark_4->Text + " "+mark_5->Text;
			ListViewItem^ newItem = gcnew ListViewItem(Item_FIO+" "+Item_marks);
			list->Items->Add(newItem);
		}
		else
			MessageBox::Show("A lot of stud", "Message of ERROR");
	}
	else
		MessageBox::Show("uncorect", "Message of ERROR");
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Number_stud->Enabled = true;
	but_fix->Enabled = true;
	Number_stud->Text = "N student";
	list->Items->Clear();
	text_name -> Text = "Name";
	text_surename->Text = "Surename";
	clear->Enabled = false;
}
private: System::Void save_file_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
