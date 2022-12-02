#pragma once
#include "Dashboard.h"


namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//
	/// <summary>
	/// Description résumée de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuTextbox^ write_Username;
	private: Bunifu::Framework::UI::BunifuThinButton2^ btn_login;
	private: Bunifu::Framework::UI::BunifuTextbox^ write_password;
	private: Bunifu::Framework::UI::BunifuThinButton2^ btn_cancel;
	private: System::Windows::Forms::Panel^ panel2;




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_cancel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_login = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->write_password = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->write_Username = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->btn_login);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->btn_cancel);
			this->panel1->Controls->Add(this->write_password);
			this->panel1->Controls->Add(this->write_Username);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(37, 26);
			this->panel1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(835, 1242);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Location = System::Drawing::Point(44, 31);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(744, 459);
			this->panel2->TabIndex = 5;
			// 
			// btn_cancel
			// 
			this->btn_cancel->ActiveBorderThickness = 1;
			this->btn_cancel->ActiveCornerRadius = 20;
			this->btn_cancel->ActiveFillColor = System::Drawing::Color::White;
			this->btn_cancel->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->btn_cancel->ActiveLineColor = System::Drawing::Color::White;
			this->btn_cancel->AllowDrop = true;
			this->btn_cancel->BackColor = System::Drawing::Color::Transparent;
			this->btn_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel.BackgroundImage")));
			this->btn_cancel->ButtonText = L"Cancel";
			this->btn_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->ForeColor = System::Drawing::Color::Honeydew;
			this->btn_cancel->IdleBorderThickness = 1;
			this->btn_cancel->IdleCornerRadius = 20;
			this->btn_cancel->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_cancel->IdleForecolor = System::Drawing::Color::White;
			this->btn_cancel->IdleLineColor = System::Drawing::Color::White;
			this->btn_cancel->Location = System::Drawing::Point(425, 991);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(363, 79);
			this->btn_cancel->TabIndex = 4;
			this->btn_cancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &login::Click_Btn_Cancel);
			// 
			// btn_login
			// 
			this->btn_login->ActiveBorderThickness = 1;
			this->btn_login->ActiveCornerRadius = 20;
			this->btn_login->ActiveFillColor = System::Drawing::Color::White;
			this->btn_login->ActiveForecolor = System::Drawing::Color::MidnightBlue;
			this->btn_login->ActiveLineColor = System::Drawing::Color::White;
			this->btn_login->AllowDrop = true;
			this->btn_login->BackColor = System::Drawing::Color::Transparent;
			this->btn_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_login.BackgroundImage")));
			this->btn_login->ButtonText = L"Login";
			this->btn_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->ForeColor = System::Drawing::Color::Honeydew;
			this->btn_login->IdleBorderThickness = 1;
			this->btn_login->IdleCornerRadius = 20;
			this->btn_login->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_login->IdleForecolor = System::Drawing::Color::White;
			this->btn_login->IdleLineColor = System::Drawing::Color::White;
			this->btn_login->Location = System::Drawing::Point(24, 991);
			this->btn_login->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(363, 79);
			this->btn_login->TabIndex = 3;
			this->btn_login->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_login->Click += gcnew System::EventHandler(this, &login::Click_Btn_Login);
			// 
			// write_password
			// 
			this->write_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->write_password->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"write_password.BackgroundImage")));
			this->write_password->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->write_password->ForeColor = System::Drawing::Color::MintCream;
			this->write_password->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"write_password.Icon")));
			this->write_password->Location = System::Drawing::Point(180, 826);
			this->write_password->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->write_password->Name = L"write_password";
			this->write_password->Size = System::Drawing::Size(500, 81);
			this->write_password->TabIndex = 2;
			this->write_password->text = L"password";
			this->write_password->OnTextChange += gcnew System::EventHandler(this, &login::Write_Password);
			// 
			// write_Username
			// 
			this->write_Username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->write_Username->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"write_Username.BackgroundImage")));
			this->write_Username->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->write_Username->ForeColor = System::Drawing::Color::MintCream;
			this->write_Username->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"write_Username.Icon")));
			this->write_Username->Location = System::Drawing::Point(180, 649);
			this->write_Username->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->write_Username->Name = L"write_Username";
			this->write_Username->Size = System::Drawing::Size(500, 81);
			this->write_Username->TabIndex = 1;
			this->write_Username->text = L"Username";
			this->write_Username->OnTextChange += gcnew System::EventHandler(this, &login::Write_Username);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(305, 514);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 99);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LOGIN";
			this->label1->Click += gcnew System::EventHandler(this, &login::Write_Password);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->ClientSize = System::Drawing::Size(900, 1300);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Write_Username(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Write_Password(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Click_Btn_Cancel(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Click_Btn_Login(System::Object^ sender, System::EventArgs^ e) {
		if (write_Username->text == "admin")
		{
			if (write_password->text == "password")
			{
				this->Hide();
				Dashboard^ Db = gcnew Dashboard;
				Db->ShowDialog();
			}
			else
			{
				MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	};
}
