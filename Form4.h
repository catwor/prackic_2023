#pragma once

namespace prackic2023 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ back;
	public:
		property System::Windows::Forms::Form^ Owner;
	public:
		property int elem;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(0, 338);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(112, 46);
			this->back->TabIndex = 1;
			this->back->Text = L"back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Form4::back_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 383);
			this->Controls->Add(this->back);
			this->MaximumSize = System::Drawing::Size(494, 430);
			this->MinimumSize = System::Drawing::Size(494, 430);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		if (this->Owner) {
			this->Owner->Enabled = true;
			this->Owner->WindowState = FormWindowState::Maximized;
		}
	}
	};
}
