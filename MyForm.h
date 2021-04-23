#pragma once

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_Vhod;
	protected:
	private: System::Windows::Forms::Label^ label_VvediteParol;
	private: System::Windows::Forms::TextBox^ textBox_MasterPassword;
	private: System::Windows::Forms::Button^ btn_Voiti;
	private: System::Windows::Forms::CheckBox^ checkBox_RememberPassword;
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_Vhod = (gcnew System::Windows::Forms::Label());
			this->label_VvediteParol = (gcnew System::Windows::Forms::Label());
			this->textBox_MasterPassword = (gcnew System::Windows::Forms::TextBox());
			this->btn_Voiti = (gcnew System::Windows::Forms::Button());
			this->checkBox_RememberPassword = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_Vhod
			// 
			resources->ApplyResources(this->label_Vhod, L"label_Vhod");
			this->label_Vhod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_Vhod->Name = L"label_Vhod";
			// 
			// label_VvediteParol
			// 
			resources->ApplyResources(this->label_VvediteParol, L"label_VvediteParol");
			this->label_VvediteParol->Name = L"label_VvediteParol";
			// 
			// textBox_MasterPassword
			// 
			this->textBox_MasterPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox_MasterPassword, L"textBox_MasterPassword");
			this->textBox_MasterPassword->Name = L"textBox_MasterPassword";
			// 
			// btn_Voiti
			// 
			resources->ApplyResources(this->btn_Voiti, L"btn_Voiti");
			this->btn_Voiti->Name = L"btn_Voiti";
			this->btn_Voiti->UseVisualStyleBackColor = true;
			// 
			// checkBox_RememberPassword
			// 
			resources->ApplyResources(this->checkBox_RememberPassword, L"checkBox_RememberPassword");
			this->checkBox_RememberPassword->Name = L"checkBox_RememberPassword";
			this->checkBox_RememberPassword->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_Voiti);
			this->groupBox1->Controls->Add(this->checkBox_RememberPassword);
			this->groupBox1->Controls->Add(this->textBox_MasterPassword);
			this->groupBox1->Controls->Add(this->label_Vhod);
			this->groupBox1->Controls->Add(this->label_VvediteParol);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

int a = 0;