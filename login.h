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


	private: Bunifu::Framework::UI::BunifuThinButton2^ btn_login;

	private: Bunifu::Framework::UI::BunifuThinButton2^ btn_cancel;
	private: System::Windows::Forms::Panel^ panel2;
	private: Bunifu::UI::WinForms::BunifuTextBox^ textBox_Username;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ label_login;
	private: Bunifu::UI::WinForms::BunifuTextBox^ Textbox_mdp;






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
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties1 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties2 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties3 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties4 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties5 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties6 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties7 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			Bunifu::UI::WinForms::BunifuTextBox::StateProperties^ stateProperties8 = (gcnew Bunifu::UI::WinForms::BunifuTextBox::StateProperties());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Textbox_mdp = (gcnew Bunifu::UI::WinForms::BunifuTextBox());
			this->label_login = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->textBox_Username = (gcnew Bunifu::UI::WinForms::BunifuTextBox());
			this->btn_login = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_cancel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->Textbox_mdp);
			this->panel1->Controls->Add(this->label_login);
			this->panel1->Controls->Add(this->textBox_Username);
			this->panel1->Controls->Add(this->btn_login);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->btn_cancel);
			this->panel1->Location = System::Drawing::Point(37, 26);
			this->panel1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(521, 830);
			this->panel1->TabIndex = 0;
			// 
			// Textbox_mdp
			// 
			this->Textbox_mdp->AcceptsReturn = false;
			this->Textbox_mdp->AcceptsTab = false;
			this->Textbox_mdp->AnimationSpeed = 200;
			this->Textbox_mdp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->Textbox_mdp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->Textbox_mdp->BackColor = System::Drawing::Color::Transparent;
			this->Textbox_mdp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Textbox_mdp.BackgroundImage")));
			this->Textbox_mdp->BorderColorActive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->Textbox_mdp->BorderColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->Textbox_mdp->BorderColorHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->Textbox_mdp->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->Textbox_mdp->BorderRadius = 1;
			this->Textbox_mdp->BorderThickness = 1;
			this->Textbox_mdp->CharacterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->Textbox_mdp->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Textbox_mdp->DefaultFont = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->Textbox_mdp->DefaultText = L"";
			this->Textbox_mdp->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->Textbox_mdp->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Textbox_mdp->HideSelection = true;
			this->Textbox_mdp->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Textbox_mdp.IconLeft")));
			this->Textbox_mdp->IconLeftCursor = System::Windows::Forms::Cursors::IBeam;
			this->Textbox_mdp->IconPadding = 10;
			this->Textbox_mdp->IconRight = nullptr;
			this->Textbox_mdp->IconRightCursor = System::Windows::Forms::Cursors::IBeam;
			this->Textbox_mdp->Lines = gcnew cli::array< System::String^  >(0);
			this->Textbox_mdp->Location = System::Drawing::Point(44, 524);
			this->Textbox_mdp->MaxLength = 32767;
			this->Textbox_mdp->MinimumSize = System::Drawing::Size(1, 1);
			this->Textbox_mdp->Modified = false;
			this->Textbox_mdp->Multiline = false;
			this->Textbox_mdp->Name = L"Textbox_mdp";
			stateProperties1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			stateProperties1->FillColor = System::Drawing::Color::Empty;
			stateProperties1->ForeColor = System::Drawing::Color::Empty;
			stateProperties1->PlaceholderForeColor = System::Drawing::Color::Empty;
			this->Textbox_mdp->OnActiveState = stateProperties1;
			stateProperties2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			stateProperties2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			stateProperties2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			stateProperties2->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->Textbox_mdp->OnDisabledState = stateProperties2;
			stateProperties3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			stateProperties3->FillColor = System::Drawing::Color::Empty;
			stateProperties3->ForeColor = System::Drawing::Color::Empty;
			stateProperties3->PlaceholderForeColor = System::Drawing::Color::Empty;
			this->Textbox_mdp->OnHoverState = stateProperties3;
			stateProperties4->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			stateProperties4->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			stateProperties4->ForeColor = System::Drawing::Color::WhiteSmoke;
			stateProperties4->PlaceholderForeColor = System::Drawing::Color::Empty;
			this->Textbox_mdp->OnIdleState = stateProperties4;
			this->Textbox_mdp->Padding = System::Windows::Forms::Padding(3);
			this->Textbox_mdp->PasswordChar = '●';
			this->Textbox_mdp->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->Textbox_mdp->PlaceholderText = L"Password";
			this->Textbox_mdp->ReadOnly = false;
			this->Textbox_mdp->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->Textbox_mdp->SelectedText = L"";
			this->Textbox_mdp->SelectionLength = 0;
			this->Textbox_mdp->SelectionStart = 0;
			this->Textbox_mdp->ShortcutsEnabled = true;
			this->Textbox_mdp->Size = System::Drawing::Size(413, 58);
			this->Textbox_mdp->Style = Bunifu::UI::WinForms::BunifuTextBox::_Style::Bunifu;
			this->Textbox_mdp->TabIndex = 8;
			this->Textbox_mdp->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->Textbox_mdp->TextMarginBottom = 0;
			this->Textbox_mdp->TextMarginLeft = 3;
			this->Textbox_mdp->TextMarginTop = 0;
			this->Textbox_mdp->TextPlaceholder = L"Password";
			this->Textbox_mdp->UseSystemPasswordChar = true;
			this->Textbox_mdp->WordWrap = true;
			this->Textbox_mdp->Click += gcnew System::EventHandler(this, &login::Write_Password);
			// 
			// label_login
			// 
			this->label_login->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->label_login->Location = System::Drawing::Point(163, 311);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(184, 54);
			this->label_login->TabIndex = 7;
			this->label_login->Text = L"LOGIN";
			this->label_login->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_Username
			// 
			this->textBox_Username->AcceptsReturn = false;
			this->textBox_Username->AcceptsTab = false;
			this->textBox_Username->AnimationSpeed = 200;
			this->textBox_Username->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->textBox_Username->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->textBox_Username->BackColor = System::Drawing::Color::Transparent;
			this->textBox_Username->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBox_Username.BackgroundImage")));
			this->textBox_Username->BorderColorActive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->textBox_Username->BorderColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->textBox_Username->BorderColorHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->textBox_Username->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->textBox_Username->BorderRadius = 1;
			this->textBox_Username->BorderThickness = 1;
			this->textBox_Username->CharacterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->textBox_Username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Username->DefaultFont = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->textBox_Username->DefaultText = L"";
			this->textBox_Username->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->textBox_Username->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox_Username->HideSelection = true;
			this->textBox_Username->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBox_Username.IconLeft")));
			this->textBox_Username->IconLeftCursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Username->IconPadding = 10;
			this->textBox_Username->IconRight = nullptr;
			this->textBox_Username->IconRightCursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Username->Lines = gcnew cli::array< System::String^  >(0);
			this->textBox_Username->Location = System::Drawing::Point(44, 421);
			this->textBox_Username->MaxLength = 32767;
			this->textBox_Username->MinimumSize = System::Drawing::Size(1, 1);
			this->textBox_Username->Modified = false;
			this->textBox_Username->Multiline = false;
			this->textBox_Username->Name = L"textBox_Username";
			stateProperties5->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			stateProperties5->FillColor = System::Drawing::Color::Empty;
			stateProperties5->ForeColor = System::Drawing::Color::Empty;
			stateProperties5->PlaceholderForeColor = System::Drawing::Color::Empty;
			this->textBox_Username->OnActiveState = stateProperties5;
			stateProperties6->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			stateProperties6->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			stateProperties6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			stateProperties6->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBox_Username->OnDisabledState = stateProperties6;
			stateProperties7->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			stateProperties7->FillColor = System::Drawing::Color::Empty;
			stateProperties7->ForeColor = System::Drawing::Color::Empty;
			stateProperties7->PlaceholderForeColor = System::Drawing::Color::Empty;
			this->textBox_Username->OnHoverState = stateProperties7;
			stateProperties8->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			stateProperties8->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			stateProperties8->ForeColor = System::Drawing::Color::WhiteSmoke;
			stateProperties8->PlaceholderForeColor = System::Drawing::Color::Empty;
			this->textBox_Username->OnIdleState = stateProperties8;
			this->textBox_Username->Padding = System::Windows::Forms::Padding(3);
			this->textBox_Username->PasswordChar = '\0';
			this->textBox_Username->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->textBox_Username->PlaceholderText = L"Username";
			this->textBox_Username->ReadOnly = false;
			this->textBox_Username->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->textBox_Username->SelectedText = L"";
			this->textBox_Username->SelectionLength = 0;
			this->textBox_Username->SelectionStart = 0;
			this->textBox_Username->ShortcutsEnabled = true;
			this->textBox_Username->Size = System::Drawing::Size(413, 58);
			this->textBox_Username->Style = Bunifu::UI::WinForms::BunifuTextBox::_Style::Bunifu;
			this->textBox_Username->TabIndex = 6;
			this->textBox_Username->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->textBox_Username->TextMarginBottom = 0;
			this->textBox_Username->TextMarginLeft = 3;
			this->textBox_Username->TextMarginTop = 0;
			this->textBox_Username->TextPlaceholder = L"Username";
			this->textBox_Username->UseSystemPasswordChar = false;
			this->textBox_Username->WordWrap = true;
			this->textBox_Username->Click += gcnew System::EventHandler(this, &login::Write_Password);
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
			this->btn_login->Location = System::Drawing::Point(44, 661);
			this->btn_login->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(186, 79);
			this->btn_login->TabIndex = 3;
			this->btn_login->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_login->Click += gcnew System::EventHandler(this, &login::Click_Btn_Login);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Location = System::Drawing::Point(44, 31);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(413, 263);
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
			this->btn_cancel->Location = System::Drawing::Point(252, 661);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(205, 79);
			this->btn_cancel->TabIndex = 4;
			this->btn_cancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &login::Click_Btn_Cancel);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->ClientSize = System::Drawing::Size(580, 880);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->panel1->ResumeLayout(false);
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
		if (textBox_Username->DefaultText == "admin")
		{
			if (Textbox_mdp->DefaultText == "password")
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
			MessageBox::Show("Incorrect Username or Password ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	};
}
