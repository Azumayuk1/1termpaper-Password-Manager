

#pragma once

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Text;
	using namespace System::IO;

	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			if (File::Exists("metadata.txt")==true) //Проверяет наличие файла, определяет первый ли запуск
			{
				Enter_Procedure();
			};
		}

		void Enter_Procedure() //Запускает процедуру входа в программу
		{
			GBENT_groupBox_Vhod->Visible = true;
			GBREG_groupBox_Register->Visible = false;
		};

		int Generate_Hash(String^ seed) //Генерирует хэш введенной строки, складывая номера кодов символов строки
		{
			int hash = 0;
			for (int i = 0; i < seed->Length; i++) 
			{ 
				hash += (int)seed[i]; 
			}
			return hash;
		};

		void Successful_Entry() //Вызывается при успешном входе в программу
		{
			GBENT_groupBox_Vhod->Visible = false;
			GBADD_groupBox_AddPassword->Visible = true;
			GBPASS_groupBox_Passwords->Visible = true;
			GBPASSINF_groupBox_PassInfo->Visible = true;
			Output_Console->Text = "";
		};

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы. Деструктор.
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
	public: System::Windows::Forms::TextBox^ textBox_GBADD_Nazvanie;
	private:



	private: System::Windows::Forms::Label^ label_GBADD_Nazvanie;
	private: System::Windows::Forms::GroupBox^ GBPASS_groupBox_Passwords;
	private: System::Windows::Forms::RichTextBox^ Output_Console;
	private: System::Windows::Forms::ListBox^ listBox_PasswordsList;

	private:

	private: System::Windows::Forms::GroupBox^ GBPASSINF_groupBox_PassInfo;
	private: System::Windows::Forms::RichTextBox^ richTextBox_GBPASSINF_Primechanie;
	private: System::Windows::Forms::Label^ label_GBPASSIF_Primechanie;
	private: System::Windows::Forms::TextBox^ textBox_GBPASSINF_Site;
	private: System::Windows::Forms::Label^ label_GBPASSINF_Site;
	private: System::Windows::Forms::Button^ GBPASSINF_button_ShowHidePassword;
	private: System::Windows::Forms::TextBox^ textBox_GBPASSINF_Password;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_GBENT_Vhod = (gcnew System::Windows::Forms::Label());
			this->label_GBENT_VvediteParol = (gcnew System::Windows::Forms::Label());
			this->textBox_GBENT_MasterPassword = (gcnew System::Windows::Forms::TextBox());
			this->btn_GBENT_Voiti = (gcnew System::Windows::Forms::Button());
			this->GBENT_groupBox_Vhod = (gcnew System::Windows::Forms::GroupBox());
			this->GBREG_groupBox_Register = (gcnew System::Windows::Forms::GroupBox());
			this->button_GBREG_CreateMasterPassword = (gcnew System::Windows::Forms::Button());
			this->textBox_GBREG_CreateMasterPassword = (gcnew System::Windows::Forms::TextBox());
			this->label_GBREG_CreateMasterPassword = (gcnew System::Windows::Forms::Label());
			this->GBADD_groupBox_AddPassword = (gcnew System::Windows::Forms::GroupBox());
			this->button_GBADD_AddPassword = (gcnew System::Windows::Forms::Button());
			this->richTextBox_GBADD_Primechanie = (gcnew System::Windows::Forms::RichTextBox());
			this->label_GBADD_Primechanie = (gcnew System::Windows::Forms::Label());
			this->textBox_GBADD_Site = (gcnew System::Windows::Forms::TextBox());
			this->label_GBADD_Site = (gcnew System::Windows::Forms::Label());
			this->textBox_GBADD_Password = (gcnew System::Windows::Forms::TextBox());
			this->label_GBADD_Password = (gcnew System::Windows::Forms::Label());
			this->textBox_GBADD_Nazvanie = (gcnew System::Windows::Forms::TextBox());
			this->label_GBADD_Nazvanie = (gcnew System::Windows::Forms::Label());
			this->GBPASS_groupBox_Passwords = (gcnew System::Windows::Forms::GroupBox());
			this->listBox_PasswordsList = (gcnew System::Windows::Forms::ListBox());
			this->Output_Console = (gcnew System::Windows::Forms::RichTextBox());
			this->GBPASSINF_groupBox_PassInfo = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox_GBPASSINF_Primechanie = (gcnew System::Windows::Forms::RichTextBox());
			this->label_GBPASSIF_Primechanie = (gcnew System::Windows::Forms::Label());
			this->textBox_GBPASSINF_Site = (gcnew System::Windows::Forms::TextBox());
			this->label_GBPASSINF_Site = (gcnew System::Windows::Forms::Label());
			this->GBPASSINF_button_ShowHidePassword = (gcnew System::Windows::Forms::Button());
			this->textBox_GBPASSINF_Password = (gcnew System::Windows::Forms::TextBox());
			this->GBENT_groupBox_Vhod->SuspendLayout();
			this->GBREG_groupBox_Register->SuspendLayout();
			this->GBADD_groupBox_AddPassword->SuspendLayout();
			this->GBPASS_groupBox_Passwords->SuspendLayout();
			this->GBPASSINF_groupBox_PassInfo->SuspendLayout();
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
			this->btn_GBENT_Voiti->Click += gcnew System::EventHandler(this, &MyForm::btn_GBENT_Voiti_Click);
			// 
			// GBENT_groupBox_Vhod
			// 
			this->GBENT_groupBox_Vhod->Controls->Add(this->btn_GBENT_Voiti);
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
			// button_GBREG_CreateMasterPassword
			// 
			resources->ApplyResources(this->button_GBREG_CreateMasterPassword, L"button_GBREG_CreateMasterPassword");
			this->button_GBREG_CreateMasterPassword->Name = L"button_GBREG_CreateMasterPassword";
			this->button_GBREG_CreateMasterPassword->UseVisualStyleBackColor = true;
			this->button_GBREG_CreateMasterPassword->Click += gcnew System::EventHandler(this, &MyForm::button_GBREG_CreateMasterPassword_Click);
			// 
			// textBox_GBREG_CreateMasterPassword
			// 
			resources->ApplyResources(this->textBox_GBREG_CreateMasterPassword, L"textBox_GBREG_CreateMasterPassword");
			this->textBox_GBREG_CreateMasterPassword->Name = L"textBox_GBREG_CreateMasterPassword";
			// 
			// label_GBREG_CreateMasterPassword
			// 
			resources->ApplyResources(this->label_GBREG_CreateMasterPassword, L"label_GBREG_CreateMasterPassword");
			this->label_GBREG_CreateMasterPassword->Name = L"label_GBREG_CreateMasterPassword";
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
			// button_GBADD_AddPassword
			// 
			resources->ApplyResources(this->button_GBADD_AddPassword, L"button_GBADD_AddPassword");
			this->button_GBADD_AddPassword->Name = L"button_GBADD_AddPassword";
			this->button_GBADD_AddPassword->UseVisualStyleBackColor = true;
			this->button_GBADD_AddPassword->Click += gcnew System::EventHandler(this, &MyForm::button_GBADD_AddPassword_Click);
			// 
			// richTextBox_GBADD_Primechanie
			// 
			resources->ApplyResources(this->richTextBox_GBADD_Primechanie, L"richTextBox_GBADD_Primechanie");
			this->richTextBox_GBADD_Primechanie->Name = L"richTextBox_GBADD_Primechanie";
			// 
			// label_GBADD_Primechanie
			// 
			resources->ApplyResources(this->label_GBADD_Primechanie, L"label_GBADD_Primechanie");
			this->label_GBADD_Primechanie->Name = L"label_GBADD_Primechanie";
			// 
			// textBox_GBADD_Site
			// 
			resources->ApplyResources(this->textBox_GBADD_Site, L"textBox_GBADD_Site");
			this->textBox_GBADD_Site->Name = L"textBox_GBADD_Site";
			// 
			// label_GBADD_Site
			// 
			resources->ApplyResources(this->label_GBADD_Site, L"label_GBADD_Site");
			this->label_GBADD_Site->Name = L"label_GBADD_Site";
			// 
			// textBox_GBADD_Password
			// 
			resources->ApplyResources(this->textBox_GBADD_Password, L"textBox_GBADD_Password");
			this->textBox_GBADD_Password->Name = L"textBox_GBADD_Password";
			// 
			// label_GBADD_Password
			// 
			resources->ApplyResources(this->label_GBADD_Password, L"label_GBADD_Password");
			this->label_GBADD_Password->Name = L"label_GBADD_Password";
			// 
			// textBox_GBADD_Nazvanie
			// 
			resources->ApplyResources(this->textBox_GBADD_Nazvanie, L"textBox_GBADD_Nazvanie");
			this->textBox_GBADD_Nazvanie->Name = L"textBox_GBADD_Nazvanie";
			// 
			// label_GBADD_Nazvanie
			// 
			resources->ApplyResources(this->label_GBADD_Nazvanie, L"label_GBADD_Nazvanie");
			this->label_GBADD_Nazvanie->Name = L"label_GBADD_Nazvanie";
			// 
			// GBPASS_groupBox_Passwords
			// 
			this->GBPASS_groupBox_Passwords->Controls->Add(this->listBox_PasswordsList);
			resources->ApplyResources(this->GBPASS_groupBox_Passwords, L"GBPASS_groupBox_Passwords");
			this->GBPASS_groupBox_Passwords->Name = L"GBPASS_groupBox_Passwords";
			this->GBPASS_groupBox_Passwords->TabStop = false;
			// 
			// listBox_PasswordsList
			// 
			this->listBox_PasswordsList->FormattingEnabled = true;
			resources->ApplyResources(this->listBox_PasswordsList, L"listBox_PasswordsList");
			this->listBox_PasswordsList->Name = L"listBox_PasswordsList";
			// 
			// Output_Console
			// 
			this->Output_Console->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->Output_Console, L"Output_Console");
			this->Output_Console->Name = L"Output_Console";
			// 
			// GBPASSINF_groupBox_PassInfo
			// 
			this->GBPASSINF_groupBox_PassInfo->Controls->Add(this->richTextBox_GBPASSINF_Primechanie);
			this->GBPASSINF_groupBox_PassInfo->Controls->Add(this->label_GBPASSIF_Primechanie);
			this->GBPASSINF_groupBox_PassInfo->Controls->Add(this->textBox_GBPASSINF_Site);
			this->GBPASSINF_groupBox_PassInfo->Controls->Add(this->label_GBPASSINF_Site);
			this->GBPASSINF_groupBox_PassInfo->Controls->Add(this->GBPASSINF_button_ShowHidePassword);
			this->GBPASSINF_groupBox_PassInfo->Controls->Add(this->textBox_GBPASSINF_Password);
			resources->ApplyResources(this->GBPASSINF_groupBox_PassInfo, L"GBPASSINF_groupBox_PassInfo");
			this->GBPASSINF_groupBox_PassInfo->Name = L"GBPASSINF_groupBox_PassInfo";
			this->GBPASSINF_groupBox_PassInfo->TabStop = false;
			// 
			// richTextBox_GBPASSINF_Primechanie
			// 
			resources->ApplyResources(this->richTextBox_GBPASSINF_Primechanie, L"richTextBox_GBPASSINF_Primechanie");
			this->richTextBox_GBPASSINF_Primechanie->Name = L"richTextBox_GBPASSINF_Primechanie";
			this->richTextBox_GBPASSINF_Primechanie->ReadOnly = true;
			// 
			// label_GBPASSIF_Primechanie
			// 
			resources->ApplyResources(this->label_GBPASSIF_Primechanie, L"label_GBPASSIF_Primechanie");
			this->label_GBPASSIF_Primechanie->Name = L"label_GBPASSIF_Primechanie";
			// 
			// textBox_GBPASSINF_Site
			// 
			resources->ApplyResources(this->textBox_GBPASSINF_Site, L"textBox_GBPASSINF_Site");
			this->textBox_GBPASSINF_Site->Name = L"textBox_GBPASSINF_Site";
			this->textBox_GBPASSINF_Site->ReadOnly = true;
			// 
			// label_GBPASSINF_Site
			// 
			resources->ApplyResources(this->label_GBPASSINF_Site, L"label_GBPASSINF_Site");
			this->label_GBPASSINF_Site->Name = L"label_GBPASSINF_Site";
			// 
			// GBPASSINF_button_ShowHidePassword
			// 
			resources->ApplyResources(this->GBPASSINF_button_ShowHidePassword, L"GBPASSINF_button_ShowHidePassword");
			this->GBPASSINF_button_ShowHidePassword->Name = L"GBPASSINF_button_ShowHidePassword";
			this->GBPASSINF_button_ShowHidePassword->UseVisualStyleBackColor = true;
			this->GBPASSINF_button_ShowHidePassword->Click += gcnew System::EventHandler(this, &MyForm::GBPASSINF_button_ShowHidePassword_Click);
			// 
			// textBox_GBPASSINF_Password
			// 
			resources->ApplyResources(this->textBox_GBPASSINF_Password, L"textBox_GBPASSINF_Password");
			this->textBox_GBPASSINF_Password->Name = L"textBox_GBPASSINF_Password";
			this->textBox_GBPASSINF_Password->ReadOnly = true;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->GBPASSINF_groupBox_PassInfo);
			this->Controls->Add(this->Output_Console);
			this->Controls->Add(this->GBPASS_groupBox_Passwords);
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
			this->GBPASS_groupBox_Passwords->ResumeLayout(false);
			this->GBPASSINF_groupBox_PassInfo->ResumeLayout(false);
			this->GBPASSINF_groupBox_PassInfo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	

	private: System::Void button_GBREG_CreateMasterPassword_Click(System::Object^ sender, System::EventArgs^ e) {
		
		StreamWriter^ sw = gcnew StreamWriter("metadata.txt");
		StreamWriter^ sd = gcnew StreamWriter("passwords_data.txt");
		String^ password = textBox_GBREG_CreateMasterPassword->Text;

		//Output_Console->Text = System::Convert::ToString(Generate_Hash(password));               // DEBUG, проверка генерации хэша

		sw->WriteLine(Generate_Hash(password)); // Записывает полученный из формы хэш в файл metadata.txt
		sw->Close();
		GBREG_groupBox_Register->Visible = false;

		Output_Console->AppendText("Мастер-пароль создан, перезапустите программу.");
		
	}

		   ref class Password_Save // Класс отвечает за запись новых паролей в текстовый файл passwords_data.txt
		   {
		   public:
			   String^ pass_name;
			   String^ pass_password;
			   String^ pass_website;
			   String^ pass_info;

			   
			   StreamWriter^ pass_w = gcnew StreamWriter("passwords_data.txt", true);

			   Password_Save(String^ name, String^ password, String^ website, String^ info) //Constructor
			   {
				   pass_name = name;
				   pass_password = password;
				   pass_website = website;
				   pass_info = info;
				
			   };

			   void Write_File() { // Метод отвечает за запись паролей в файл
				   pass_w->WriteLine("#");
				   pass_w->WriteLine(pass_name);
				   pass_w->WriteLine(pass_password);
				   pass_w->WriteLine(pass_website);
				   pass_w->WriteLine(pass_info);
				   pass_w->Close();
				   
			   };

		   };

		   
