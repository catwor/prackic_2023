#pragma once
#include "Dynamic_list_2.h"

namespace prackic2023 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::ListBox^ listBox1;
	public:
		property System::Windows::Forms::Form^ Owner;
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
			this->back = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(1, 338);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(112, 46);
			this->back->TabIndex = 0;
			this->back->Text = L"back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Form2::back_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(13, 13);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(440, 308);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::listBox1_SelectedIndexChanged);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 383);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->back);
			this->MaximumSize = System::Drawing::Size(494, 430);
			this->MinimumSize = System::Drawing::Size(494, 430);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->ResumeLayout(false);
			//
			//startListBox
			//
			std::ifstream out("output.txt");
			DLIST stud_list(out);
			ptrNode start = stud_list.get_begin();
			while (start != stud_list.get_end()) {
				
			}

		}
#pragma endregion
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		if (this->Owner) {
			this->Owner->Enabled = true;
			this->Owner->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
