#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_gestpersonnel;
	protected:

	protected:


	protected:















	private: System::Windows::Forms::Panel^ Pannel_Titre;


	private: System::Windows::Forms::Button^ Btn_Gestion_Personnel;
	private: System::Windows::Forms::Button^ Btn_Gestion_clients;
	private: System::Windows::Forms::Button^ btn_Gestion_commandes;
	private: System::Windows::Forms::Button^ Btn_Gestion_stock;
	private: System::Windows::Forms::Button^ Btn_Gestion_stat;
	private: System::Windows::Forms::Button^ Btn_Exit_DB;
	private: System::Windows::Forms::Panel^ panel_gestion;
	private: System::Windows::Forms::Panel^ Panel_Dashboard;
	private: System::Windows::Forms::Label^ Title_Dashboard;
	private: System::Windows::Forms::Panel^ panel_Gestion_Personnel;
	private: System::Windows::Forms::Label^ Title_Gestion_Personel;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Client;

	private: System::Windows::Forms::Label^ Title_gestion_clients;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Commandes;
	private: System::Windows::Forms::Label^ Title_Gestion_Commandes;
	private: System::Windows::Forms::Panel^ panel_Gestion_Stock;
	private: System::Windows::Forms::Label^ title_Gestion_Stock;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Stat;
	private: System::Windows::Forms::Label^ Title_Gestion_Stat;
	private: System::Windows::Forms::Label^ label_adressefacturation;

	private: System::Windows::Forms::Label^ label_adresselivraison;


	private: System::Windows::Forms::TextBox^ text1_message;
	private: System::Windows::Forms::DateTimePicker^ select_date_embauche;
	private: System::Windows::Forms::Label^ label_date_embauche;
	private: System::Windows::Forms::Label^ label_prenompersonnel;

	private: System::Windows::Forms::TextBox^ text_pernom;
	private: System::Windows::Forms::Label^ label_nompersonnel;

	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::Label^ Label_Id_perso;
	private: System::Windows::Forms::TextBox^ text_personnel;
	private: System::Windows::Forms::ComboBox^ choice_superieur;
	private: System::Windows::Forms::Label^ label_code_postalpersonnel;

	private: System::Windows::Forms::TextBox^ textBox_code_postal;
	private: System::Windows::Forms::Label^ label_villepersonnel;





	private: System::Windows::Forms::Label^ labelpayslivraison;
	private: System::Windows::Forms::Label^ label_adressepersonnel;



	private: System::Windows::Forms::TextBox^ text_adresse;



	private: System::Windows::Forms::Label^ label_Superieur;
	private: System::Windows::Forms::Label^ label_payspersonnel;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ button_enregistrer;
	private: Bunifu::Framework::UI::BunifuThinButton2^ Button_Supprimer;

	private: Bunifu::Framework::UI::BunifuThinButton2^ button_modifier;
	private: Bunifu::Framework::UI::BunifuThinButton2^ button_nouveau;



	private: System::Windows::Forms::ComboBox^ choice_departement;
	private: System::Windows::Forms::TextBox^ text_ville;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prenom;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ date_embauche;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Superieur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville;
private: System::Windows::Forms::DataGridViewComboBoxColumn^ pays;
private: System::Windows::Forms::DataGridViewComboBoxColumn^ code_postal;




	private: System::Windows::Forms::Label^ labelvillelivraison;

	private: System::Windows::Forms::Label^ labelcodepostalelivraison;

	private: System::Windows::Forms::Label^ labeladressepostlivraison;

	private: System::Windows::Forms::Label^ labelidadresselivraison;
	private: System::Windows::Forms::TextBox^ text_adressepostalelivraison;
	private: System::Windows::Forms::TextBox^ text_payslivraison;



	private: System::Windows::Forms::TextBox^ text_villelivraison;
private: System::Windows::Forms::TextBox^ text_codepostalelivraison;



	private: System::Windows::Forms::TextBox^ text_idadresselivraison;



	private: System::Windows::Forms::Label^ labeldatenaissance;

	private: System::Windows::Forms::Label^ labelprenomclient;

	private: System::Windows::Forms::Label^ labelnomclient;

	private: System::Windows::Forms::Label^ labelidclient;
private: System::Windows::Forms::TextBox^ text_nomclient;



private: System::Windows::Forms::TextBox^ text_datenaissance;

private: System::Windows::Forms::TextBox^ text_prenomclient;

private: System::Windows::Forms::TextBox^ text_idclient;






private: System::Windows::Forms::DataGridView^ dataGridView_gestclient;


private: System::Windows::Forms::Label^ labelchampclient;
private: System::Windows::Forms::Label^ labelpaysfacturation;

private: System::Windows::Forms::Label^ labelvillefacturation;

private: System::Windows::Forms::Label^ labelcodepostalefacturation;

private: System::Windows::Forms::Label^ labeladressepostalefacturation;

private: System::Windows::Forms::Label^ labelidadressefacturation;
private: System::Windows::Forms::TextBox^ text_adressepostalefacturation;
private: System::Windows::Forms::TextBox^ text_paysfacturation;



private: System::Windows::Forms::TextBox^ text_villefacturation;

private: System::Windows::Forms::TextBox^ text_codepostalefacturation;

private: System::Windows::Forms::TextBox^ text_idadressefacturation;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_supprimer;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_modiffier;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_ajouter;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_afficher;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_supprimer;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_modifier;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_ajouter;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_afficher;
private: System::Windows::Forms::TextBox^ text_messagecommande;


















private: System::Windows::Forms::Label^ label_datelivraison;












private: System::Windows::Forms::Label^ label_monanttotHT;

private: System::Windows::Forms::Label^ label2_idclientcommande;
private: System::Windows::Forms::Label^ labelref_commande;
private: System::Windows::Forms::TextBox^ text_idclientcommande;
private: System::Windows::Forms::TextBox^ text_datelivraison;



private: System::Windows::Forms::TextBox^ text_montanttotHT;

private: System::Windows::Forms::TextBox^ text_refcommande;
private: System::Windows::Forms::DataGridView^ dataGridView_gestcommande;



private: System::Windows::Forms::Label^ label_montanttotTTC;
private: System::Windows::Forms::TextBox^ text_montanttotTTC;


private: System::Windows::Forms::Label^ label_montanttotTVA;
private: System::Windows::Forms::TextBox^ text_montanttotTVA;


private: System::Windows::Forms::Label^ label2_informationsgen;
private: System::Windows::Forms::Label^ label_dateemission;
private: System::Windows::Forms::TextBox^ text_dateemission;
private: System::Windows::Forms::Label^ label_datepaiement;
private: System::Windows::Forms::TextBox^ text_datepaiement;




private: System::Windows::Forms::Label^ label2_paiementcommande;
private: System::Windows::Forms::Label^ label_mypaiement;


private: System::Windows::Forms::Label^ label_nbpaiement;
private: System::Windows::Forms::TextBox^ text_mypaiement;


private: System::Windows::Forms::TextBox^ text_nbpaiement;
private: System::Windows::Forms::Label^ label_infofact;


private: System::Windows::Forms::Label^ label_soldereglement;
private: System::Windows::Forms::Label^ label_idadressesociete;


private: System::Windows::Forms::Label^ label_societe;

private: System::Windows::Forms::Label^ label_nmservice;

private: System::Windows::Forms::Label^ label_idfacture;
private: System::Windows::Forms::TextBox^ text_nmservice;


private: System::Windows::Forms::TextBox^ text_soldereglement;
private: System::Windows::Forms::TextBox^ text_idadressesociete;


private: System::Windows::Forms::TextBox^ text_societe;

private: System::Windows::Forms::TextBox^ text_idfacture;
private: System::Windows::Forms::Label^ label_payssociete;


private: System::Windows::Forms::Label^ label_codepostsociete;
private: System::Windows::Forms::TextBox^ text_payssociete;


private: System::Windows::Forms::TextBox^ text_codepostsociete;

private: System::Windows::Forms::Label^ label_villesociete;

private: System::Windows::Forms::Label^ label_adressepostsociete;
private: System::Windows::Forms::TextBox^ text_villesociete;


private: System::Windows::Forms::TextBox^ text_adressepostsociete;

private: Bunifu::Framework::UI::BunifuThinButton2^ button2_nouveau;
private: System::Windows::Forms::Label^ label_idadfactcommande;
private: System::Windows::Forms::TextBox^ text_idadfactcommande;


private: System::Windows::Forms::Label^ label_idadlivcommande;
private: System::Windows::Forms::TextBox^ text_idadlivcommande;


private: Bunifu::Framework::UI::BunifuThinButton2^ button1_nouveau;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton29;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton28;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton27;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton26;




private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;