private: System::Void button_GBADD_AddPassword_Click(System::Object^ sender, System::EventArgs^ e) {

	Password_Save password_summon_write(textBox_GBADD_Nazvanie->Text, textBox_GBADD_Password->Text, textBox_GBADD_Site->Text, richTextBox_GBADD_Primechanie->Text);
	password_summon_write.Write_File();

	//listBox_PasswordsList->Items->Add(textBox_GBADD_Nazvanie->Text); DEBUG
	//Output_Console->Text = System::Convert::ToString(listBox_PasswordsList->SelectedItem); DEBUG
	Output_Console->Text = "Пароль добавлен.";
	textBox_GBADD_Nazvanie->Text = "";
	textBox_GBADD_Password->Text = "";
	textBox_GBADD_Site->Text = "";
	richTextBox_GBADD_Primechanie->Text = "";

	Password_Read pass_repeat_initialize(textBox_GBADD_Nazvanie->Text, textBox_GBADD_Password->Text, textBox_GBADD_Site->Text, richTextBox_GBADD_Primechanie->Text);//Повторная загрузка списка паролей 
	pass_repeat_initialize.Read_Collection(listBox_PasswordsList);																									//при добавлении нового
	

}
	   ref class Password_Read { // Класс отвечает за чтение паролей из файла, их появление в списке
	   public:
		   String^ pass_name;
		   String^ pass_password;
		   String^ pass_website;
		   String^ pass_info;

		   StreamReader^ pass_r = gcnew StreamReader("passwords_data.txt");
		   Password_Read(String^ name, String^ password, String^ website, String^ info) 
		   {          
			   pass_name = name;
			   pass_password = password;
			   pass_website = website;
			   pass_info = info;
		   };

		   void Read_Collection(System::Windows::Forms::ListBox^ listBox)//Метод считывет названия паролей из файла и записывает в коллекцию listBox
		   {
			listBox->Items->Clear();
			
				   while (pass_r->ReadLine() != nullptr) 
				   {
					   listBox->Items->Add(pass_r->ReadLine());
					   for (int i = 0; i < 3; i++) 
					   {
						   pass_r->ReadLine();
					   }
				   }

			pass_r->Close(); 
		   };

		   void Get_Selected_Password(System::Windows::Forms::ListBox^ _listBox, System::Windows::Forms::TextBox^ password, System::Windows::Forms::TextBox^ website, System::Windows::Forms::RichTextBox^ addition)
		   {//Метод считывает нужный пароль из файла
			   

			   while (pass_r->ReadLine() != nullptr) //#
			   {
				    // Если название пароля следующего после решетки подходит, то его данные выводятся на экран
				   if (pass_r->ReadLine() == System::Convert::ToString(_listBox->SelectedItem)) { // Nazvanie
					   password->Text = pass_r->ReadLine(); //Password
					   website->Text = pass_r->ReadLine();	//Website address
					   addition->Text = pass_r->ReadLine(); //Addition
					   
					   break;
				   }//если не подходит - программа продолжает считывание
				   else  {
					   pass_r->ReadLine();
					   pass_r->ReadLine();
					   pass_r->ReadLine();
				   }

			   }
			   pass_r->Close();


		   };
	   };
