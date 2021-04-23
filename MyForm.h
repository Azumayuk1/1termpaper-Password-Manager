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
	private: System::Windows::Forms::Label^ label_GBENT_Vhod;
	private: System::Windows::Forms::Label^ label_GBENT_VvediteParol;
	private: System::Windows::Forms::TextBox^ textBox_GBENT_MasterPassword;
	private: System::Windows::Forms::Button^ btn_GBENT_Voiti;
	private: System::Windows::Forms::CheckBox^ checkBox_GBENT_RememberPassword;
	protected:

	protected:




	private: System::Windows::Forms::GroupBox^ GBENT_groupBox_Vhod;
	private: System::Windows::Forms::GroupBox^ GBREG_groupBox_Register;
	private: System::Windows::Forms::Button^ button_GBREG_CreateMasterPassword;



	private: System::Windows::Forms::TextBox^ textBox_GBREG_CreateMasterPassword;

	private: System::Windows::Forms::Label^ label_GBREG_CreateMasterPassword;

	private: System::Windows::Forms::GroupBox^ GBADD_groupBox_AddPassword;

	private: System::Windows::Forms::Button^ button_GBADD_AddPassword;

	private: System::Windows::Forms::RichTextBox^ richTextBox_GBADD_Primechanie;

	private: System::Windows::Forms::Label^ label_GBADD_Primechanie;

	private: System::Windows::Forms::TextBox^ textBox_GBADD_Site;

	private: System::Windows::Forms::Label^ label_GBADD_Site;

	private: System::Windows::Forms::TextBox^ textBox_GBADD_Password;

	private: System::Windows::Forms::Label^ label_GBADD_Password;

	private: System::Windows::Forms::TextBox^ textBox_GBADD_Nazvanie;

	private: System::Windows::Forms::Label^ label_GBADD_Nazvanie;




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
			this->label_GBENT_Vhod = (gcnew System::Windows::Forms::Label());
			this->label_GBENT_VvediteParol = (gcnew System::Windows::Forms::Label());
			this->textBox_GBENT_MasterPassword = (gcnew System::Windows::Forms::TextBox());
			this->btn_GBENT_Voiti = (gcnew System::Windows::Forms::Button());
			this->checkBox_GBENT_RememberPassword = (gcnew System::Windows::Forms::CheckBox());
			this->GBENT_groupBox_Vhod = (gcnew System::Windows::Forms::GroupBox());
			this->GBREG_groupBox_Register = (gcnew System::Windows::Forms::GroupBox());
			this->label_GBREG_CreateMasterPassword = (gcnew System::Windows::Forms::Label());
			this->textBox_GBREG_CreateMasterPassword = (gcnew System::Windows::Forms::TextBox());
			this->button_GBREG_CreateMasterPassword = (gcnew System::Windows::Forms::Button());
			this->GBADD_groupBox_AddPassword = (gcnew System::Windows::Forms::GroupBox());
			this->label_GBADD_Nazvanie = (gcnew System::Windows::Forms::Label());
			this->textBox_GBADD_Nazvanie = (gcnew System::Windows::Forms::TextBox());
			this->label_GBADD_Password = (gcnew System::Windows::Forms::Label());
			this->textBox_GBADD_Password = (gcnew System::Windows::Forms::TextBox());
			this->label_GBADD_Site = (gcnew System::Windows::Forms::Label());
			this->textBox_GBADD_Site = (gcnew System::Windows::Forms::TextBox());
			this->label_GBADD_Primechanie = (gcnew System::Windows::Forms::Label());
			this->richTextBox_GBADD_Primechanie = (gcnew System::Windows::Forms::RichTextBox());
			this->button_GBADD_AddPassword = (gcnew System::Windows::Forms::Button());
			this->GBENT_groupBox_Vhod->SuspendLayout();
			this->GBREG_groupBox_Register->SuspendLayout();
			this->GBADD_groupBox_AddPassword->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_GBENT_Vhod
			// 
			resources->ApplyResources(this->label_GBENT_Vhod, L"label_GBENT_Vhod");
			this->label_GBENT_Vhod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_GBENT_Vhod->Name = L"label_GBENT_Vhod";
			// 
			// label_GBENT_VvediteParol
			// 
			resources->ApplyResources(this->label_GBENT_VvediteParol, L"label_GBENT_VvediteParol");
			this->label_GBENT_VvediteParol->Name = L"label_GBENT_VvediteParol";
			// 
			// textBox_GBENT_MasterPassword
			// 
			this->textBox_GBENT_MasterPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox_GBENT_MasterPassword, L"textBox_GBENT_MasterPassword");
			this->textBox_GBENT_MasterPassword->Name = L"textBox_GBENT_MasterPassword";
			// 
			// btn_GBENT_Voiti
			// 
			resources->ApplyResources(this->btn_GBENT_Voiti, L"btn_GBENT_Voiti");
			this->btn_GBENT_Voiti->Name = L"btn_GBENT_Voiti";
			this->btn_GBENT_Voiti->UseVisualStyleBackColor = true;
			// 
			// checkBox_GBENT_RememberPassword
			// 
			resources->ApplyResources(this->checkBox_GBENT_RememberPassword, L"checkBox_GBENT_RememberPassword");
			this->checkBox_GBENT_RememberPassword->Name = L"checkBox_GBENT_RememberPassword";
			this->checkBox_GBENT_RememberPassword->UseVisualStyleBackColor = true;
			// 
			// GBENT_groupBox_Vhod
			// 
			this->GBENT_groupBox_Vhod->Controls->Add(this->btn_GBENT_Voiti);
			this->GBENT_groupBox_Vhod->Controls->Add(this->checkBox_GBENT_RememberPassword);
			this->GBENT_groupBox_Vhod->Controls->Add(this->textBox_GBENT_MasterPassword);
			this->GBENT_groupBox_Vhod->Controls->Add(this->label_GBENT_Vhod);
			this->GBENT_groupBox_Vhod->Controls->Add(this->label_GBENT_VvediteParol);
			resources->ApplyResources(this->GBENT_groupBox_Vhod, L"GBENT_groupBox_Vhod");
			this->GBENT_groupBox_Vhod->Name = L"GBENT_groupBox_Vhod";
			this->GBENT_groupBox_Vhod->TabStop = false;
			// 
			// GBREG_groupBox_Register
			// 
			this->GBREG_groupBox_Register->Controls->Add(this->button_GBREG_CreateMasterPassword);
			this->GBREG_groupBox_Register->Controls->Add(this->textBox_GBREG_CreateMasterPassword);
			this->GBREG_groupBox_Register->Controls->Add(this->label_GBREG_CreateMasterPassword);
			resources->ApplyResources(this->GBREG_groupBox_Register, L"GBREG_groupBox_Register");
			this->GBREG_groupBox_Register->Name = L"GBREG_groupBox_Register";
			this->GBREG_groupBox_Register->TabStop = false;
			// 
			// label_GBREG_CreateMasterPassword
			// 
			resources->ApplyResources(this->label_GBREG_CreateMasterPassword, L"label_GBREG_CreateMasterPassword");
			this->label_GBREG_CreateMasterPassword->Name = L"label_GBREG_CreateMasterPassword";
			// 
			// textBox_GBREG_CreateMasterPassword
			// 
			resources->ApplyResources(this->textBox_GBREG_CreateMasterPassword, L"textBox_GBREG_CreateMasterPassword");
			this->textBox_GBREG_CreateMasterPassword->Name = L"textBox_GBREG_CreateMasterPassword";
			// 
			// button_GBREG_CreateMasterPassword
			// 
			resources->ApplyResources(this->button_GBREG_CreateMasterPassword, L"button_GBREG_CreateMasterPassword");
			this->button_GBREG_CreateMasterPassword->Name = L"button_GBREG_CreateMasterPassword";
			this->button_GBREG_CreateMasterPassword->UseVisualStyleBackColor = true;
			// 
			// GBADD_groupBox_AddPassword
			// 
			this->GBADD_groupBox_AddPassword->Controls->Add(this->button_GBADD_AddPassword);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->richTextBox_GBADD_Primechanie);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->label_GBADD_Primechanie);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->textBox_GBADD_Site);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->label_GBADD_Site);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->textBox_GBADD_Password);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->label_GBADD_Password);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->textBox_GBADD_Nazvanie);
			this->GBADD_groupBox_AddPassword->Controls->Add(this->label_GBADD_Nazvanie);
			resources->ApplyResources(this->GBADD_groupBox_AddPassword, L"GBADD_groupBox_AddPassword");
			this->GBADD_groupBox_AddPassword->Name = L"GBADD_groupBox_AddPassword";
			this->GBADD_groupBox_AddPassword->TabStop = false;
			// 
			// label_GBADD_Nazvanie
			// 
			resources->ApplyResources(this->label_GBADD_Nazvanie, L"label_GBADD_Nazvanie");
			this->label_GBADD_Nazvanie->Name = L"label_GBADD_Nazvanie";
			// 
			// textBox_GBADD_Nazvanie
			// 
			resources->ApplyResources(this->textBox_GBADD_Nazvanie, L"textBox_GBADD_Nazvanie");
			this->textBox_GBADD_Nazvanie->Name = L"textBox_GBADD_Nazvanie";
			// 
			// label_GBADD_Password
			// 
			resources->ApplyResources(this->label_GBADD_Password, L"label_GBADD_Password");
			this->label_GBADD_Password->Name = L"label_GBADD_Password";
			// 
			// textBox_GBADD_Password
			// 
			resources->ApplyResources(this->textBox_GBADD_Password, L"textBox_GBADD_Password");
			this->textBox_GBADD_Password->Name = L"textBox_GBADD_Password";
			// 
			// label_GBADD_Site
			// 
			resources->ApplyResources(this->label_GBADD_Site, L"label_GBADD_Site");
			this->label_GBADD_Site->Name = L"label_GBADD_Site";
			// 
			// textBox_GBADD_Site
			// 
			resources->ApplyResources(this->textBox_GBADD_Site, L"textBox_GBADD_Site");
			this->textBox_GBADD_Site->Name = L"textBox_GBADD_Site";
			// 
			// label_GBADD_Primechanie
			// 
			resources->ApplyResources(this->label_GBADD_Primechanie, L"label_GBADD_Primechanie");
			this->label_GBADD_Primechanie->Name = L"label_GBADD_Primechanie";
			// 
			// richTextBox_GBADD_Primechanie
			// 
			resources->ApplyResources(this->richTextBox_GBADD_Primechanie, L"richTextBox_GBADD_Primechanie");
			this->richTextBox_GBADD_Primechanie->Name = L"richTextBox_GBADD_Primechanie";
			// 
			// button_GBADD_AddPassword
			// 
			resources->ApplyResources(this->button_GBADD_AddPassword, L"button_GBADD_AddPassword");
			this->button_GBADD_AddPassword->Name = L"button_GBADD_AddPassword";
			this->button_GBADD_AddPassword->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->GBADD_groupBox_AddPassword);
			this->Controls->Add(this->GBREG_groupBox_Register);
			this->Controls->Add(this->GBENT_groupBox_Vhod);
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->GBENT_groupBox_Vhod->ResumeLayout(false);
			this->GBENT_groupBox_Vhod->PerformLayout();
			this->GBREG_groupBox_Register->ResumeLayout(false);
			this->GBREG_groupBox_Register->PerformLayout();
			this->GBADD_groupBox_AddPassword->ResumeLayout(false);
			this->GBADD_groupBox_AddPassword->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

int a = 0;