private: System::Windows::Forms::Label^ label12;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton24;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton25;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::ComboBox^ comboBox_TVAStat;


































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->label_gestpersonnel = (gcnew System::Windows::Forms::Label());
			this->Pannel_Titre = (gcnew System::Windows::Forms::Panel());
			this->panel_Gestion_Personnel = (gcnew System::Windows::Forms::Panel());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->choice_departement = (gcnew System::Windows::Forms::ComboBox());
			this->Button_Supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button_modifier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button_enregistrer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prenom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_embauche = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Superieur = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->code_postal = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->label_payspersonnel = (gcnew System::Windows::Forms::Label());
			this->choice_superieur = (gcnew System::Windows::Forms::ComboBox());
			this->label_code_postalpersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->label_villepersonnel = (gcnew System::Windows::Forms::Label());
			this->label_adressepersonnel = (gcnew System::Windows::Forms::Label());
			this->text_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label_Superieur = (gcnew System::Windows::Forms::Label());
			this->select_date_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_prenompersonnel = (gcnew System::Windows::Forms::Label());
			this->text_pernom = (gcnew System::Windows::Forms::TextBox());
			this->label_nompersonnel = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->Label_Id_perso = (gcnew System::Windows::Forms::Label());
			this->text_personnel = (gcnew System::Windows::Forms::TextBox());
			this->Title_Gestion_Personel = (gcnew System::Windows::Forms::Label());
			this->Btn_Gestion_Personnel = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_clients = (gcnew System::Windows::Forms::Button());
			this->btn_Gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stock = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stat = (gcnew System::Windows::Forms::Button());
			this->Btn_Exit_DB = (gcnew System::Windows::Forms::Button());
			this->panel_gestion = (gcnew System::Windows::Forms::Panel());
			this->Panel_Dashboard = (gcnew System::Windows::Forms::Panel());
			this->Title_Dashboard = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Client = (gcnew System::Windows::Forms::Panel());
			this->button1_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_modiffier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_ajouter = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_afficher = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->labelpaysfacturation = (gcnew System::Windows::Forms::Label());
			this->labelvillefacturation = (gcnew System::Windows::Forms::Label());
			this->labelcodepostalefacturation = (gcnew System::Windows::Forms::Label());
			this->labeladressepostalefacturation = (gcnew System::Windows::Forms::Label());
			this->labelidadressefacturation = (gcnew System::Windows::Forms::Label());
			this->text_adressepostalefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_paysfacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_villefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostalefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_idadressefacturation = (gcnew System::Windows::Forms::TextBox());
			this->labelchampclient = (gcnew System::Windows::Forms::Label());
			this->label_adressefacturation = (gcnew System::Windows::Forms::Label());
			this->label_adresselivraison = (gcnew System::Windows::Forms::Label());
			this->text1_message = (gcnew System::Windows::Forms::TextBox());
			this->labelpayslivraison = (gcnew System::Windows::Forms::Label());
			this->labelvillelivraison = (gcnew System::Windows::Forms::Label());
			this->labelcodepostalelivraison = (gcnew System::Windows::Forms::Label());
			this->labeladressepostlivraison = (gcnew System::Windows::Forms::Label());
			this->labelidadresselivraison = (gcnew System::Windows::Forms::Label());
			this->text_adressepostalelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_payslivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_villelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostalelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_idadresselivraison = (gcnew System::Windows::Forms::TextBox());
			this->labeldatenaissance = (gcnew System::Windows::Forms::Label());
			this->labelprenomclient = (gcnew System::Windows::Forms::Label());
			this->labelnomclient = (gcnew System::Windows::Forms::Label());
			this->labelidclient = (gcnew System::Windows::Forms::Label());
			this->text_nomclient = (gcnew System::Windows::Forms::TextBox());
			this->text_datenaissance = (gcnew System::Windows::Forms::TextBox());
			this->text_prenomclient = (gcnew System::Windows::Forms::TextBox());
			this->text_idclient = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_gestclient = (gcnew System::Windows::Forms::DataGridView());
			this->Title_gestion_clients = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Commandes = (gcnew System::Windows::Forms::Panel());
			this->label_idadfactcommande = (gcnew System::Windows::Forms::Label());
			this->text_idadfactcommande = (gcnew System::Windows::Forms::TextBox());
			this->label_idadlivcommande = (gcnew System::Windows::Forms::Label());
			this->text_idadlivcommande = (gcnew System::Windows::Forms::TextBox());
			this->button2_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label_payssociete = (gcnew System::Windows::Forms::Label());
			this->label_codepostsociete = (gcnew System::Windows::Forms::Label());
			this->text_payssociete = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostsociete = (gcnew System::Windows::Forms::TextBox());
			this->label_villesociete = (gcnew System::Windows::Forms::Label());
			this->label_adressepostsociete = (gcnew System::Windows::Forms::Label());
			this->text_villesociete = (gcnew System::Windows::Forms::TextBox());
			this->text_adressepostsociete = (gcnew System::Windows::Forms::TextBox());
			this->label_datepaiement = (gcnew System::Windows::Forms::Label());
			this->text_datepaiement = (gcnew System::Windows::Forms::TextBox());
			this->label2_paiementcommande = (gcnew System::Windows::Forms::Label());
			this->label_mypaiement = (gcnew System::Windows::Forms::Label());
			this->label_nbpaiement = (gcnew System::Windows::Forms::Label());
			this->text_mypaiement = (gcnew System::Windows::Forms::TextBox());
			this->text_nbpaiement = (gcnew System::Windows::Forms::TextBox());
			this->label_dateemission = (gcnew System::Windows::Forms::Label());
			this->text_dateemission = (gcnew System::Windows::Forms::TextBox());
			this->label_montanttotTTC = (gcnew System::Windows::Forms::Label());
			this->text_montanttotTTC = (gcnew System::Windows::Forms::TextBox());
			this->label_montanttotTVA = (gcnew System::Windows::Forms::Label());
			this->text_montanttotTVA = (gcnew System::Windows::Forms::TextBox());
			this->label2_informationsgen = (gcnew System::Windows::Forms::Label());
			this->button2_supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button2_modifier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button2_ajouter = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button2_afficher = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label_infofact = (gcnew System::Windows::Forms::Label());
			this->text_messagecommande = (gcnew System::Windows::Forms::TextBox());
			this->label_soldereglement = (gcnew System::Windows::Forms::Label());
			this->label_idadressesociete = (gcnew System::Windows::Forms::Label());
			this->label_societe = (gcnew System::Windows::Forms::Label());
			this->label_nmservice = (gcnew System::Windows::Forms::Label());
			this->label_idfacture = (gcnew System::Windows::Forms::Label());
			this->text_nmservice = (gcnew System::Windows::Forms::TextBox());
			this->text_soldereglement = (gcnew System::Windows::Forms::TextBox());
			this->text_idadressesociete = (gcnew System::Windows::Forms::TextBox());
			this->text_societe = (gcnew System::Windows::Forms::TextBox());
			this->text_idfacture = (gcnew System::Windows::Forms::TextBox());
			this->label_datelivraison = (gcnew System::Windows::Forms::Label());
			this->label_monanttotHT = (gcnew System::Windows::Forms::Label());
			this->label2_idclientcommande = (gcnew System::Windows::Forms::Label());
			this->labelref_commande = (gcnew System::Windows::Forms::Label());
			this->text_idclientcommande = (gcnew System::Windows::Forms::TextBox());
			this->text_datelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_montanttotHT = (gcnew System::Windows::Forms::TextBox());
			this->text_refcommande = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_gestcommande = (gcnew System::Windows::Forms::DataGridView());
			this->Title_Gestion_Commandes = (gcnew System::Windows::Forms::Label());
			this->panel_Gestion_Stock = (gcnew System::Windows::Forms::Panel());
			this->title_Gestion_Stock = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Stat = (gcnew System::Windows::Forms::Panel());
			this->Title_Gestion_Stat = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton24 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton25 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bunifuThinButton26 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton27 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton28 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton29 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->comboBox_TVAStat = (gcnew System::Windows::Forms::ComboBox());
			this->panel_Gestion_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_gestion->SuspendLayout();
			this->Panel_Dashboard->SuspendLayout();
			this->Panel_Gestion_Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->BeginInit();
			this->Panel_Gestion_Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestcommande))->BeginInit();
			this->panel_Gestion_Stock->SuspendLayout();
			this->Panel_Gestion_Stat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label_gestpersonnel
			// 
			this->label_gestpersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_gestpersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_gestpersonnel->Location = System::Drawing::Point(464, 45);
			this->label_gestpersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_gestpersonnel->Name = L"label_gestpersonnel";
			this->label_gestpersonnel->Size = System::Drawing::Size(1092, 106);
			this->label_gestpersonnel->TabIndex = 0;
			this->label_gestpersonnel->Text = L"Gestion Personnel";
			this->label_gestpersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Pannel_Titre
			// 
			this->Pannel_Titre->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pannel_Titre.BackgroundImage")));
			this->Pannel_Titre->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Pannel_Titre->Dock = System::Windows::Forms::DockStyle::Top;
			this->Pannel_Titre->Location = System::Drawing::Point(0, 0);
			this->Pannel_Titre->Margin = System::Windows::Forms::Padding(2);
			this->Pannel_Titre->Name = L"Pannel_Titre";
			this->Pannel_Titre->Size = System::Drawing::Size(366, 400);
			this->Pannel_Titre->TabIndex = 0;
			// 
			// panel_Gestion_Personnel
			// 
			this->panel_Gestion_Personnel->Controls->Add(this->text_ville);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_departement);
			this->panel_Gestion_Personnel->Controls->Add(this->Button_Supprimer);
			this->panel_Gestion_Personnel->Controls->Add(this->button_modifier);
			this->panel_Gestion_Personnel->Controls->Add(this->button_nouveau);
			this->panel_Gestion_Personnel->Controls->Add(this->button_enregistrer);
			this->panel_Gestion_Personnel->Controls->Add(this->dataGridView1);
			this->panel_Gestion_Personnel->Controls->Add(this->label_payspersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_superieur);
			this->panel_Gestion_Personnel->Controls->Add(this->label_code_postalpersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->textBox_code_postal);
			this->panel_Gestion_Personnel->Controls->Add(this->label_villepersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->label_adressepersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->text_adresse);
			this->panel_Gestion_Personnel->Controls->Add(this->label_Superieur);
			this->panel_Gestion_Personnel->Controls->Add(this->select_date_embauche);
			this->panel_Gestion_Personnel->Controls->Add(this->label_date_embauche);
			this->panel_Gestion_Personnel->Controls->Add(this->label_prenompersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->text_pernom);
			this->panel_Gestion_Personnel->Controls->Add(this->label_nompersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->text_nom);
			this->panel_Gestion_Personnel->Controls->Add(this->Label_Id_perso);
			this->panel_Gestion_Personnel->Controls->Add(this->text_personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->Title_Gestion_Personel);
			this->panel_Gestion_Personnel->Location = System::Drawing::Point(387, 1143);
			this->panel_Gestion_Personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_Gestion_Personnel->Name = L"panel_Gestion_Personnel";
			this->panel_Gestion_Personnel->Size = System::Drawing::Size(797, 245);
			this->panel_Gestion_Personnel->TabIndex = 2;
			this->panel_Gestion_Personnel->Visible = false;
			this->panel_Gestion_Personnel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel_Gestion_Personnel_Paint);
			// 
			// text_ville
			// 
			this->text_ville->Location = System::Drawing::Point(446, 337);
			this->text_ville->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(180, 26);
			this->text_ville->TabIndex = 27;
			// 
			// choice_departement
			// 
			this->choice_departement->FormattingEnabled = true;
			this->choice_departement->Items->AddRange(gcnew cli::array< System::Object^  >(96) {
				L"Ain", L"Aisne", L"Allier", L"Alpes de Haute-Provence",
					L"Hautes-Alpes", L"Alpes-Maritimes", L"Ardêche", L"Ardennes", L"Ariège", L"Aube", L"Aude", L"Aveyron", L"Bouches-du-Rhône", L"Calvados",
					L"Cantal", L"Charente", L"Charente-Maritime", L"Cher", L"Corrèze", L"Corse-du-Sud", L"Haute-Corse", L"Côte-d\'Or", L"Côtes d\'Armor",
					L"Creuse", L"Dordogne", L"Doubs", L"Drôme", L"Eure", L"Eure-et-Loir", L"Finistère", L"Gard", L"Haute-Garonne", L"Gers", L"Gironde",
					L"Hérault", L"Île-et-Vilaine", L"Indre", L"Indre-et-Loire", L"Isère", L"Jura", L"Landes", L"Loir-et-Cher", L"Loire", L"Haute-Loire",
					L"Loire-Atlantique", L"Loiret", L"Lot", L"Lot-et-Garonne", L"Lozère", L"Maine-et-Loire", L"Manche", L"Marne", L"Haute-Marne",
					L"Mayenne", L"Meurthe-et-Moselle", L"Meuse", L"Morbihan", L"Moselle", L"Nièvre", L"Nord", L"Oise", L"Orne", L"Pas-de-Calais",
					L"Puy-de-Dôme", L"Pyrénées-Atlantiques", L"Hautes-Pyrénées", L"Pyrénées-Orientales", L"Bas-Rhin", L"Haut-Rhin", L"Rhône", L"Haute-Saône",
					L"Saône-et-Loire", L"Sarthe", L"Savoie", L"Haute-Savoie", L"Paris", L"Seine-Maritime", L"Seine-et-Marne", L"Yvelines", L"Deux-Sèvres",
					L"Somme", L"Tarn", L"Tarn-et-Garonne", L"Var", L"Vaucluse", L"Vendée", L"Vienne", L"Haute-Vienne", L"Vosges", L"Yonne", L"Territoire-de-Belfort",
					L"Essonne", L"Hauts-de-Seine", L"Seine-Saint-Denis", L"Val-de-Marne", L"Val-d\'Oise"
			});
			this->choice_departement->Location = System::Drawing::Point(663, 337);
			this->choice_departement->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->choice_departement->Name = L"choice_departement";
			this->choice_departement->Size = System::Drawing::Size(180, 28);
			this->choice_departement->TabIndex = 26;
			// 
			// Button_Supprimer
			// 
			this->Button_Supprimer->ActiveBorderThickness = 1;
			this->Button_Supprimer->ActiveCornerRadius = 20;
			this->Button_Supprimer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->Button_Supprimer->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->Button_Supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->Button_Supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Supprimer.BackgroundImage")));
			this->Button_Supprimer->ButtonText = L"Supprimer";
			this->Button_Supprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_Supprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Supprimer->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->IdleBorderThickness = 1;
			this->Button_Supprimer->IdleCornerRadius = 20;
			this->Button_Supprimer->IdleFillColor = System::Drawing::Color::Transparent;
			this->Button_Supprimer->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->Location = System::Drawing::Point(764, 508);
			this->Button_Supprimer->Margin = System::Windows::Forms::Padding(9, 10, 9, 10);
			this->Button_Supprimer->Name = L"Button_Supprimer";
			this->Button_Supprimer->Size = System::Drawing::Size(200, 125);
			this->Button_Supprimer->TabIndex = 25;
			this->Button_Supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_modifier
			// 
			this->button_modifier->ActiveBorderThickness = 1;
			this->button_modifier->ActiveCornerRadius = 20;
			this->button_modifier->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_modifier->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button_modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button_modifier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_modifier.BackgroundImage")));
			this->button_modifier->ButtonText = L"Modifier";
			this->button_modifier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_modifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_modifier->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->IdleBorderThickness = 1;
			this->button_modifier->IdleCornerRadius = 20;
			this->button_modifier->IdleFillColor = System::Drawing::Color::Transparent;
			this->button_modifier->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->Location = System::Drawing::Point(525, 508);
			this->button_modifier->Margin = System::Windows::Forms::Padding(9, 10, 9, 10);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(200, 125);
			this->button_modifier->TabIndex = 24;
			this->button_modifier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_nouveau
			// 
			this->button_nouveau->ActiveBorderThickness = 1;
			this->button_nouveau->ActiveCornerRadius = 20;
			this->button_nouveau->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_nouveau->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button_nouveau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_nouveau.BackgroundImage")));
			this->button_nouveau->ButtonText = L"Nouveau";
			this->button_nouveau->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_nouveau->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_nouveau->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->IdleBorderThickness = 1;
			this->button_nouveau->IdleCornerRadius = 20;
			this->button_nouveau->IdleFillColor = System::Drawing::Color::Transparent;
			this->button_nouveau->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->Location = System::Drawing::Point(279, 508);
			this->button_nouveau->Margin = System::Windows::Forms::Padding(9, 10, 9, 10);
			this->button_nouveau->Name = L"button_nouveau";
			this->button_nouveau->Size = System::Drawing::Size(200, 125);
			this->button_nouveau->TabIndex = 23;
			this->button_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_nouveau->Click += gcnew System::EventHandler(this, &Dashboard::btn_nouveau_Click);
			// 
			// button_enregistrer
			// 
			this->button_enregistrer->ActiveBorderThickness = 1;
			this->button_enregistrer->ActiveCornerRadius = 20;
			this->button_enregistrer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_enregistrer->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button_enregistrer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button_enregistrer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_enregistrer.BackgroundImage")));
			this->button_enregistrer->ButtonText = L"Enregistrer";
			this->button_enregistrer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_enregistrer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enregistrer->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->IdleBorderThickness = 1;
			this->button_enregistrer->IdleCornerRadius = 20;
			this->button_enregistrer->IdleFillColor = System::Drawing::Color::Transparent;
			this->button_enregistrer->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->Location = System::Drawing::Point(32, 508);
			this->button_enregistrer->Margin = System::Windows::Forms::Padding(9, 10, 9, 10);
			this->button_enregistrer->Name = L"button_enregistrer";
			this->button_enregistrer->Size = System::Drawing::Size(200, 125);
			this->button_enregistrer->TabIndex = 22;
			this->button_enregistrer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_enregistrer->Click += gcnew System::EventHandler(this, &Dashboard::button_enregistrer_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Id_Personnel,
					this->nom, this->prenom, this->date_embauche, this->Superieur, this->adresse, this->ville, this->pays, this->code_postal
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 663);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1086, 166);
			this->dataGridView1->TabIndex = 21;
			// 
			// Id_Personnel
			// 
			this->Id_Personnel->HeaderText = L"Id_Personnel";
			this->Id_Personnel->MinimumWidth = 10;
			this->Id_Personnel->Name = L"Id_Personnel";
			this->Id_Personnel->Width = 200;
			// 
			// nom
			// 
			this->nom->HeaderText = L"nom";
			this->nom->MinimumWidth = 10;
			this->nom->Name = L"nom";
			this->nom->Width = 200;
			// 
			// prenom
			// 
			this->prenom->HeaderText = L"prenom";
			this->prenom->MinimumWidth = 10;
			this->prenom->Name = L"prenom";
			this->prenom->Width = 200;
			// 
			// date_embauche
			// 
			this->date_embauche->HeaderText = L"date_embauche";
			this->date_embauche->MinimumWidth = 10;
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Width = 200;
			// 
			// Superieur
			// 
			this->Superieur->HeaderText = L"Superieur";
			this->Superieur->MinimumWidth = 10;
			this->Superieur->Name = L"Superieur";
			this->Superieur->Width = 200;
			// 
			// adresse
			// 
			this->adresse->HeaderText = L"adresse";
			this->adresse->MinimumWidth = 10;
			this->adresse->Name = L"adresse";
			this->adresse->Width = 200;
			// 
			// ville
			// 
			this->ville->HeaderText = L"ville";
			this->ville->MinimumWidth = 10;
			this->ville->Name = L"ville";
			this->ville->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ville->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->ville->Width = 200;
			// 
			// pays
			// 
			this->pays->HeaderText = L"pays";
			this->pays->MinimumWidth = 10;
			this->pays->Name = L"pays";
			this->pays->Width = 200;
			// 
			// code_postal
			// 
			this->code_postal->HeaderText = L"code_postal";
			this->code_postal->MinimumWidth = 10;
			this->code_postal->Name = L"code_postal";
			this->code_postal->Width = 200;
			// 
			// label_payspersonnel
			// 
			this->label_payspersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_payspersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_payspersonnel->Location = System::Drawing::Point(657, 290);
			this->label_payspersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_payspersonnel->Name = L"label_payspersonnel";
			this->label_payspersonnel->Size = System::Drawing::Size(150, 42);
			this->label_payspersonnel->TabIndex = 20;
			this->label_payspersonnel->Text = L"département";
			this->label_payspersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label_departement_Click);
			// 
			// choice_superieur
			// 
			this->choice_superieur->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"oui", L"non" });
			this->choice_superieur->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choice_superieur->FormattingEnabled = true;
			this->choice_superieur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"oui", L"non" });
			this->choice_superieur->Location = System::Drawing::Point(50, 448);
			this->choice_superieur->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->choice_superieur->Name = L"choice_superieur";
			this->choice_superieur->Size = System::Drawing::Size(180, 28);
			this->choice_superieur->TabIndex = 18;
			this->choice_superieur->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::choice_superieur_SelectedIndexChanged);
			// 
			// label_code_postalpersonnel
			// 
			this->label_code_postalpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_code_postalpersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_code_postalpersonnel->Location = System::Drawing::Point(450, 402);
			this->label_code_postalpersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_code_postalpersonnel->Name = L"label_code_postalpersonnel";
			this->label_code_postalpersonnel->Size = System::Drawing::Size(150, 42);
			this->label_code_postalpersonnel->TabIndex = 17;
			this->label_code_postalpersonnel->Text = L"code postal";
			// 
			// textBox_code_postal
			// 
			this->textBox_code_postal->Location = System::Drawing::Point(446, 450);
			this->textBox_code_postal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_code_postal->Name = L"textBox_code_postal";
			this->textBox_code_postal->Size = System::Drawing::Size(397, 26);
			this->textBox_code_postal->TabIndex = 16;
			this->textBox_code_postal->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox_code_postal_TextChanged);
			// 
			// label_villepersonnel
			// 
			this->label_villepersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_villepersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_villepersonnel->Location = System::Drawing::Point(440, 290);
			this->label_villepersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_villepersonnel->Name = L"label_villepersonnel";
			this->label_villepersonnel->Size = System::Drawing::Size(150, 42);
			this->label_villepersonnel->TabIndex = 15;
			this->label_villepersonnel->Text = L"ville";
			// 
			// label_adressepersonnel
			// 
			this->label_adressepersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adressepersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_adressepersonnel->Location = System::Drawing::Point(440, 202);
			this->label_adressepersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_adressepersonnel->Name = L"label_adressepersonnel";
			this->label_adressepersonnel->Size = System::Drawing::Size(150, 42);
			this->label_adressepersonnel->TabIndex = 13;
			this->label_adressepersonnel->Text = L"adresse";
			this->label_adressepersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label3_Click);
			// 
			// text_adresse
			// 
			this->text_adresse->Location = System::Drawing::Point(446, 248);
			this->text_adresse->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->text_adresse->Name = L"text_adresse";
			this->text_adresse->Size = System::Drawing::Size(397, 26);
			this->text_adresse->TabIndex = 12;
			this->text_adresse->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_adresse_TextChanged);
			// 
			// label_Superieur
			// 
			this->label_Superieur->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Superieur->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Superieur->Location = System::Drawing::Point(44, 402);
			this->label_Superieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_Superieur->Name = L"label_Superieur";
			this->label_Superieur->Size = System::Drawing::Size(150, 42);
			this->label_Superieur->TabIndex = 11;
			this->label_Superieur->Text = L"Superieur";
			this->label_Superieur->Click += gcnew System::EventHandler(this, &Dashboard::label_Superieur_Click);
			// 
			// select_date_embauche
			// 
			this->select_date_embauche->Location = System::Drawing::Point(446, 148);
			this->select_date_embauche->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->select_date_embauche->Name = L"select_date_embauche";
			this->select_date_embauche->Size = System::Drawing::Size(253, 26);
			this->select_date_embauche->TabIndex = 9;
			this->select_date_embauche->ValueChanged += gcnew System::EventHandler(this, &Dashboard::select_date_embauche_ValueChanged);
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_date_embauche->Location = System::Drawing::Point(440, 98);
			this->label_date_embauche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(207, 42);
			this->label_date_embauche->TabIndex = 8;
			this->label_date_embauche->Text = L"date d\'embauche";
			this->label_date_embauche->Click += gcnew System::EventHandler(this, &Dashboard::label_date_embauche_Click);
			// 
			// label_prenompersonnel
			// 
			this->label_prenompersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenompersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_prenompersonnel->Location = System::Drawing::Point(44, 300);
			this->label_prenompersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_prenompersonnel->Name = L"label_prenompersonnel";
			this->label_prenompersonnel->Size = System::Drawing::Size(150, 42);
			this->label_prenompersonnel->TabIndex = 6;
			this->label_prenompersonnel->Text = L"prenom";
			this->label_prenompersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label_pernom_Click);
			// 
			// text_pernom
			// 
			this->text_pernom->Location = System::Drawing::Point(50, 346);
			this->text_pernom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->text_pernom->Name = L"text_pernom";
			this->text_pernom->Size = System::Drawing::Size(199, 26);
			this->text_pernom->TabIndex = 5;
			this->text_pernom->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_pernom_TextChanged);
			// 
			// label_nompersonnel
			// 
			this->label_nompersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nompersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_nompersonnel->Location = System::Drawing::Point(44, 202);
			this->label_nompersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_nompersonnel->Name = L"label_nompersonnel";
			this->label_nompersonnel->Size = System::Drawing::Size(150, 42);
			this->label_nompersonnel->TabIndex = 4;
			this->label_nompersonnel->Text = L"nom";
			this->label_nompersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label_nom_Click);
			// 
			// text_nom
			// 
			this->text_nom->Location = System::Drawing::Point(50, 248);
			this->text_nom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(199, 26);
			this->text_nom->TabIndex = 3;
			this->text_nom->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_nom_TextChanged);
			// 
			// Label_Id_perso
			// 
			this->Label_Id_perso->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Id_perso->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Label_Id_perso->Location = System::Drawing::Point(44, 102);
			this->Label_Id_perso->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Id_perso->Name = L"Label_Id_perso";
			this->Label_Id_perso->Size = System::Drawing::Size(150, 42);
			this->Label_Id_perso->TabIndex = 2;
			this->Label_Id_perso->Text = L"Id Personnel";
			this->Label_Id_perso->Click += gcnew System::EventHandler(this, &Dashboard::Label_Id_perso_Click);
			// 
			// text_personnel
			// 
			this->text_personnel->Location = System::Drawing::Point(50, 148);
			this->text_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->text_personnel->Name = L"text_personnel";
			this->text_personnel->Size = System::Drawing::Size(199, 26);
			this->text_personnel->TabIndex = 1;
			this->text_personnel->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_personnel_TextChanged);
			// 
			// Title_Gestion_Personel
			// 
			this->Title_Gestion_Personel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Personel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Personel->Location = System::Drawing::Point(131, 21);
			this->Title_Gestion_Personel->Name = L"Title_Gestion_Personel";
			this->Title_Gestion_Personel->Size = System::Drawing::Size(956, 130);
			this->Title_Gestion_Personel->TabIndex = 0;
			this->Title_Gestion_Personel->Text = L"Gestion Personnel";
			this->Title_Gestion_Personel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Btn_Gestion_Personnel
			// 
			this->Btn_Gestion_Personnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_Personnel->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Gestion_Personnel->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_Personnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 400);
			this->Btn_Gestion_Personnel->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_Personnel->Name = L"Btn_Gestion_Personnel";
			this->Btn_Gestion_Personnel->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_Personnel->TabIndex = 1;
			this->Btn_Gestion_Personnel->Text = L"Gestion personnel";
			this->Btn_Gestion_Personnel->UseVisualStyleBackColor = true;
			this->Btn_Gestion_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Personnel);
			// 
			// Btn_Gestion_clients
			// 
			this->Btn_Gestion_clients->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_clients->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_clients->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_clients->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 505);
			this->Btn_Gestion_clients->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_clients->Name = L"Btn_Gestion_clients";
			this->Btn_Gestion_clients->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_clients->TabIndex = 2;
			this->Btn_Gestion_clients->Text = L"Gestion clients";
			this->Btn_Gestion_clients->UseVisualStyleBackColor = true;
			this->Btn_Gestion_clients->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Clients);
			// 
			// btn_Gestion_commandes
			// 
			this->btn_Gestion_commandes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Gestion_commandes->FlatAppearance->BorderSize = 0;
			this->btn_Gestion_commandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Gestion_commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->btn_Gestion_commandes->ForeColor = System::Drawing::Color::Gainsboro;
			this->btn_Gestion_commandes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 610);
			this->btn_Gestion_commandes->Margin = System::Windows::Forms::Padding(2);
			this->btn_Gestion_commandes->Name = L"btn_Gestion_commandes";
			this->btn_Gestion_commandes->Size = System::Drawing::Size(366, 105);
			this->btn_Gestion_commandes->TabIndex = 3;
			this->btn_Gestion_commandes->Text = L"Gestion commandes";
			this->btn_Gestion_commandes->UseVisualStyleBackColor = true;
			this->btn_Gestion_commandes->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Commandes);
			// 
			// Btn_Gestion_stock
			// 
			this->Btn_Gestion_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stock->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stock->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 715);
			this->Btn_Gestion_stock->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_stock->Name = L"Btn_Gestion_stock";
			this->Btn_Gestion_stock->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_stock->TabIndex = 4;
			this->Btn_Gestion_stock->Text = L"Gestion stock";
			this->Btn_Gestion_stock->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stock->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stock);
			// 
			// Btn_Gestion_stat
			// 
			this->Btn_Gestion_stat->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stat->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stat->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 820);
			this->Btn_Gestion_stat->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_stat->Name = L"Btn_Gestion_stat";
			this->Btn_Gestion_stat->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_stat->TabIndex = 5;
			this->Btn_Gestion_stat->Text = L"Gestion statistiques";
			this->Btn_Gestion_stat->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stat->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stat);
			// 
			// Btn_Exit_DB
			// 
			this->Btn_Exit_DB->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Exit_DB->FlatAppearance->BorderSize = 0;
			this->Btn_Exit_DB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Exit_DB->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Exit_DB->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Exit_DB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Exit_DB->Location = System::Drawing::Point(0, 925);
			this->Btn_Exit_DB->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Exit_DB->Name = L"Btn_Exit_DB";
			this->Btn_Exit_DB->Size = System::Drawing::Size(366, 105);
			this->Btn_Exit_DB->TabIndex = 6;
			this->Btn_Exit_DB->Text = L"Exit";
			this->Btn_Exit_DB->UseVisualStyleBackColor = true;
			this->Btn_Exit_DB->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_Exit_DB);
			// 
			// panel_gestion
			// 
			this->panel_gestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel_gestion->Controls->Add(this->Btn_Exit_DB);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_stat);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_stock);
			this->panel_gestion->Controls->Add(this->btn_Gestion_commandes);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_clients);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_Personnel);
			this->panel_gestion->Controls->Add(this->Pannel_Titre);
			this->panel_gestion->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_gestion->Location = System::Drawing::Point(0, 0);
			this->panel_gestion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_gestion->Name = L"panel_gestion";
			this->panel_gestion->Size = System::Drawing::Size(366, 1437);
			this->panel_gestion->TabIndex = 0;
			// 
			// Panel_Dashboard
			// 
			this->Panel_Dashboard->Controls->Add(this->Title_Dashboard);
			this->Panel_Dashboard->Enabled = false;
			this->Panel_Dashboard->Location = System::Drawing::Point(1025, 27);
			this->Panel_Dashboard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Dashboard->Name = L"Panel_Dashboard";
			this->Panel_Dashboard->Size = System::Drawing::Size(532, 1188);
			this->Panel_Dashboard->TabIndex = 1;
			this->Panel_Dashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Dashboard_Paint);
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Dashboard->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Dashboard->Location = System::Drawing::Point(-13, 37);
			this->Title_Dashboard->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title_Dashboard->Name = L"Title_Dashboard";
			this->Title_Dashboard->Size = System::Drawing::Size(567, 170);
			this->Title_Dashboard->TabIndex = 0;
			this->Title_Dashboard->Text = L"Dashboard";
			this->Title_Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panel_Gestion_Client
			// 
			this->Panel_Gestion_Client->Controls->Add(this->button1_nouveau);
			this->Panel_Gestion_Client->Controls->Add(this->button1_supprimer);
			this->Panel_Gestion_Client->Controls->Add(this->button1_modiffier);
			this->Panel_Gestion_Client->Controls->Add(this->button1_ajouter);
			this->Panel_Gestion_Client->Controls->Add(this->button1_afficher);
			this->Panel_Gestion_Client->Controls->Add(this->labelpaysfacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelvillefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_paysfacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_villefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_codepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelchampclient);
			this->Panel_Gestion_Client->Controls->Add(this->label_adressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->label_adresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text1_message);
			this->Panel_Gestion_Client->Controls->Add(this->labelpayslivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelvillelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepostlivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_payslivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_villelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_codepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labeldatenaissance);
			this->Panel_Gestion_Client->Controls->Add(this->labelprenomclient);
			this->Panel_Gestion_Client->Controls->Add(this->labelnomclient);
			this->Panel_Gestion_Client->Controls->Add(this->labelidclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_nomclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_datenaissance);
			this->Panel_Gestion_Client->Controls->Add(this->text_prenomclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_idclient);
			this->Panel_Gestion_Client->Controls->Add(this->dataGridView_gestclient);
			this->Panel_Gestion_Client->Controls->Add(this->Title_gestion_clients);
			this->Panel_Gestion_Client->Location = System::Drawing::Point(423, 26);
			this->Panel_Gestion_Client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Gestion_Client->Name = L"Panel_Gestion_Client";
			this->Panel_Gestion_Client->Size = System::Drawing::Size(1758, 1271);
			this->Panel_Gestion_Client->TabIndex = 3;
			this->Panel_Gestion_Client->Visible = false;
			// 
			// button1_nouveau
			// 
			this->button1_nouveau->ActiveBorderThickness = 1;
			this->button1_nouveau->ActiveCornerRadius = 20;
			this->button1_nouveau->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_nouveau->ActiveForecolor = System::Drawing::Color::White;
			this->button1_nouveau->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_nouveau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_nouveau.BackgroundImage")));
			this->button1_nouveau->ButtonText = L"NOUVEAU";
			this->button1_nouveau->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_nouveau->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_nouveau->ForeColor = System::Drawing::Color::White;
			this->button1_nouveau->IdleBorderThickness = 1;
			this->button1_nouveau->IdleCornerRadius = 20;
			this->button1_nouveau->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_nouveau->IdleForecolor = System::Drawing::Color::White;
			this->button1_nouveau->IdleLineColor = System::Drawing::Color::White;
			this->button1_nouveau->Location = System::Drawing::Point(1436, 782);
			this->button1_nouveau->Margin = System::Windows::Forms::Padding(5);
			this->button1_nouveau->Name = L"button1_nouveau";
			this->button1_nouveau->Size = System::Drawing::Size(273, 72);
			this->button1_nouveau->TabIndex = 122;
			this->button1_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_supprimer
			// 
			this->button1_supprimer->ActiveBorderThickness = 1;
			this->button1_supprimer->ActiveCornerRadius = 20;
			this->button1_supprimer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_supprimer->ActiveForecolor = System::Drawing::Color::White;
			this->button1_supprimer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_supprimer.BackgroundImage")));
			this->button1_supprimer->ButtonText = L"SUPPRIMER";
			this->button1_supprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_supprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_supprimer->ForeColor = System::Drawing::Color::White;
			this->button1_supprimer->IdleBorderThickness = 1;
			this->button1_supprimer->IdleCornerRadius = 20;
			this->button1_supprimer->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_supprimer->IdleForecolor = System::Drawing::Color::White;
			this->button1_supprimer->IdleLineColor = System::Drawing::Color::White;
			this->button1_supprimer->Location = System::Drawing::Point(1096, 782);
			this->button1_supprimer->Margin = System::Windows::Forms::Padding(5);
			this->button1_supprimer->Name = L"button1_supprimer";
			this->button1_supprimer->Size = System::Drawing::Size(273, 72);
			this->button1_supprimer->TabIndex = 53;
			this->button1_supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_modiffier
			// 
			this->button1_modiffier->ActiveBorderThickness = 1;
			this->button1_modiffier->ActiveCornerRadius = 20;
			this->button1_modiffier->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_modiffier->ActiveForecolor = System::Drawing::Color::White;
			this->button1_modiffier->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_modiffier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_modiffier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_modiffier.BackgroundImage")));
			this->button1_modiffier->ButtonText = L"MODIFIER";
			this->button1_modiffier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_modiffier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_modiffier->ForeColor = System::Drawing::Color::White;
			this->button1_modiffier->IdleBorderThickness = 1;
			this->button1_modiffier->IdleCornerRadius = 20;
			this->button1_modiffier->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_modiffier->IdleForecolor = System::Drawing::Color::White;
			this->button1_modiffier->IdleLineColor = System::Drawing::Color::White;
			this->button1_modiffier->Location = System::Drawing::Point(754, 782);
			this->button1_modiffier->Margin = System::Windows::Forms::Padding(5);
			this->button1_modiffier->Name = L"button1_modiffier";
			this->button1_modiffier->Size = System::Drawing::Size(275, 72);
			this->button1_modiffier->TabIndex = 52;
			this->button1_modiffier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_ajouter
			// 
			this->button1_ajouter->ActiveBorderThickness = 1;
			this->button1_ajouter->ActiveCornerRadius = 20;
			this->button1_ajouter->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_ajouter->ActiveForecolor = System::Drawing::Color::White;
			this->button1_ajouter->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_ajouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_ajouter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_ajouter.BackgroundImage")));
			this->button1_ajouter->ButtonText = L"AJOUTER";
			this->button1_ajouter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_ajouter->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_ajouter->ForeColor = System::Drawing::Color::White;
			this->button1_ajouter->IdleBorderThickness = 1;
			this->button1_ajouter->IdleCornerRadius = 20;
			this->button1_ajouter->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_ajouter->IdleForecolor = System::Drawing::Color::White;
			this->button1_ajouter->IdleLineColor = System::Drawing::Color::White;
			this->button1_ajouter->Location = System::Drawing::Point(415, 782);
			this->button1_ajouter->Margin = System::Windows::Forms::Padding(5);
			this->button1_ajouter->Name = L"button1_ajouter";
			this->button1_ajouter->Size = System::Drawing::Size(274, 72);
			this->button1_ajouter->TabIndex = 51;
			this->button1_ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_afficher
			// 
			this->button1_afficher->ActiveBorderThickness = 1;
			this->button1_afficher->ActiveCornerRadius = 20;
			this->button1_afficher->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_afficher->ActiveForecolor = System::Drawing::Color::White;
			this->button1_afficher->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_afficher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_afficher.BackgroundImage")));
			this->button1_afficher->ButtonText = L"AFFICHER";
			this->button1_afficher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_afficher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_afficher->ForeColor = System::Drawing::Color::White;
			this->button1_afficher->IdleBorderThickness = 1;
			this->button1_afficher->IdleCornerRadius = 20;
			this->button1_afficher->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_afficher->IdleForecolor = System::Drawing::Color::White;
			this->button1_afficher->IdleLineColor = System::Drawing::Color::White;
			this->button1_afficher->Location = System::Drawing::Point(74, 782);
			this->button1_afficher->Margin = System::Windows::Forms::Padding(5);
			this->button1_afficher->Name = L"button1_afficher";
			this->button1_afficher->Size = System::Drawing::Size(271, 72);
			this->button1_afficher->TabIndex = 50;
			this->button1_afficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelpaysfacturation
			// 
			this->labelpaysfacturation->AutoSize = true;
			this->labelpaysfacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelpaysfacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpaysfacturation->ForeColor = System::Drawing::Color::White;
			this->labelpaysfacturation->Location = System::Drawing::Point(1347, 646);
			this->labelpaysfacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelpaysfacturation->Name = L"labelpaysfacturation";
			this->labelpaysfacturation->Size = System::Drawing::Size(50, 28);
			this->labelpaysfacturation->TabIndex = 49;
			this->labelpaysfacturation->Text = L"Pays";
			// 
			// labelvillefacturation
			// 
			this->labelvillefacturation->AutoSize = true;
			this->labelvillefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelvillefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvillefacturation->ForeColor = System::Drawing::Color::White;
			this->labelvillefacturation->Location = System::Drawing::Point(1348, 572);
			this->labelvillefacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelvillefacturation->Name = L"labelvillefacturation";
			this->labelvillefacturation->Size = System::Drawing::Size(49, 28);
			this->labelvillefacturation->TabIndex = 48;
			this->labelvillefacturation->Text = L"Ville";
			// 
			// labelcodepostalefacturation
			// 
			this->labelcodepostalefacturation->AutoSize = true;
			this->labelcodepostalefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostalefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostalefacturation->ForeColor = System::Drawing::Color::White;
			this->labelcodepostalefacturation->Location = System::Drawing::Point(1347, 486);
			this->labelcodepostalefacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelcodepostalefacturation->Name = L"labelcodepostalefacturation";
			this->labelcodepostalefacturation->Size = System::Drawing::Size(125, 28);
			this->labelcodepostalefacturation->TabIndex = 47;
			this->labelcodepostalefacturation->Text = L"Code Postale";
			// 
			// labeladressepostalefacturation
			// 
			this->labeladressepostalefacturation->AutoSize = true;
			this->labeladressepostalefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepostalefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepostalefacturation->ForeColor = System::Drawing::Color::White;
			this->labeladressepostalefacturation->Location = System::Drawing::Point(1348, 404);
			this->labeladressepostalefacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeladressepostalefacturation->Name = L"labeladressepostalefacturation";
			this->labeladressepostalefacturation->Size = System::Drawing::Size(147, 28);
			this->labeladressepostalefacturation->TabIndex = 46;
			this->labeladressepostalefacturation->Text = L"Adresse Postale";
			// 
			// labelidadressefacturation
			// 
			this->labelidadressefacturation->AutoSize = true;
			this->labelidadressefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelidadressefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadressefacturation->ForeColor = System::Drawing::Color::White;
			this->labelidadressefacturation->Location = System::Drawing::Point(1348, 318);
			this->labelidadressefacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelidadressefacturation->Name = L"labelidadressefacturation";
			this->labelidadressefacturation->Size = System::Drawing::Size(104, 28);
			this->labelidadressefacturation->TabIndex = 45;
			this->labelidadressefacturation->Text = L"ID Adresse";
			// 
			// text_adressepostalefacturation
			// 
			this->text_adressepostalefacturation->Location = System::Drawing::Point(1345, 434);
			this->text_adressepostalefacturation->Margin = System::Windows::Forms::Padding(2);
			this->text_adressepostalefacturation->Name = L"text_adressepostalefacturation";
			this->text_adressepostalefacturation->Size = System::Drawing::Size(224, 26);
			this->text_adressepostalefacturation->TabIndex = 44;
			// 
			// text_paysfacturation
			// 
			this->text_paysfacturation->Location = System::Drawing::Point(1345, 676);
			this->text_paysfacturation->Margin = System::Windows::Forms::Padding(2);
			this->text_paysfacturation->Name = L"text_paysfacturation";
			this->text_paysfacturation->Size = System::Drawing::Size(224, 26);
			this->text_paysfacturation->TabIndex = 43;
			// 
			// text_villefacturation
			// 
			this->text_villefacturation->Location = System::Drawing::Point(1345, 602);
			this->text_villefacturation->Margin = System::Windows::Forms::Padding(2);
			this->text_villefacturation->Name = L"text_villefacturation";
			this->text_villefacturation->Size = System::Drawing::Size(224, 26);
			this->text_villefacturation->TabIndex = 42;
			// 
			// text_codepostalefacturation
			// 
			this->text_codepostalefacturation->Location = System::Drawing::Point(1345, 516);
			this->text_codepostalefacturation->Margin = System::Windows::Forms::Padding(2);
			this->text_codepostalefacturation->Name = L"text_codepostalefacturation";
			this->text_codepostalefacturation->Size = System::Drawing::Size(224, 26);
			this->text_codepostalefacturation->TabIndex = 41;
			// 
			// text_idadressefacturation
			// 
			this->text_idadressefacturation->Location = System::Drawing::Point(1345, 348);
			this->text_idadressefacturation->Margin = System::Windows::Forms::Padding(2);
			this->text_idadressefacturation->Name = L"text_idadressefacturation";
			this->text_idadressefacturation->Size = System::Drawing::Size(224, 26);
			this->text_idadressefacturation->TabIndex = 40;
			// 
			// labelchampclient
			// 
			this->labelchampclient->AutoSize = true;
			this->labelchampclient->BackColor = System::Drawing::Color::Transparent;
			this->labelchampclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->labelchampclient->ForeColor = System::Drawing::Color::White;
			this->labelchampclient->Location = System::Drawing::Point(160, 236);
			this->labelchampclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelchampclient->Name = L"labelchampclient";
			this->labelchampclient->Size = System::Drawing::Size(280, 32);
			this->labelchampclient->TabIndex = 39;
			this->labelchampclient->Text = L"Informations générales";
			// 
			// label_adressefacturation
			// 
			this->label_adressefacturation->AutoSize = true;
			this->label_adressefacturation->BackColor = System::Drawing::Color::Transparent;
			this->label_adressefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_adressefacturation->ForeColor = System::Drawing::Color::White;
			this->label_adressefacturation->Location = System::Drawing::Point(1339, 236);
			this->label_adressefacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_adressefacturation->Name = L"label_adressefacturation";
			this->label_adressefacturation->Size = System::Drawing::Size(273, 32);
			this->label_adressefacturation->TabIndex = 38;
			this->label_adressefacturation->Text = L"Adresse de facturation";
			// 
			// label_adresselivraison
			// 
			this->label_adresselivraison->AutoSize = true;
			this->label_adresselivraison->BackColor = System::Drawing::Color::Transparent;
			this->label_adresselivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_adresselivraison->ForeColor = System::Drawing::Color::White;
			this->label_adresselivraison->Location = System::Drawing::Point(789, 236);
			this->label_adresselivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_adresselivraison->Name = L"label_adresselivraison";
			this->label_adresselivraison->Size = System::Drawing::Size(244, 32);
			this->label_adresselivraison->TabIndex = 37;
			this->label_adresselivraison->Text = L"Adresse de livraison";
			// 
			// text1_message
			// 
			this->text1_message->Location = System::Drawing::Point(13, 870);
			this->text1_message->Margin = System::Windows::Forms::Padding(2);
			this->text1_message->Multiline = true;
			this->text1_message->Name = L"text1_message";
			this->text1_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text1_message->Size = System::Drawing::Size(1736, 58);
			this->text1_message->TabIndex = 36;
			// 
			// labelpayslivraison
			// 
			this->labelpayslivraison->AutoSize = true;
			this->labelpayslivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelpayslivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpayslivraison->ForeColor = System::Drawing::Color::White;
			this->labelpayslivraison->Location = System::Drawing::Point(798, 646);
			this->labelpayslivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelpayslivraison->Name = L"labelpayslivraison";
			this->labelpayslivraison->Size = System::Drawing::Size(50, 28);
			this->labelpayslivraison->TabIndex = 24;
			this->labelpayslivraison->Text = L"Pays";
			// 
			// labelvillelivraison
			// 
			this->labelvillelivraison->AutoSize = true;
			this->labelvillelivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelvillelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvillelivraison->ForeColor = System::Drawing::Color::White;
			this->labelvillelivraison->Location = System::Drawing::Point(798, 572);
			this->labelvillelivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelvillelivraison->Name = L"labelvillelivraison";
			this->labelvillelivraison->Size = System::Drawing::Size(49, 28);
			this->labelvillelivraison->TabIndex = 23;
			this->labelvillelivraison->Text = L"Ville";
			// 
			// labelcodepostalelivraison
			// 
			this->labelcodepostalelivraison->AutoSize = true;
			this->labelcodepostalelivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostalelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostalelivraison->ForeColor = System::Drawing::Color::White;
			this->labelcodepostalelivraison->Location = System::Drawing::Point(798, 486);
			this->labelcodepostalelivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelcodepostalelivraison->Name = L"labelcodepostalelivraison";
			this->labelcodepostalelivraison->Size = System::Drawing::Size(125, 28);
			this->labelcodepostalelivraison->TabIndex = 22;
			this->labelcodepostalelivraison->Text = L"Code Postale";
			// 
			// labeladressepostlivraison
			// 
			this->labeladressepostlivraison->AutoSize = true;
			this->labeladressepostlivraison->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepostlivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepostlivraison->ForeColor = System::Drawing::Color::White;
			this->labeladressepostlivraison->Location = System::Drawing::Point(798, 404);
			this->labeladressepostlivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeladressepostlivraison->Name = L"labeladressepostlivraison";
			this->labeladressepostlivraison->Size = System::Drawing::Size(147, 28);
			this->labeladressepostlivraison->TabIndex = 21;
			this->labeladressepostlivraison->Text = L"Adresse Postale";
			// 
			// labelidadresselivraison
			// 
			this->labelidadresselivraison->AutoSize = true;
			this->labelidadresselivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelidadresselivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadresselivraison->ForeColor = System::Drawing::Color::White;
			this->labelidadresselivraison->Location = System::Drawing::Point(798, 317);
			this->labelidadresselivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelidadresselivraison->Name = L"labelidadresselivraison";
			this->labelidadresselivraison->Size = System::Drawing::Size(104, 28);
			this->labelidadresselivraison->TabIndex = 20;
			this->labelidadresselivraison->Text = L"ID Adresse";
			this->labelidadresselivraison->Click += gcnew System::EventHandler(this, &Dashboard::label11_Click);
			// 
			// text_adressepostalelivraison
			// 
			this->text_adressepostalelivraison->Location = System::Drawing::Point(795, 434);
			this->text_adressepostalelivraison->Margin = System::Windows::Forms::Padding(2);
			this->text_adressepostalelivraison->Name = L"text_adressepostalelivraison";
			this->text_adressepostalelivraison->Size = System::Drawing::Size(224, 26);
			this->text_adressepostalelivraison->TabIndex = 19;
			// 
			// text_payslivraison
			// 
			this->text_payslivraison->Location = System::Drawing::Point(795, 676);
			this->text_payslivraison->Margin = System::Windows::Forms::Padding(2);
			this->text_payslivraison->Name = L"text_payslivraison";
			this->text_payslivraison->Size = System::Drawing::Size(224, 26);
			this->text_payslivraison->TabIndex = 18;
			// 
			// text_villelivraison
			// 
			this->text_villelivraison->Location = System::Drawing::Point(795, 602);
			this->text_villelivraison->Margin = System::Windows::Forms::Padding(2);
			this->text_villelivraison->Name = L"text_villelivraison";
			this->text_villelivraison->Size = System::Drawing::Size(224, 26);
			this->text_villelivraison->TabIndex = 17;
			// 
			// text_codepostalelivraison
			// 
			this->text_codepostalelivraison->Location = System::Drawing::Point(795, 516);
			this->text_codepostalelivraison->Margin = System::Windows::Forms::Padding(2);
			this->text_codepostalelivraison->Name = L"text_codepostalelivraison";
			this->text_codepostalelivraison->Size = System::Drawing::Size(224, 26);
			this->text_codepostalelivraison->TabIndex = 16;
			// 
			// text_idadresselivraison
			// 
			this->text_idadresselivraison->Location = System::Drawing::Point(795, 348);
			this->text_idadresselivraison->Margin = System::Windows::Forms::Padding(2);
			this->text_idadresselivraison->Name = L"text_idadresselivraison";
			this->text_idadresselivraison->Size = System::Drawing::Size(224, 26);
			this->text_idadresselivraison->TabIndex = 15;
			// 
			// labeldatenaissance
			// 
			this->labeldatenaissance->AutoSize = true;
			this->labeldatenaissance->BackColor = System::Drawing::Color::Transparent;
			this->labeldatenaissance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldatenaissance->ForeColor = System::Drawing::Color::White;
			this->labeldatenaissance->Location = System::Drawing::Point(168, 568);
			this->labeldatenaissance->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeldatenaissance->Name = L"labeldatenaissance";
			this->labeldatenaissance->Size = System::Drawing::Size(301, 28);
			this->labeldatenaissance->TabIndex = 13;
			this->labeldatenaissance->Text = L"Date de naissance (JJ/MM/AAAA)\r\n";
			// 
			// labelprenomclient
			// 
			this->labelprenomclient->AutoSize = true;
			this->labelprenomclient->BackColor = System::Drawing::Color::Transparent;
			this->labelprenomclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelprenomclient->ForeColor = System::Drawing::Color::White;
			this->labelprenomclient->Location = System::Drawing::Point(168, 486);
			this->labelprenomclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelprenomclient->Name = L"labelprenomclient";
			this->labelprenomclient->Size = System::Drawing::Size(80, 28);
			this->labelprenomclient->TabIndex = 12;
			this->labelprenomclient->Text = L"Prénom";
			// 
			// labelnomclient
			// 
			this->labelnomclient->AutoSize = true;
			this->labelnomclient->BackColor = System::Drawing::Color::Transparent;
			this->labelnomclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnomclient->ForeColor = System::Drawing::Color::White;
			this->labelnomclient->Location = System::Drawing::Point(168, 404);
			this->labelnomclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnomclient->Name = L"labelnomclient";
			this->labelnomclient->Size = System::Drawing::Size(56, 28);
			this->labelnomclient->TabIndex = 11;
			this->labelnomclient->Text = L"Nom";
			// 
			// labelidclient
			// 
			this->labelidclient->AutoSize = true;
			this->labelidclient->BackColor = System::Drawing::Color::Transparent;
			this->labelidclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidclient->ForeColor = System::Drawing::Color::White;
			this->labelidclient->Location = System::Drawing::Point(168, 317);
			this->labelidclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelidclient->Name = L"labelidclient";
			this->labelidclient->Size = System::Drawing::Size(86, 28);
			this->labelidclient->TabIndex = 10;
			this->labelidclient->Text = L"ID Client";
			// 
			// text_nomclient
			// 
			this->text_nomclient->Location = System::Drawing::Point(166, 434);
			this->text_nomclient->Margin = System::Windows::Forms::Padding(2);
			this->text_nomclient->Name = L"text_nomclient";
			this->text_nomclient->Size = System::Drawing::Size(224, 26);
			this->text_nomclient->TabIndex = 9;
			// 
			// text_datenaissance
			// 
			this->text_datenaissance->Location = System::Drawing::Point(166, 602);
			this->text_datenaissance->Margin = System::Windows::Forms::Padding(2);
			this->text_datenaissance->Name = L"text_datenaissance";
			this->text_datenaissance->Size = System::Drawing::Size(224, 26);
			this->text_datenaissance->TabIndex = 7;
			// 
			// text_prenomclient
			// 
			this->text_prenomclient->Location = System::Drawing::Point(166, 516);
			this->text_prenomclient->Margin = System::Windows::Forms::Padding(2);
			this->text_prenomclient->Name = L"text_prenomclient";
			this->text_prenomclient->Size = System::Drawing::Size(224, 26);
			this->text_prenomclient->TabIndex = 6;
			// 
			// text_idclient
			// 
			this->text_idclient->Location = System::Drawing::Point(166, 348);
			this->text_idclient->Margin = System::Windows::Forms::Padding(2);
			this->text_idclient->Name = L"text_idclient";
			this->text_idclient->Size = System::Drawing::Size(224, 26);
			this->text_idclient->TabIndex = 5;
			// 
			// dataGridView_gestclient
			// 
			this->dataGridView_gestclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestclient->Location = System::Drawing::Point(13, 960);
			this->dataGridView_gestclient->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView_gestclient->Name = L"dataGridView_gestclient";
			this->dataGridView_gestclient->ReadOnly = true;
			this->dataGridView_gestclient->RowHeadersWidth = 62;
			this->dataGridView_gestclient->RowTemplate->Height = 28;
			this->dataGridView_gestclient->Size = System::Drawing::Size(1730, 300);
			this->dataGridView_gestclient->TabIndex = 1;
			// 
			// Title_gestion_clients
			// 
			this->Title_gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_gestion_clients->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_gestion_clients->Location = System::Drawing::Point(663, 50);
			this->Title_gestion_clients->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title_gestion_clients->Name = L"Title_gestion_clients";
			this->Title_gestion_clients->Size = System::Drawing::Size(489, 132);
			this->Title_gestion_clients->TabIndex = 0;
			this->Title_gestion_clients->Text = L"Gestion Clients";
			// 
			// Panel_Gestion_Commandes
			// 
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idadfactcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idadfactcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idadlivcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idadlivcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_nouveau);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_payssociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_codepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_payssociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_codepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_villesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_adressepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_villesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_adressepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_datepaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_datepaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label2_paiementcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_mypaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_nbpaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_mypaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_nbpaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_dateemission);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_dateemission);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_montanttotTTC);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_montanttotTTC);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_montanttotTVA);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_montanttotTVA);
			this->Panel_Gestion_Commandes->Controls->Add(this->label2_informationsgen);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_supprimer);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_modifier);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_ajouter);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_afficher);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_infofact);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_messagecommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_soldereglement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idadressesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_societe);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_nmservice);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idfacture);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_nmservice);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_soldereglement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idadressesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_societe);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idfacture);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_datelivraison);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_monanttotHT);
			this->Panel_Gestion_Commandes->Controls->Add(this->label2_idclientcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->labelref_commande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idclientcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_datelivraison);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_montanttotHT);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_refcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->dataGridView_gestcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->Title_Gestion_Commandes);
			this->Panel_Gestion_Commandes->Location = System::Drawing::Point(403, 14);
			this->Panel_Gestion_Commandes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Gestion_Commandes->Name = L"Panel_Gestion_Commandes";
			this->Panel_Gestion_Commandes->Size = System::Drawing::Size(1784, 1276);
			this->Panel_Gestion_Commandes->TabIndex = 4;
			this->Panel_Gestion_Commandes->Visible = false;
			// 
			// label_idadfactcommande
			// 
			this->label_idadfactcommande->AutoSize = true;
			this->label_idadfactcommande->BackColor = System::Drawing::Color::Transparent;
			this->label_idadfactcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadfactcommande->ForeColor = System::Drawing::Color::White;
			this->label_idadfactcommande->Location = System::Drawing::Point(499, 415);
			this->label_idadfactcommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_idadfactcommande->Name = L"label_idadfactcommande";
			this->label_idadfactcommande->Size = System::Drawing::Size(204, 28);
			this->label_idadfactcommande->TabIndex = 125;
			this->label_idadfactcommande->Text = L"ID Adresse facturation";
			// 
			// text_idadfactcommande
			// 
			this->text_idadfactcommande->Location = System::Drawing::Point(504, 445);
			this->text_idadfactcommande->Margin = System::Windows::Forms::Padding(2);
			this->text_idadfactcommande->Name = L"text_idadfactcommande";
			this->text_idadfactcommande->Size = System::Drawing::Size(196, 26);
			this->text_idadfactcommande->TabIndex = 124;
			// 
			// label_idadlivcommande
			// 
			this->label_idadlivcommande->AutoSize = true;
			this->label_idadlivcommande->BackColor = System::Drawing::Color::Transparent;
			this->label_idadlivcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadlivcommande->ForeColor = System::Drawing::Color::White;
			this->label_idadlivcommande->Location = System::Drawing::Point(288, 415);
			this->label_idadlivcommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_idadlivcommande->Name = L"label_idadlivcommande";
			this->label_idadlivcommande->Size = System::Drawing::Size(182, 28);
			this->label_idadlivcommande->TabIndex = 123;
			this->label_idadlivcommande->Text = L"ID Adresse livraison";
			// 
			// text_idadlivcommande
			// 
			this->text_idadlivcommande->Location = System::Drawing::Point(293, 445);
			this->text_idadlivcommande->Margin = System::Windows::Forms::Padding(2);
			this->text_idadlivcommande->Name = L"text_idadlivcommande";
			this->text_idadlivcommande->Size = System::Drawing::Size(177, 26);
			this->text_idadlivcommande->TabIndex = 122;
			// 
			// button2_nouveau
			// 
			this->button2_nouveau->ActiveBorderThickness = 1;
			this->button2_nouveau->ActiveCornerRadius = 20;
			this->button2_nouveau->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_nouveau->ActiveForecolor = System::Drawing::Color::White;
			this->button2_nouveau->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_nouveau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_nouveau.BackgroundImage")));
			this->button2_nouveau->ButtonText = L"NOUVEAU";
			this->button2_nouveau->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_nouveau->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_nouveau->ForeColor = System::Drawing::Color::White;
			this->button2_nouveau->IdleBorderThickness = 1;
			this->button2_nouveau->IdleCornerRadius = 20;
			this->button2_nouveau->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_nouveau->IdleForecolor = System::Drawing::Color::White;
			this->button2_nouveau->IdleLineColor = System::Drawing::Color::White;
			this->button2_nouveau->Location = System::Drawing::Point(1447, 764);
			this->button2_nouveau->Margin = System::Windows::Forms::Padding(5);
			this->button2_nouveau->Name = L"button2_nouveau";
			this->button2_nouveau->Size = System::Drawing::Size(273, 72);
			this->button2_nouveau->TabIndex = 121;
			this->button2_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_payssociete
			// 
			this->label_payssociete->AutoSize = true;
			this->label_payssociete->BackColor = System::Drawing::Color::Transparent;
			this->label_payssociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_payssociete->ForeColor = System::Drawing::Color::White;
			this->label_payssociete->Location = System::Drawing::Point(1515, 640);
			this->label_payssociete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_payssociete->Name = L"label_payssociete";
			this->label_payssociete->Size = System::Drawing::Size(50, 28);
			this->label_payssociete->TabIndex = 120;
			this->label_payssociete->Text = L"Pays";
			// 
			// label_codepostsociete
			// 
			this->label_codepostsociete->AutoSize = true;
			this->label_codepostsociete->BackColor = System::Drawing::Color::Transparent;
			this->label_codepostsociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_codepostsociete->ForeColor = System::Drawing::Color::White;
			this->label_codepostsociete->Location = System::Drawing::Point(1318, 642);
			this->label_codepostsociete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_codepostsociete->Name = L"label_codepostsociete";
			this->label_codepostsociete->Size = System::Drawing::Size(125, 28);
			this->label_codepostsociete->TabIndex = 119;
			this->label_codepostsociete->Text = L"Code Postale";
			// 
			// text_payssociete
			// 
			this->text_payssociete->Location = System::Drawing::Point(1520, 670);
			this->text_payssociete->Margin = System::Windows::Forms::Padding(2);
			this->text_payssociete->Name = L"text_payssociete";
			this->text_payssociete->Size = System::Drawing::Size(110, 26);
			this->text_payssociete->TabIndex = 118;
			// 
			// text_codepostsociete
			// 
			this->text_codepostsociete->Location = System::Drawing::Point(1323, 672);
			this->text_codepostsociete->Margin = System::Windows::Forms::Padding(2);
			this->text_codepostsociete->Name = L"text_codepostsociete";
			this->text_codepostsociete->Size = System::Drawing::Size(171, 26);
			this->text_codepostsociete->TabIndex = 117;
			// 
			// label_villesociete
			// 
			this->label_villesociete->AutoSize = true;
			this->label_villesociete->BackColor = System::Drawing::Color::Transparent;
			this->label_villesociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_villesociete->ForeColor = System::Drawing::Color::White;
			this->label_villesociete->Location = System::Drawing::Point(1515, 554);
			this->label_villesociete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_villesociete->Name = L"label_villesociete";
			this->label_villesociete->Size = System::Drawing::Size(49, 28);
			this->label_villesociete->TabIndex = 116;
			this->label_villesociete->Text = L"Ville";
			// 
			// label_adressepostsociete
			// 
			this->label_adressepostsociete->AutoSize = true;
			this->label_adressepostsociete->BackColor = System::Drawing::Color::Transparent;
			this->label_adressepostsociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adressepostsociete->ForeColor = System::Drawing::Color::White;
			this->label_adressepostsociete->Location = System::Drawing::Point(1318, 556);
			this->label_adressepostsociete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_adressepostsociete->Name = L"label_adressepostsociete";
			this->label_adressepostsociete->Size = System::Drawing::Size(147, 28);
			this->label_adressepostsociete->TabIndex = 115;
			this->label_adressepostsociete->Text = L"Adresse Postale";
			// 
			// text_villesociete
			// 
			this->text_villesociete->Location = System::Drawing::Point(1520, 584);
			this->text_villesociete->Margin = System::Windows::Forms::Padding(2);
			this->text_villesociete->Name = L"text_villesociete";
			this->text_villesociete->Size = System::Drawing::Size(110, 26);
			this->text_villesociete->TabIndex = 114;
			// 
			// text_adressepostsociete
			// 
			this->text_adressepostsociete->Location = System::Drawing::Point(1323, 586);
			this->text_adressepostsociete->Margin = System::Windows::Forms::Padding(2);
			this->text_adressepostsociete->Name = L"text_adressepostsociete";
			this->text_adressepostsociete->Size = System::Drawing::Size(171, 26);
			this->text_adressepostsociete->TabIndex = 113;
			// 
			// label_datepaiement
			// 
			this->label_datepaiement->AutoSize = true;
			this->label_datepaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_datepaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_datepaiement->ForeColor = System::Drawing::Color::White;
			this->label_datepaiement->Location = System::Drawing::Point(846, 531);
			this->label_datepaiement->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_datepaiement->Name = L"label_datepaiement";
			this->label_datepaiement->Size = System::Drawing::Size(301, 28);
			this->label_datepaiement->TabIndex = 112;
			this->label_datepaiement->Text = L"Date de paiement (JJ/MM/AAAA)\r\n";
			// 
			// text_datepaiement
			// 
			this->text_datepaiement->Location = System::Drawing::Point(851, 562);
			this->text_datepaiement->Margin = System::Windows::Forms::Padding(2);
			this->text_datepaiement->Name = L"text_datepaiement";
			this->text_datepaiement->Size = System::Drawing::Size(287, 26);
			this->text_datepaiement->TabIndex = 111;
			// 
			// label2_paiementcommande
			// 
			this->label2_paiementcommande->AutoSize = true;
			this->label2_paiementcommande->BackColor = System::Drawing::Color::Transparent;
			this->label2_paiementcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2_paiementcommande->ForeColor = System::Drawing::Color::White;
			this->label2_paiementcommande->Location = System::Drawing::Point(845, 223);
			this->label2_paiementcommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2_paiementcommande->Name = L"label2_paiementcommande";
			this->label2_paiementcommande->Size = System::Drawing::Size(276, 32);
			this->label2_paiementcommande->TabIndex = 110;
			this->label2_paiementcommande->Text = L"Informations Paiement";
			// 
			// label_mypaiement
			// 
			this->label_mypaiement->AutoSize = true;
			this->label_mypaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_mypaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_mypaiement->ForeColor = System::Drawing::Color::White;
			this->label_mypaiement->Location = System::Drawing::Point(846, 417);
			this->label_mypaiement->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_mypaiement->Name = L"label_mypaiement";
			this->label_mypaiement->Size = System::Drawing::Size(187, 28);
			this->label_mypaiement->TabIndex = 106;
			this->label_mypaiement->Text = L"Moyen de paiement";
			// 
			// label_nbpaiement
			// 
			this->label_nbpaiement->AutoSize = true;
			this->label_nbpaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_nbpaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nbpaiement->ForeColor = System::Drawing::Color::White;
			this->label_nbpaiement->Location = System::Drawing::Point(846, 307);
			this->label_nbpaiement->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_nbpaiement->Name = L"label_nbpaiement";
			this->label_nbpaiement->Size = System::Drawing::Size(207, 28);
			this->label_nbpaiement->TabIndex = 105;
			this->label_nbpaiement->Text = L"Nombre de paiements";
			// 
			// text_mypaiement
			// 
			this->text_mypaiement->Location = System::Drawing::Point(851, 447);
			this->text_mypaiement->Margin = System::Windows::Forms::Padding(2);
			this->text_mypaiement->Name = L"text_mypaiement";
			this->text_mypaiement->Size = System::Drawing::Size(287, 26);
			this->text_mypaiement->TabIndex = 104;
			// 
			// text_nbpaiement
			// 
			this->text_nbpaiement->Location = System::Drawing::Point(851, 337);
			this->text_nbpaiement->Margin = System::Windows::Forms::Padding(2);
			this->text_nbpaiement->Name = L"text_nbpaiement";
			this->text_nbpaiement->Size = System::Drawing::Size(287, 26);
			this->text_nbpaiement->TabIndex = 100;
			// 
			// label_dateemission
			// 
			this->label_dateemission->AutoSize = true;
			this->label_dateemission->BackColor = System::Drawing::Color::Transparent;
			this->label_dateemission->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_dateemission->ForeColor = System::Drawing::Color::White;
			this->label_dateemission->Location = System::Drawing::Point(409, 642);
			this->label_dateemission->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_dateemission->Name = L"label_dateemission";
			this->label_dateemission->Size = System::Drawing::Size(285, 28);
			this->label_dateemission->TabIndex = 99;
			this->label_dateemission->Text = L"Date d\'émission (JJ/MM/AAAA)\r\n";
			// 
			// text_dateemission
			// 
			this->text_dateemission->Location = System::Drawing::Point(414, 673);
			this->text_dateemission->Margin = System::Windows::Forms::Padding(2);
			this->text_dateemission->Name = L"text_dateemission";
			this->text_dateemission->Size = System::Drawing::Size(287, 26);
			this->text_dateemission->TabIndex = 98;
			// 
			// label_montanttotTTC
			// 
			this->label_montanttotTTC->AutoSize = true;
			this->label_montanttotTTC->BackColor = System::Drawing::Color::Transparent;
			this->label_montanttotTTC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_montanttotTTC->ForeColor = System::Drawing::Color::White;
			this->label_montanttotTTC->Location = System::Drawing::Point(530, 528);
			this->label_montanttotTTC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_montanttotTTC->Name = L"label_montanttotTTC";
			this->label_montanttotTTC->Size = System::Drawing::Size(170, 28);
			this->label_montanttotTTC->TabIndex = 97;
			this->label_montanttotTTC->Text = L"Montant total TTC";
			// 
			// text_montanttotTTC
			// 
			this->text_montanttotTTC->Location = System::Drawing::Point(535, 558);
			this->text_montanttotTTC->Margin = System::Windows::Forms::Padding(2);
			this->text_montanttotTTC->Name = L"text_montanttotTTC";
			this->text_montanttotTTC->Size = System::Drawing::Size(165, 26);
			this->text_montanttotTTC->TabIndex = 96;
			// 
			// label_montanttotTVA
			// 
			this->label_montanttotTVA->AutoSize = true;
			this->label_montanttotTVA->BackColor = System::Drawing::Color::Transparent;
			this->label_montanttotTVA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_montanttotTVA->ForeColor = System::Drawing::Color::White;
			this->label_montanttotTVA->Location = System::Drawing::Point(319, 528);
			this->label_montanttotTVA->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_montanttotTVA->Name = L"label_montanttotTVA";
			this->label_montanttotTVA->Size = System::Drawing::Size(173, 28);
			this->label_montanttotTVA->TabIndex = 95;
			this->label_montanttotTVA->Text = L"Montant total TVA";
			// 
			// text_montanttotTVA
			// 
			this->text_montanttotTVA->Location = System::Drawing::Point(324, 558);
			this->text_montanttotTVA->Margin = System::Windows::Forms::Padding(2);
			this->text_montanttotTVA->Name = L"text_montanttotTVA";
			this->text_montanttotTVA->Size = System::Drawing::Size(165, 26);
			this->text_montanttotTVA->TabIndex = 94;
			// 
			// label2_informationsgen
			// 
			this->label2_informationsgen->AutoSize = true;
			this->label2_informationsgen->BackColor = System::Drawing::Color::Transparent;
			this->label2_informationsgen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2_informationsgen->ForeColor = System::Drawing::Color::White;
			this->label2_informationsgen->Location = System::Drawing::Point(72, 223);
			this->label2_informationsgen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2_informationsgen->Name = L"label2_informationsgen";
			this->label2_informationsgen->Size = System::Drawing::Size(280, 32);
			this->label2_informationsgen->TabIndex = 93;
			this->label2_informationsgen->Text = L"Informations générales";
			// 
			// button2_supprimer
			// 
			this->button2_supprimer->ActiveBorderThickness = 1;
			this->button2_supprimer->ActiveCornerRadius = 20;
			this->button2_supprimer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_supprimer->ActiveForecolor = System::Drawing::Color::White;
			this->button2_supprimer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_supprimer.BackgroundImage")));
			this->button2_supprimer->ButtonText = L"SUPPRIMER";
			this->button2_supprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_supprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_supprimer->ForeColor = System::Drawing::Color::White;
			this->button2_supprimer->IdleBorderThickness = 1;
			this->button2_supprimer->IdleCornerRadius = 20;
			this->button2_supprimer->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_supprimer->IdleForecolor = System::Drawing::Color::White;
			this->button2_supprimer->IdleLineColor = System::Drawing::Color::White;
			this->button2_supprimer->Location = System::Drawing::Point(1095, 764);
			this->button2_supprimer->Margin = System::Windows::Forms::Padding(5);
			this->button2_supprimer->Name = L"button2_supprimer";
			this->button2_supprimer->Size = System::Drawing::Size(273, 72);
			this->button2_supprimer->TabIndex = 92;
			this->button2_supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2_modifier
			// 
			this->button2_modifier->ActiveBorderThickness = 1;
			this->button2_modifier->ActiveCornerRadius = 20;
			this->button2_modifier->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_modifier->ActiveForecolor = System::Drawing::Color::White;
			this->button2_modifier->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_modifier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_modifier.BackgroundImage")));
			this->button2_modifier->ButtonText = L"MODIFIER";
			this->button2_modifier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_modifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_modifier->ForeColor = System::Drawing::Color::White;
			this->button2_modifier->IdleBorderThickness = 1;
			this->button2_modifier->IdleCornerRadius = 20;
			this->button2_modifier->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_modifier->IdleForecolor = System::Drawing::Color::White;
			this->button2_modifier->IdleLineColor = System::Drawing::Color::White;
			this->button2_modifier->Location = System::Drawing::Point(753, 764);
			this->button2_modifier->Margin = System::Windows::Forms::Padding(5);
			this->button2_modifier->Name = L"button2_modifier";
			this->button2_modifier->Size = System::Drawing::Size(275, 72);
			this->button2_modifier->TabIndex = 91;
			this->button2_modifier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2_ajouter
			// 
			this->button2_ajouter->ActiveBorderThickness = 1;
			this->button2_ajouter->ActiveCornerRadius = 20;
			this->button2_ajouter->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_ajouter->ActiveForecolor = System::Drawing::Color::White;
			this->button2_ajouter->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_ajouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_ajouter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_ajouter.BackgroundImage")));
			this->button2_ajouter->ButtonText = L"AJOUTER";
			this->button2_ajouter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_ajouter->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_ajouter->ForeColor = System::Drawing::Color::White;
			this->button2_ajouter->IdleBorderThickness = 1;
			this->button2_ajouter->IdleCornerRadius = 20;
			this->button2_ajouter->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_ajouter->IdleForecolor = System::Drawing::Color::White;
			this->button2_ajouter->IdleLineColor = System::Drawing::Color::White;
			this->button2_ajouter->Location = System::Drawing::Point(414, 764);
			this->button2_ajouter->Margin = System::Windows::Forms::Padding(5);
			this->button2_ajouter->Name = L"button2_ajouter";
			this->button2_ajouter->Size = System::Drawing::Size(274, 72);
			this->button2_ajouter->TabIndex = 90;
			this->button2_ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2_afficher
			// 
			this->button2_afficher->ActiveBorderThickness = 1;
			this->button2_afficher->ActiveCornerRadius = 20;
			this->button2_afficher->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_afficher->ActiveForecolor = System::Drawing::Color::White;
			this->button2_afficher->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_afficher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_afficher.BackgroundImage")));
			this->button2_afficher->ButtonText = L"AFFICHER";
			this->button2_afficher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_afficher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_afficher->ForeColor = System::Drawing::Color::White;
			this->button2_afficher->IdleBorderThickness = 1;
			this->button2_afficher->IdleCornerRadius = 20;
			this->button2_afficher->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_afficher->IdleForecolor = System::Drawing::Color::White;
			this->button2_afficher->IdleLineColor = System::Drawing::Color::White;
			this->button2_afficher->Location = System::Drawing::Point(73, 764);
			this->button2_afficher->Margin = System::Windows::Forms::Padding(5);
			this->button2_afficher->Name = L"button2_afficher";
			this->button2_afficher->Size = System::Drawing::Size(271, 72);
			this->button2_afficher->TabIndex = 89;
			this->button2_afficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_infofact
			// 
			this->label_infofact->AutoSize = true;
			this->label_infofact->BackColor = System::Drawing::Color::Transparent;
			this->label_infofact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_infofact->ForeColor = System::Drawing::Color::White;
			this->label_infofact->Location = System::Drawing::Point(1309, 223);
			this->label_infofact->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_infofact->Name = L"label_infofact";
			this->label_infofact->Size = System::Drawing::Size(299, 32);
			this->label_infofact->TabIndex = 76;
			this->label_infofact->Text = L"Informations Facturation";
			// 
			// text_messagecommande
			// 
			this->text_messagecommande->Location = System::Drawing::Point(15, 854);
			this->text_messagecommande->Margin = System::Windows::Forms::Padding(2);
			this->text_messagecommande->Multiline = true;
			this->text_messagecommande->Name = L"text_messagecommande";
			this->text_messagecommande->ReadOnly = true;
			this->text_messagecommande->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text_messagecommande->Size = System::Drawing::Size(1719, 58);
			this->text_messagecommande->TabIndex = 75;
			// 
			// label_soldereglement
			// 
			this->label_soldereglement->AutoSize = true;
			this->label_soldereglement->BackColor = System::Drawing::Color::Transparent;
			this->label_soldereglement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_soldereglement->ForeColor = System::Drawing::Color::White;
			this->label_soldereglement->Location = System::Drawing::Point(846, 642);
			this->label_soldereglement->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_soldereglement->Name = L"label_soldereglement";
			this->label_soldereglement->Size = System::Drawing::Size(183, 28);
			this->label_soldereglement->TabIndex = 74;
			this->label_soldereglement->Text = L"Solde de règlement";
			// 
			// label_idadressesociete
			// 
			this->label_idadressesociete->AutoSize = true;
			this->label_idadressesociete->BackColor = System::Drawing::Color::Transparent;
			this->label_idadressesociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadressesociete->ForeColor = System::Drawing::Color::White;
			this->label_idadressesociete->Location = System::Drawing::Point(1515, 471);
			this->label_idadressesociete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_idadressesociete->Name = L"label_idadressesociete";
			this->label_idadressesociete->Size = System::Drawing::Size(104, 28);
			this->label_idadressesociete->TabIndex = 73;
			this->label_idadressesociete->Text = L"ID Adresse";
			// 
			// label_societe
			// 
			this->label_societe->AutoSize = true;
			this->label_societe->BackColor = System::Drawing::Color::Transparent;
			this->label_societe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_societe->ForeColor = System::Drawing::Color::White;
			this->label_societe->Location = System::Drawing::Point(1318, 473);
			this->label_societe->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_societe->Name = L"label_societe";
			this->label_societe->Size = System::Drawing::Size(76, 28);
			this->label_societe->TabIndex = 72;
			this->label_societe->Text = L"Société";
			// 
			// label_nmservice
			// 
			this->label_nmservice->AutoSize = true;
			this->label_nmservice->BackColor = System::Drawing::Color::Transparent;
			this->label_nmservice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nmservice->ForeColor = System::Drawing::Color::White;
			this->label_nmservice->Location = System::Drawing::Point(1318, 391);
			this->label_nmservice->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_nmservice->Name = L"label_nmservice";
			this->label_nmservice->Size = System::Drawing::Size(227, 28);
			this->label_nmservice->TabIndex = 71;
			this->label_nmservice->Text = L"Numéro de service client";
			// 
			// label_idfacture
			// 
			this->label_idfacture->AutoSize = true;
			this->label_idfacture->BackColor = System::Drawing::Color::Transparent;
			this->label_idfacture->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idfacture->ForeColor = System::Drawing::Color::White;
			this->label_idfacture->Location = System::Drawing::Point(1318, 303);
			this->label_idfacture->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_idfacture->Name = L"label_idfacture";
			this->label_idfacture->Size = System::Drawing::Size(99, 28);
			this->label_idfacture->TabIndex = 70;
			this->label_idfacture->Text = L"ID Facture";
			// 
			// text_nmservice
			// 
			this->text_nmservice->Location = System::Drawing::Point(1323, 421);
			this->text_nmservice->Margin = System::Windows::Forms::Padding(2);
			this->text_nmservice->Name = L"text_nmservice";
			this->text_nmservice->Size = System::Drawing::Size(307, 26);
			this->text_nmservice->TabIndex = 69;
			// 
			// text_soldereglement
			// 
			this->text_soldereglement->Location = System::Drawing::Point(851, 672);
			this->text_soldereglement->Margin = System::Windows::Forms::Padding(2);
			this->text_soldereglement->Name = L"text_soldereglement";
			this->text_soldereglement->Size = System::Drawing::Size(285, 26);
			this->text_soldereglement->TabIndex = 68;
			// 
			// text_idadressesociete
			// 
			this->text_idadressesociete->Location = System::Drawing::Point(1520, 501);
			this->text_idadressesociete->Margin = System::Windows::Forms::Padding(2);
			this->text_idadressesociete->Name = L"text_idadressesociete";
			this->text_idadressesociete->Size = System::Drawing::Size(110, 26);
			this->text_idadressesociete->TabIndex = 67;
			// 
			// text_societe
			// 
			this->text_societe->Location = System::Drawing::Point(1323, 503);
			this->text_societe->Margin = System::Windows::Forms::Padding(2);
			this->text_societe->Name = L"text_societe";
			this->text_societe->Size = System::Drawing::Size(171, 26);
			this->text_societe->TabIndex = 66;
			// 
			// text_idfacture
			// 
			this->text_idfacture->Location = System::Drawing::Point(1323, 335);
			this->text_idfacture->Margin = System::Windows::Forms::Padding(2);
			this->text_idfacture->Name = L"text_idfacture";
			this->text_idfacture->Size = System::Drawing::Size(307, 26);
			this->text_idfacture->TabIndex = 65;
			// 
			// label_datelivraison
			// 
			this->label_datelivraison->AutoSize = true;
			this->label_datelivraison->BackColor = System::Drawing::Color::Transparent;
			this->label_datelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_datelivraison->ForeColor = System::Drawing::Color::White;
			this->label_datelivraison->Location = System::Drawing::Point(102, 642);
			this->label_datelivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_datelivraison->Name = L"label_datelivraison";
			this->label_datelivraison->Size = System::Drawing::Size(292, 28);
			this->label_datelivraison->TabIndex = 63;
			this->label_datelivraison->Text = L"Date de livraison (JJ/MM/AAAA)\r\n";
			// 
			// label_monanttotHT
			// 
			this->label_monanttotHT->AutoSize = true;
			this->label_monanttotHT->BackColor = System::Drawing::Color::Transparent;
			this->label_monanttotHT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_monanttotHT->ForeColor = System::Drawing::Color::White;
			this->label_monanttotHT->Location = System::Drawing::Point(102, 528);
			this->label_monanttotHT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_monanttotHT->Name = L"label_monanttotHT";
			this->label_monanttotHT->Size = System::Drawing::Size(163, 28);
			this->label_monanttotHT->TabIndex = 62;
			this->label_monanttotHT->Text = L"Montant total HT";
			// 
			// label2_idclientcommande
			// 
			this->label2_idclientcommande->AutoSize = true;
			this->label2_idclientcommande->BackColor = System::Drawing::Color::Transparent;
			this->label2_idclientcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2_idclientcommande->ForeColor = System::Drawing::Color::White;
			this->label2_idclientcommande->Location = System::Drawing::Point(102, 415);
			this->label2_idclientcommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2_idclientcommande->Name = L"label2_idclientcommande";
			this->label2_idclientcommande->Size = System::Drawing::Size(86, 28);
			this->label2_idclientcommande->TabIndex = 61;
			this->label2_idclientcommande->Text = L"ID Client";
			// 
			// labelref_commande
			// 
			this->labelref_commande->AutoSize = true;
			this->labelref_commande->BackColor = System::Drawing::Color::Transparent;
			this->labelref_commande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelref_commande->ForeColor = System::Drawing::Color::White;
			this->labelref_commande->Location = System::Drawing::Point(102, 303);
			this->labelref_commande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelref_commande->Name = L"labelref_commande";
			this->labelref_commande->Size = System::Drawing::Size(246, 28);
			this->labelref_commande->TabIndex = 60;
			this->labelref_commande->Text = L"Référence de la commande";
			// 
			// text_idclientcommande
			// 
			this->text_idclientcommande->Location = System::Drawing::Point(107, 445);
			this->text_idclientcommande->Margin = System::Windows::Forms::Padding(2);
			this->text_idclientcommande->Name = L"text_idclientcommande";
			this->text_idclientcommande->Size = System::Drawing::Size(165, 26);
			this->text_idclientcommande->TabIndex = 59;
			// 
			// text_datelivraison
			// 
			this->text_datelivraison->Location = System::Drawing::Point(107, 673);
			this->text_datelivraison->Margin = System::Windows::Forms::Padding(2);
			this->text_datelivraison->Name = L"text_datelivraison";
			this->text_datelivraison->Size = System::Drawing::Size(287, 26);
			this->text_datelivraison->TabIndex = 57;
			// 
			// text_montanttotHT
			// 
			this->text_montanttotHT->Location = System::Drawing::Point(107, 558);
			this->text_montanttotHT->Margin = System::Windows::Forms::Padding(2);
			this->text_montanttotHT->Name = L"text_montanttotHT";
			this->text_montanttotHT->Size = System::Drawing::Size(165, 26);
			this->text_montanttotHT->TabIndex = 56;
			// 
			// text_refcommande
			// 
			this->text_refcommande->Location = System::Drawing::Point(107, 334);
			this->text_refcommande->Margin = System::Windows::Forms::Padding(2);
			this->text_refcommande->Name = L"text_refcommande";
			this->text_refcommande->Size = System::Drawing::Size(593, 26);
			this->text_refcommande->TabIndex = 55;
			// 
			// dataGridView_gestcommande
			// 
			this->dataGridView_gestcommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestcommande->Location = System::Drawing::Point(15, 944);
			this->dataGridView_gestcommande->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView_gestcommande->Name = L"dataGridView_gestcommande";
			this->dataGridView_gestcommande->RowHeadersWidth = 62;
			this->dataGridView_gestcommande->RowTemplate->Height = 28;
			this->dataGridView_gestcommande->Size = System::Drawing::Size(1730, 300);
			this->dataGridView_gestcommande->TabIndex = 54;
			// 
			// Title_Gestion_Commandes
			// 
			this->Title_Gestion_Commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Commandes->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Commandes->Location = System::Drawing::Point(655, 69);
			this->Title_Gestion_Commandes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title_Gestion_Commandes->Name = L"Title_Gestion_Commandes";
			this->Title_Gestion_Commandes->Size = System::Drawing::Size(624, 132);
			this->Title_Gestion_Commandes->TabIndex = 0;
			this->Title_Gestion_Commandes->Text = L"Gestion Commandes";
			this->Title_Gestion_Commandes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_Gestion_Stock
			// 
			this->panel_Gestion_Stock->Controls->Add(this->title_Gestion_Stock);
			this->panel_Gestion_Stock->Location = System::Drawing::Point(2259, 1049);
			this->panel_Gestion_Stock->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_Gestion_Stock->Name = L"panel_Gestion_Stock";
			this->panel_Gestion_Stock->Size = System::Drawing::Size(179, 357);
			this->panel_Gestion_Stock->TabIndex = 0;
			this->panel_Gestion_Stock->Visible = false;
			// 
			// title_Gestion_Stock
			// 
			this->title_Gestion_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_Gestion_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->title_Gestion_Stock->Location = System::Drawing::Point(434, 40);
			this->title_Gestion_Stock->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->title_Gestion_Stock->Name = L"title_Gestion_Stock";
			this->title_Gestion_Stock->Size = System::Drawing::Size(476, 120);
			this->title_Gestion_Stock->TabIndex = 0;
			this->title_Gestion_Stock->Text = L"Gestion Stock";
			// 
			// Panel_Gestion_Stat
			// 
			this->Panel_Gestion_Stat->AccessibleRole = System::Windows::Forms::AccessibleRole::Pane;
			this->Panel_Gestion_Stat->Controls->Add(this->comboBox_TVAStat);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton29);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton28);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton27);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton26);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton21);
			this->Panel_Gestion_Stat->Controls->Add(this->label12);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton22);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton23);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton24);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton25);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox11);
			this->Panel_Gestion_Stat->Controls->Add(this->label18);
			this->Panel_Gestion_Stat->Controls->Add(this->label19);
			this->Panel_Gestion_Stat->Controls->Add(this->label20);
			this->Panel_Gestion_Stat->Controls->Add(this->label21);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox16);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox17);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox18);
			this->Panel_Gestion_Stat->Controls->Add(this->dataGridView2);
			this->Panel_Gestion_Stat->Controls->Add(this->Title_Gestion_Stat);
			this->Panel_Gestion_Stat->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Panel_Gestion_Stat->Location = System::Drawing::Point(378, 19);
			this->Panel_Gestion_Stat->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Gestion_Stat->Name = L"Panel_Gestion_Stat";
			this->Panel_Gestion_Stat->Size = System::Drawing::Size(1847, 1289);
			this->Panel_Gestion_Stat->TabIndex = 5;
			this->Panel_Gestion_Stat->Visible = false;
			// 
			// Title_Gestion_Stat
			// 
			this->Title_Gestion_Stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Stat->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Stat->Location = System::Drawing::Point(665, 57);
			this->Title_Gestion_Stat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title_Gestion_Stat->Name = L"Title_Gestion_Stat";
			this->Title_Gestion_Stat->Size = System::Drawing::Size(561, 120);
			this->Title_Gestion_Stat->TabIndex = 0;
			this->Title_Gestion_Stat->Text = L"Gestion Statistiques";
			this->Title_Gestion_Stat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Montant total d\'achat d\'un client";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(1154, 604);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(592, 72);
			this->bunifuThinButton21->TabIndex = 167;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(113, 232);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(645, 32);
			this->label12->TabIndex = 149;
			this->label12->Text = L"Calcul de la valeur commercial du stock avec variations";
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Chiffre d\'affaire ";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(1472, 243);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(273, 72);
			this->bunifuThinButton22->TabIndex = 148;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Produits sous seuil réapprivisionnement";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(1153, 370);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(592, 72);
			this->bunifuThinButton23->TabIndex = 147;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 1;
			this->bunifuThinButton24->ActiveCornerRadius = 20;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Les 10 articles les plus vendus";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleBorderThickness = 1;
			this->bunifuThinButton24->IdleCornerRadius = 20;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton24->Location = System::Drawing::Point(1472, 496);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(274, 72);
			this->bunifuThinButton24->TabIndex = 146;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 1;
			this->bunifuThinButton25->ActiveCornerRadius = 20;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Panier Moyen";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleBorderThickness = 1;
			this->bunifuThinButton25->IdleCornerRadius = 20;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton25->Location = System::Drawing::Point(1153, 243);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(271, 72);
			this->bunifuThinButton25->TabIndex = 145;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(59, 895);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox11->Size = System::Drawing::Size(1728, 58);
			this->textBox11->TabIndex = 143;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(144, 637);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(178, 28);
			this->label18->TabIndex = 134;
			this->label18->Text = L"Démarque inconnu";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(144, 523);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(179, 28);
			this->label19->TabIndex = 133;
			this->label19->Text = L"Remise commercial";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(144, 410);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(175, 28);
			this->label20->TabIndex = 132;
			this->label20->Text = L"Marge commercial";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(144, 298);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(46, 28);
			this->label21->TabIndex = 131;
			this->label21->Text = L"TVA";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(149, 440);
			this->textBox16->Margin = System::Windows::Forms::Padding(2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(593, 26);
			this->textBox16->TabIndex = 130;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(149, 668);
			this->textBox17->Margin = System::Windows::Forms::Padding(2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(593, 26);
			this->textBox17->TabIndex = 129;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(149, 553);
			this->textBox18->Margin = System::Windows::Forms::Padding(2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(593, 26);
			this->textBox18->TabIndex = 128;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(57, 967);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1730, 272);
			this->dataGridView2->TabIndex = 126;
			// 
			// bunifuThinButton26
			// 
			this->bunifuThinButton26->ActiveBorderThickness = 1;
			this->bunifuThinButton26->ActiveCornerRadius = 20;
			this->bunifuThinButton26->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton26->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton26.BackgroundImage")));
			this->bunifuThinButton26->ButtonText = L"Les 10 articles les moins vendus";
			this->bunifuThinButton26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton26->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton26->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleBorderThickness = 1;
			this->bunifuThinButton26->IdleCornerRadius = 20;
			this->bunifuThinButton26->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton26->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton26->Location = System::Drawing::Point(1154, 496);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(274, 72);
			this->bunifuThinButton26->TabIndex = 172;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 1;
			this->bunifuThinButton27->ActiveCornerRadius = 20;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"Valeur Commercial du Stock";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleBorderThickness = 1;
			this->bunifuThinButton27->IdleCornerRadius = 20;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton27->Location = System::Drawing::Point(1472, 716);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->Size = System::Drawing::Size(274, 72);
			this->bunifuThinButton27->TabIndex = 173;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton28
			// 
			this->bunifuThinButton28->ActiveBorderThickness = 1;
			this->bunifuThinButton28->ActiveCornerRadius = 20;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton28.BackgroundImage")));
			this->bunifuThinButton28->ButtonText = L"Valeur d\'Achat du Stock";
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton28->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleBorderThickness = 1;
			this->bunifuThinButton28->IdleCornerRadius = 20;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton28->Location = System::Drawing::Point(1154, 716);
			this->bunifuThinButton28->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->Size = System::Drawing::Size(274, 72);
			this->bunifuThinButton28->TabIndex = 174;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton29
			// 
			this->bunifuThinButton29->ActiveBorderThickness = 1;
			this->bunifuThinButton29->ActiveCornerRadius = 20;
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton29.BackgroundImage")));
			this->bunifuThinButton29->ButtonText = L"Valeur Commercial (Variations)";
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton29->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleBorderThickness = 1;
			this->bunifuThinButton29->IdleCornerRadius = 20;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton29->Location = System::Drawing::Point(149, 759);
			this->bunifuThinButton29->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->Size = System::Drawing::Size(592, 72);
			this->bunifuThinButton29->TabIndex = 175;
			this->bunifuThinButton29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox_TVAStat
			// 
			this->comboBox_TVAStat->FormattingEnabled = true;
			this->comboBox_TVAStat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox_TVAStat->Location = System::Drawing::Point(149, 329);
			this->comboBox_TVAStat->Name = L"comboBox_TVAStat";
			this->comboBox_TVAStat->Size = System::Drawing::Size(593, 28);
			this->comboBox_TVAStat->TabIndex = 176;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(2451, 1437);
			this->Controls->Add(this->panel_Gestion_Personnel);
			this->Controls->Add(this->panel_Gestion_Stock);
			this->Controls->Add(this->Panel_Gestion_Stat);
			this->Controls->Add(this->Panel_Gestion_Commandes);
			this->Controls->Add(this->Panel_Gestion_Client);
			this->Controls->Add(this->panel_gestion);
			this->Controls->Add(this->Panel_Dashboard);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel_Gestion_Personnel->ResumeLayout(false);
			this->panel_Gestion_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_gestion->ResumeLayout(false);
			this->Panel_Dashboard->ResumeLayout(false);
			this->Panel_Gestion_Client->ResumeLayout(false);
			this->Panel_Gestion_Client->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->EndInit();
			this->Panel_Gestion_Commandes->ResumeLayout(false);
			this->Panel_Gestion_Commandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestcommande))->EndInit();
			this->panel_Gestion_Stock->ResumeLayout(false);
			this->Panel_Gestion_Stat->ResumeLayout(false);
			this->Panel_Gestion_Stat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void Click_Btn_gestion_Personnel(System::Object^ sender, System::EventArgs^ e) {	
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = true;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Clients(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = true;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Commandes(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = true;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Stock(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = true;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Stat(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = true;
			}
			private: System::Void Click_Btn_Exit_DB(System::Object^ sender, System::EventArgs^ e) {
				Application::Exit();
			}
			private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
				this->text_personnel->Clear();
				this->text_nom->Clear();
				choice_superieur->TabIndex =0;
				this->text_pernom->Clear();
				this->text_adresse->Clear();
				this->text_ville->Clear();
				choice_departement->TabIndex = 0;
				this->textBox_code_postal->Clear();
			}
private: System::Void Panel_Dashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel_Gestion_Personnel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_ville_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_Id_perso_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_pernom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_pernom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_Superieur_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void choice_superieur_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_departement_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_departement_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_code_postal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_adresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void select_date_embauche_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_date_embauche_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
}






};
}