private: System::Void btn_GBENT_Voiti_Click(System::Object^ sender, System::EventArgs^ e) { // Вход в программу
	StreamReader^ sr = gcnew StreamReader("metadata.txt");
	
	if (Generate_Hash(textBox_GBENT_MasterPassword->Text) == System::Convert::ToInt32(sr->ReadLine())) // Если хэш введенного пароля совпадает с хэшем 
	{																								   // мастер-пароля, вход считается успешным
		sr->Close();
		Successful_Entry();
		


		Password_Read pass_initialize(textBox_GBADD_Nazvanie->Text, textBox_GBADD_Password->Text, textBox_GBADD_Site->Text, richTextBox_GBADD_Primechanie->Text);
		
			pass_initialize.Read_Collection(listBox_PasswordsList); // Первичное считывание паролей при запуске программы
		
	}
	else { Output_Console->Text = "Неправильный пароль. Повторите попытку."; };
}

private: System::Void GBPASSINF_button_ShowHidePassword_Click(System::Object^ sender, System::EventArgs^ e) { // Показывает выбранный пароль на экран
	Password_Read Show_Password_Data(textBox_GBADD_Nazvanie->Text, textBox_GBADD_Password->Text, textBox_GBADD_Site->Text, richTextBox_GBADD_Primechanie->Text);
	Show_Password_Data.Get_Selected_Password(listBox_PasswordsList, textBox_GBPASSINF_Password, textBox_GBPASSINF_Site, richTextBox_GBPASSINF_Primechanie);

}
};

}

