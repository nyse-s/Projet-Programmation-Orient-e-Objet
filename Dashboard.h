#pragma once
#include "Svc_gestionClient.h"

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
	private: System::Windows::Forms::Label^ labelpaysadresse;






	private: System::Windows::Forms::Label^ label_adressepersonnel;



	private: System::Windows::Forms::TextBox^ text_adresse;



	private: System::Windows::Forms::Label^ label_Superieur;
	private: System::Windows::Forms::Label^ label_payspersonnel;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
private: Bunifu::Framework::UI::BunifuThinButton2^ btn_enregistrer_Personnel;
private: Bunifu::Framework::UI::BunifuThinButton2^ Btn_Supprimer_Personnel;



private: Bunifu::Framework::UI::BunifuThinButton2^ btn_modifier_Personnel;


private: Bunifu::Framework::UI::BunifuThinButton2^ btn_nouveau_Personnel;





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
private: System::Windows::Forms::Label^ labelvilleadresse;
private: System::Windows::Forms::Label^ labelcodepostaleadresse;









private: System::Windows::Forms::Label^ labeladressepost;


private: System::Windows::Forms::Label^ labelidadresse;
private: System::Windows::Forms::TextBox^ text_adressepostale;
private: System::Windows::Forms::TextBox^ text_paysadresse;




private: System::Windows::Forms::TextBox^ text_villeadresse;




private: System::Windows::Forms::TextBox^ text_codepostaleadresse;

private: System::Windows::Forms::TextBox^ text_idadresse;







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
private: System::Windows::Forms::TextBox^ text_ref_article;

private: System::Windows::Forms::Label^ label_ref_article;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label_Couleur_Article;


private: System::Windows::Forms::TextBox^ text_Taux_TVA_Article;

private: System::Windows::Forms::Label^ label_Taux_TVA;
private: System::Windows::Forms::TextBox^ text_Approvisionnement_Article;


private: System::Windows::Forms::Label^ label_Approvisionnement;



private: System::Windows::Forms::TextBox^ text_Prix_HT;

private: System::Windows::Forms::Label^ label_Prix_HT;

private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label_remise_article;

private: System::Windows::Forms::TextBox^ text_Stock_Article;

private: System::Windows::Forms::Label^ label_stock;

private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label_nom_article;
private: System::Windows::Forms::TextBox^ text_Nature_article;
private: System::Windows::Forms::Label^ label_Nature;
private: Bunifu::Framework::UI::BunifuThinButton2^ btn_enregistrer_Stock;
private: Bunifu::Framework::UI::BunifuThinButton2^ btn_Supprimer_Stock;

private: Bunifu::Framework::UI::BunifuThinButton2^ btn_Modifier_Stock;

private: Bunifu::Framework::UI::BunifuThinButton2^ btn_nouveau_Stock;
private: System::Windows::Forms::TextBox^ Textbox_Message_Stock;
private: System::Windows::Forms::DataGridView^ dataGridView3;





































	private: NS_Svc::Svc_gestionClient^ processusClient;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
private: System::Windows::Forms::ComboBox^ choice_typeadresse;
private: System::Windows::Forms::Label^ label_typeadresse;



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
			this->Btn_Supprimer_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_modifier_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_nouveau_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_enregistrer_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
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
			this->choice_typeadresse = (gcnew System::Windows::Forms::ComboBox());
			this->label_typeadresse = (gcnew System::Windows::Forms::Label());
			this->button1_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_modiffier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_ajouter = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_afficher = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->labelchampclient = (gcnew System::Windows::Forms::Label());
			this->label_adresselivraison = (gcnew System::Windows::Forms::Label());
			this->text1_message = (gcnew System::Windows::Forms::TextBox());
			this->labelpaysadresse = (gcnew System::Windows::Forms::Label());
			this->labelvilleadresse = (gcnew System::Windows::Forms::Label());
			this->labelcodepostaleadresse = (gcnew System::Windows::Forms::Label());
			this->labeladressepost = (gcnew System::Windows::Forms::Label());
			this->labelidadresse = (gcnew System::Windows::Forms::Label());
			this->text_adressepostale = (gcnew System::Windows::Forms::TextBox());
			this->text_paysadresse = (gcnew System::Windows::Forms::TextBox());
			this->text_villeadresse = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostaleadresse = (gcnew System::Windows::Forms::TextBox());
			this->text_idadresse = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Textbox_Message_Stock = (gcnew System::Windows::Forms::TextBox());
			this->btn_Supprimer_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_Modifier_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_nouveau_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_enregistrer_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label_Couleur_Article = (gcnew System::Windows::Forms::Label());
			this->text_Taux_TVA_Article = (gcnew System::Windows::Forms::TextBox());
			this->label_Taux_TVA = (gcnew System::Windows::Forms::Label());
			this->text_Approvisionnement_Article = (gcnew System::Windows::Forms::TextBox());
			this->label_Approvisionnement = (gcnew System::Windows::Forms::Label());
			this->text_Prix_HT = (gcnew System::Windows::Forms::TextBox());
			this->label_Prix_HT = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label_remise_article = (gcnew System::Windows::Forms::Label());
			this->text_Stock_Article = (gcnew System::Windows::Forms::TextBox());
			this->label_stock = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label_nom_article = (gcnew System::Windows::Forms::Label());
			this->text_Nature_article = (gcnew System::Windows::Forms::TextBox());
			this->label_Nature = (gcnew System::Windows::Forms::Label());
			this->text_ref_article = (gcnew System::Windows::Forms::TextBox());
			this->label_ref_article = (gcnew System::Windows::Forms::Label());
			this->title_Gestion_Stock = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Stat = (gcnew System::Windows::Forms::Panel());
			this->comboBox_TVAStat = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton29 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton28 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton27 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton26 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
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
			this->Title_Gestion_Stat = (gcnew System::Windows::Forms::Label());
			this->panel_Gestion_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_gestion->SuspendLayout();
			this->Panel_Dashboard->SuspendLayout();
			this->Panel_Gestion_Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->BeginInit();
			this->Panel_Gestion_Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestcommande))->BeginInit();
			this->panel_Gestion_Stock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
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
			this->Pannel_Titre->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Pannel_Titre->Name = L"Pannel_Titre";
			this->Pannel_Titre->Size = System::Drawing::Size(244, 260);
			this->Pannel_Titre->TabIndex = 0;
			// 
			// panel_Gestion_Personnel
			// 
			this->panel_Gestion_Personnel->Controls->Add(this->text_ville);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_departement);
			this->panel_Gestion_Personnel->Controls->Add(this->Btn_Supprimer_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->btn_modifier_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->btn_nouveau_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->btn_enregistrer_Personnel);
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
			this->panel_Gestion_Personnel->Location = System::Drawing::Point(303, 49);
			this->panel_Gestion_Personnel->Name = L"panel_Gestion_Personnel";
			this->panel_Gestion_Personnel->Size = System::Drawing::Size(1179, 802);
			this->panel_Gestion_Personnel->TabIndex = 2;
			this->panel_Gestion_Personnel->Visible = false;
			this->panel_Gestion_Personnel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel_Gestion_Personnel_Paint);
			// 
			// text_ville
			// 
			this->text_ville->Location = System::Drawing::Point(449, 324);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(121, 20);
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
			this->choice_departement->Location = System::Drawing::Point(594, 324);
			this->choice_departement->Name = L"choice_departement";
			this->choice_departement->Size = System::Drawing::Size(121, 21);
			this->choice_departement->TabIndex = 26;
			// 
			// Btn_Supprimer_Personnel
			// 
			this->Btn_Supprimer_Personnel->ActiveBorderThickness = 1;
			this->Btn_Supprimer_Personnel->ActiveCornerRadius = 20;
			this->Btn_Supprimer_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->Btn_Supprimer_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->Btn_Supprimer_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->Btn_Supprimer_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Supprimer_Personnel.BackgroundImage")));
			this->Btn_Supprimer_Personnel->ButtonText = L"Supprimer";
			this->Btn_Supprimer_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Supprimer_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Supprimer_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->IdleBorderThickness = 1;
			this->Btn_Supprimer_Personnel->IdleCornerRadius = 20;
			this->Btn_Supprimer_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->Btn_Supprimer_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->Location = System::Drawing::Point(661, 435);
			this->Btn_Supprimer_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Btn_Supprimer_Personnel->Name = L"Btn_Supprimer_Personnel";
			this->Btn_Supprimer_Personnel->Size = System::Drawing::Size(133, 81);
			this->Btn_Supprimer_Personnel->TabIndex = 25;
			this->Btn_Supprimer_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_modifier_Personnel
			// 
			this->btn_modifier_Personnel->ActiveBorderThickness = 1;
			this->btn_modifier_Personnel->ActiveCornerRadius = 20;
			this->btn_modifier_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_modifier_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_modifier_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_modifier_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_modifier_Personnel.BackgroundImage")));
			this->btn_modifier_Personnel->ButtonText = L"Modifier";
			this->btn_modifier_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_modifier_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modifier_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->IdleBorderThickness = 1;
			this->btn_modifier_Personnel->IdleCornerRadius = 20;
			this->btn_modifier_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_modifier_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->Location = System::Drawing::Point(502, 435);
			this->btn_modifier_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->btn_modifier_Personnel->Name = L"btn_modifier_Personnel";
			this->btn_modifier_Personnel->Size = System::Drawing::Size(133, 81);
			this->btn_modifier_Personnel->TabIndex = 24;
			this->btn_modifier_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_nouveau_Personnel
			// 
			this->btn_nouveau_Personnel->ActiveBorderThickness = 1;
			this->btn_nouveau_Personnel->ActiveCornerRadius = 20;
			this->btn_nouveau_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_nouveau_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_nouveau_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nouveau_Personnel.BackgroundImage")));
			this->btn_nouveau_Personnel->ButtonText = L"Nouveau";
			this->btn_nouveau_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_nouveau_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_nouveau_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->IdleBorderThickness = 1;
			this->btn_nouveau_Personnel->IdleCornerRadius = 20;
			this->btn_nouveau_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->Location = System::Drawing::Point(338, 435);
			this->btn_nouveau_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->btn_nouveau_Personnel->Name = L"btn_nouveau_Personnel";
			this->btn_nouveau_Personnel->Size = System::Drawing::Size(133, 81);
			this->btn_nouveau_Personnel->TabIndex = 23;
			this->btn_nouveau_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_nouveau_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::btn_nouveau_Click);
			// 
			// btn_enregistrer_Personnel
			// 
			this->btn_enregistrer_Personnel->ActiveBorderThickness = 1;
			this->btn_enregistrer_Personnel->ActiveCornerRadius = 20;
			this->btn_enregistrer_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_enregistrer_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_enregistrer_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_enregistrer_Personnel.BackgroundImage")));
			this->btn_enregistrer_Personnel->ButtonText = L"Enregistrer";
			this->btn_enregistrer_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_enregistrer_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_enregistrer_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->IdleBorderThickness = 1;
			this->btn_enregistrer_Personnel->IdleCornerRadius = 20;
			this->btn_enregistrer_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->Location = System::Drawing::Point(173, 435);
			this->btn_enregistrer_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->btn_enregistrer_Personnel->Name = L"btn_enregistrer_Personnel";
			this->btn_enregistrer_Personnel->Size = System::Drawing::Size(133, 81);
			this->btn_enregistrer_Personnel->TabIndex = 22;
			this->btn_enregistrer_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Id_Personnel,
					this->nom, this->prenom, this->date_embauche, this->Superieur, this->adresse, this->ville, this->pays, this->code_postal
			});
			this->dataGridView1->Location = System::Drawing::Point(155, 536);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(724, 108);
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
			this->label_payspersonnel->Location = System::Drawing::Point(590, 294);
			this->label_payspersonnel->Name = L"label_payspersonnel";
			this->label_payspersonnel->Size = System::Drawing::Size(100, 27);
			this->label_payspersonnel->TabIndex = 20;
			this->label_payspersonnel->Text = L"département";
			// 
			// choice_superieur
			// 
			this->choice_superieur->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"oui", L"non" });
			this->choice_superieur->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choice_superieur->FormattingEnabled = true;
			this->choice_superieur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"oui", L"non" });
			this->choice_superieur->Location = System::Drawing::Point(185, 396);
			this->choice_superieur->Name = L"choice_superieur";
			this->choice_superieur->Size = System::Drawing::Size(121, 21);
			this->choice_superieur->TabIndex = 18;
			// 
			// label_code_postalpersonnel
			// 
			this->label_code_postalpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_code_postalpersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_code_postalpersonnel->Location = System::Drawing::Point(452, 367);
			this->label_code_postalpersonnel->Name = L"label_code_postalpersonnel";
			this->label_code_postalpersonnel->Size = System::Drawing::Size(100, 27);
			this->label_code_postalpersonnel->TabIndex = 17;
			this->label_code_postalpersonnel->Text = L"code postal";
			// 
			// textBox_code_postal
			// 
			this->textBox_code_postal->Location = System::Drawing::Point(449, 398);
			this->textBox_code_postal->Name = L"textBox_code_postal";
			this->textBox_code_postal->Size = System::Drawing::Size(266, 20);
			this->textBox_code_postal->TabIndex = 16;
			// 
			// label_villepersonnel
			// 
			this->label_villepersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_villepersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_villepersonnel->Location = System::Drawing::Point(445, 294);
			this->label_villepersonnel->Name = L"label_villepersonnel";
			this->label_villepersonnel->Size = System::Drawing::Size(100, 27);
			this->label_villepersonnel->TabIndex = 15;
			this->label_villepersonnel->Text = L"ville";
			// 
			// label_adressepersonnel
			// 
			this->label_adressepersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adressepersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_adressepersonnel->Location = System::Drawing::Point(445, 237);
			this->label_adressepersonnel->Name = L"label_adressepersonnel";
			this->label_adressepersonnel->Size = System::Drawing::Size(100, 27);
			this->label_adressepersonnel->TabIndex = 13;
			this->label_adressepersonnel->Text = L"adresse";
			// 
			// text_adresse
			// 
			this->text_adresse->Location = System::Drawing::Point(449, 266);
			this->text_adresse->Name = L"text_adresse";
			this->text_adresse->Size = System::Drawing::Size(266, 20);
			this->text_adresse->TabIndex = 12;
			// 
			// label_Superieur
			// 
			this->label_Superieur->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Superieur->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Superieur->Location = System::Drawing::Point(181, 367);
			this->label_Superieur->Name = L"label_Superieur";
			this->label_Superieur->Size = System::Drawing::Size(100, 27);
			this->label_Superieur->TabIndex = 11;
			this->label_Superieur->Text = L"Superieur";
			// 
			// select_date_embauche
			// 
			this->select_date_embauche->Location = System::Drawing::Point(449, 201);
			this->select_date_embauche->Name = L"select_date_embauche";
			this->select_date_embauche->Size = System::Drawing::Size(170, 20);
			this->select_date_embauche->TabIndex = 9;
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_date_embauche->Location = System::Drawing::Point(445, 169);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(138, 27);
			this->label_date_embauche->TabIndex = 8;
			this->label_date_embauche->Text = L"date d\'embauche";
			// 
			// label_prenompersonnel
			// 
			this->label_prenompersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenompersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_prenompersonnel->Location = System::Drawing::Point(181, 300);
			this->label_prenompersonnel->Name = L"label_prenompersonnel";
			this->label_prenompersonnel->Size = System::Drawing::Size(100, 27);
			this->label_prenompersonnel->TabIndex = 6;
			this->label_prenompersonnel->Text = L"prenom";
			// 
			// text_pernom
			// 
			this->text_pernom->Location = System::Drawing::Point(185, 330);
			this->text_pernom->Name = L"text_pernom";
			this->text_pernom->Size = System::Drawing::Size(134, 20);
			this->text_pernom->TabIndex = 5;
			// 
			// label_nompersonnel
			// 
			this->label_nompersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nompersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_nompersonnel->Location = System::Drawing::Point(181, 237);
			this->label_nompersonnel->Name = L"label_nompersonnel";
			this->label_nompersonnel->Size = System::Drawing::Size(100, 27);
			this->label_nompersonnel->TabIndex = 4;
			this->label_nompersonnel->Text = L"nom";
			// 
			// text_nom
			// 
			this->text_nom->Location = System::Drawing::Point(185, 266);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(134, 20);
			this->text_nom->TabIndex = 3;
			// 
			// Label_Id_perso
			// 
			this->Label_Id_perso->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Id_perso->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Label_Id_perso->Location = System::Drawing::Point(181, 172);
			this->Label_Id_perso->Name = L"Label_Id_perso";
			this->Label_Id_perso->Size = System::Drawing::Size(100, 27);
			this->Label_Id_perso->TabIndex = 2;
			this->Label_Id_perso->Text = L"Id Personnel";
			// 
			// text_personnel
			// 
			this->text_personnel->Location = System::Drawing::Point(185, 201);
			this->text_personnel->Name = L"text_personnel";
			this->text_personnel->Size = System::Drawing::Size(134, 20);
			this->text_personnel->TabIndex = 1;
			// 
			// Title_Gestion_Personel
			// 
			this->Title_Gestion_Personel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Personel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Personel->Location = System::Drawing::Point(247, 41);
			this->Title_Gestion_Personel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Title_Gestion_Personel->Name = L"Title_Gestion_Personel";
			this->Title_Gestion_Personel->Size = System::Drawing::Size(637, 84);
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
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 260);
			this->Btn_Gestion_Personnel->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Btn_Gestion_Personnel->Name = L"Btn_Gestion_Personnel";
			this->Btn_Gestion_Personnel->Size = System::Drawing::Size(244, 68);
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
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 328);
			this->Btn_Gestion_clients->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Btn_Gestion_clients->Name = L"Btn_Gestion_clients";
			this->Btn_Gestion_clients->Size = System::Drawing::Size(244, 68);
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
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 396);
			this->btn_Gestion_commandes->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btn_Gestion_commandes->Name = L"btn_Gestion_commandes";
			this->btn_Gestion_commandes->Size = System::Drawing::Size(244, 68);
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
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 464);
			this->Btn_Gestion_stock->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Btn_Gestion_stock->Name = L"Btn_Gestion_stock";
			this->Btn_Gestion_stock->Size = System::Drawing::Size(244, 68);
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
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 532);
			this->Btn_Gestion_stat->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Btn_Gestion_stat->Name = L"Btn_Gestion_stat";
			this->Btn_Gestion_stat->Size = System::Drawing::Size(244, 68);
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
			this->Btn_Exit_DB->Location = System::Drawing::Point(0, 600);
			this->Btn_Exit_DB->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Btn_Exit_DB->Name = L"Btn_Exit_DB";
			this->Btn_Exit_DB->Size = System::Drawing::Size(244, 68);
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
			this->panel_gestion->Name = L"panel_gestion";
			this->panel_gestion->Size = System::Drawing::Size(244, 690);
			this->panel_gestion->TabIndex = 0;
			// 
			// Panel_Dashboard
			// 
			this->Panel_Dashboard->Controls->Add(this->Title_Dashboard);
			this->Panel_Dashboard->Enabled = false;
			this->Panel_Dashboard->Location = System::Drawing::Point(683, 18);
			this->Panel_Dashboard->Name = L"Panel_Dashboard";
			this->Panel_Dashboard->Size = System::Drawing::Size(355, 772);
			this->Panel_Dashboard->TabIndex = 1;
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Dashboard->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Dashboard->Location = System::Drawing::Point(-9, 24);
			this->Title_Dashboard->Name = L"Title_Dashboard";
			this->Title_Dashboard->Size = System::Drawing::Size(378, 110);
			this->Title_Dashboard->TabIndex = 0;
			this->Title_Dashboard->Text = L"Dashboard";
			this->Title_Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panel_Gestion_Client
			// 
			this->Panel_Gestion_Client->Controls->Add(this->choice_typeadresse);
			this->Panel_Gestion_Client->Controls->Add(this->label_typeadresse);
			this->Panel_Gestion_Client->Controls->Add(this->button1_nouveau);
			this->Panel_Gestion_Client->Controls->Add(this->button1_supprimer);
			this->Panel_Gestion_Client->Controls->Add(this->button1_modiffier);
			this->Panel_Gestion_Client->Controls->Add(this->button1_ajouter);
			this->Panel_Gestion_Client->Controls->Add(this->button1_afficher);
			this->Panel_Gestion_Client->Controls->Add(this->labelchampclient);
			this->Panel_Gestion_Client->Controls->Add(this->label_adresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text1_message);
			this->Panel_Gestion_Client->Controls->Add(this->labelpaysadresse);
			this->Panel_Gestion_Client->Controls->Add(this->labelvilleadresse);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostaleadresse);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepost);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadresse);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostale);
			this->Panel_Gestion_Client->Controls->Add(this->text_paysadresse);
			this->Panel_Gestion_Client->Controls->Add(this->text_villeadresse);
			this->Panel_Gestion_Client->Controls->Add(this->text_codepostaleadresse);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadresse);
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
			this->Panel_Gestion_Client->Location = System::Drawing::Point(293, 44);
			this->Panel_Gestion_Client->Name = L"Panel_Gestion_Client";
			this->Panel_Gestion_Client->Size = System::Drawing::Size(1202, 815);
			this->Panel_Gestion_Client->TabIndex = 3;
			this->Panel_Gestion_Client->Visible = false;
			this->Panel_Gestion_Client->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Gestion_Client_Paint);
			// 
			// choice_typeadresse
			// 
			this->choice_typeadresse->FormattingEnabled = true;
			this->choice_typeadresse->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Facturation", L"Livraison" });
			this->choice_typeadresse->Location = System::Drawing::Point(722, 226);
			this->choice_typeadresse->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->choice_typeadresse->Name = L"choice_typeadresse";
			this->choice_typeadresse->Size = System::Drawing::Size(116, 21);
			this->choice_typeadresse->TabIndex = 125;
			// 
			// label_typeadresse
			// 
			this->label_typeadresse->AutoSize = true;
			this->label_typeadresse->BackColor = System::Drawing::Color::Transparent;
			this->label_typeadresse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_typeadresse->ForeColor = System::Drawing::Color::White;
			this->label_typeadresse->Location = System::Drawing::Point(719, 205);
			this->label_typeadresse->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_typeadresse->Name = L"label_typeadresse";
			this->label_typeadresse->Size = System::Drawing::Size(100, 19);
			this->label_typeadresse->TabIndex = 124;
			this->label_typeadresse->Text = L"Type d\'Adresse";
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
			this->button1_nouveau->Location = System::Drawing::Point(957, 508);
			this->button1_nouveau->Name = L"button1_nouveau";
			this->button1_nouveau->Size = System::Drawing::Size(182, 47);
			this->button1_nouveau->TabIndex = 122;
			this->button1_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button1_nouveau->Click += gcnew System::EventHandler(this, &Dashboard::button1_nouveau_Click);
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
			this->button1_supprimer->Location = System::Drawing::Point(731, 508);
			this->button1_supprimer->Name = L"button1_supprimer";
			this->button1_supprimer->Size = System::Drawing::Size(182, 47);
			this->button1_supprimer->TabIndex = 53;
			this->button1_supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button1_supprimer->Click += gcnew System::EventHandler(this, &Dashboard::button1_supprimer_Click);
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
			this->button1_modiffier->Location = System::Drawing::Point(503, 508);
			this->button1_modiffier->Name = L"button1_modiffier";
			this->button1_modiffier->Size = System::Drawing::Size(183, 47);
			this->button1_modiffier->TabIndex = 52;
			this->button1_modiffier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button1_modiffier->Click += gcnew System::EventHandler(this, &Dashboard::button1_modiffier_Click);
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
			this->button1_ajouter->Location = System::Drawing::Point(277, 508);
			this->button1_ajouter->Name = L"button1_ajouter";
			this->button1_ajouter->Size = System::Drawing::Size(183, 47);
			this->button1_ajouter->TabIndex = 51;
			this->button1_ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button1_ajouter->Click += gcnew System::EventHandler(this, &Dashboard::button1_ajouter_Click);
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
			this->button1_afficher->Location = System::Drawing::Point(49, 508);
			this->button1_afficher->Name = L"button1_afficher";
			this->button1_afficher->Size = System::Drawing::Size(181, 47);
			this->button1_afficher->TabIndex = 50;
			this->button1_afficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button1_afficher->Click += gcnew System::EventHandler(this, &Dashboard::button1_afficher_Click);
			// 
			// labelchampclient
			// 
			this->labelchampclient->AutoSize = true;
			this->labelchampclient->BackColor = System::Drawing::Color::Transparent;
			this->labelchampclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->labelchampclient->ForeColor = System::Drawing::Color::White;
			this->labelchampclient->Location = System::Drawing::Point(107, 153);
			this->labelchampclient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelchampclient->Name = L"labelchampclient";
			this->labelchampclient->Size = System::Drawing::Size(187, 21);
			this->labelchampclient->TabIndex = 39;
			this->labelchampclient->Text = L"Informations générales";
			// 
			// label_adresselivraison
			// 
			this->label_adresselivraison->AutoSize = true;
			this->label_adresselivraison->BackColor = System::Drawing::Color::Transparent;
			this->label_adresselivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_adresselivraison->ForeColor = System::Drawing::Color::White;
			this->label_adresselivraison->Location = System::Drawing::Point(526, 153);
			this->label_adresselivraison->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_adresselivraison->Name = L"label_adresselivraison";
			this->label_adresselivraison->Size = System::Drawing::Size(73, 21);
			this->label_adresselivraison->TabIndex = 37;
			this->label_adresselivraison->Text = L"Adresse ";
			// 
			// text1_message
			// 
			this->text1_message->Location = System::Drawing::Point(9, 565);
			this->text1_message->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text1_message->Multiline = true;
			this->text1_message->Name = L"text1_message";
			this->text1_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text1_message->Size = System::Drawing::Size(1159, 39);
			this->text1_message->TabIndex = 36;
			// 
			// labelpaysadresse
			// 
			this->labelpaysadresse->AutoSize = true;
			this->labelpaysadresse->BackColor = System::Drawing::Color::Transparent;
			this->labelpaysadresse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpaysadresse->ForeColor = System::Drawing::Color::White;
			this->labelpaysadresse->Location = System::Drawing::Point(532, 420);
			this->labelpaysadresse->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelpaysadresse->Name = L"labelpaysadresse";
			this->labelpaysadresse->Size = System::Drawing::Size(37, 19);
			this->labelpaysadresse->TabIndex = 24;
			this->labelpaysadresse->Text = L"Pays";
			// 
			// labelvilleadresse
			// 
			this->labelvilleadresse->AutoSize = true;
			this->labelvilleadresse->BackColor = System::Drawing::Color::Transparent;
			this->labelvilleadresse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvilleadresse->ForeColor = System::Drawing::Color::White;
			this->labelvilleadresse->Location = System::Drawing::Point(532, 372);
			this->labelvilleadresse->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelvilleadresse->Name = L"labelvilleadresse";
			this->labelvilleadresse->Size = System::Drawing::Size(34, 19);
			this->labelvilleadresse->TabIndex = 23;
			this->labelvilleadresse->Text = L"Ville";
			// 
			// labelcodepostaleadresse
			// 
			this->labelcodepostaleadresse->AutoSize = true;
			this->labelcodepostaleadresse->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostaleadresse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostaleadresse->ForeColor = System::Drawing::Color::White;
			this->labelcodepostaleadresse->Location = System::Drawing::Point(532, 316);
			this->labelcodepostaleadresse->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelcodepostaleadresse->Name = L"labelcodepostaleadresse";
			this->labelcodepostaleadresse->Size = System::Drawing::Size(88, 19);
			this->labelcodepostaleadresse->TabIndex = 22;
			this->labelcodepostaleadresse->Text = L"Code Postale";
			// 
			// labeladressepost
			// 
			this->labeladressepost->AutoSize = true;
			this->labeladressepost->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepost->ForeColor = System::Drawing::Color::White;
			this->labeladressepost->Location = System::Drawing::Point(532, 263);
			this->labeladressepost->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labeladressepost->Name = L"labeladressepost";
			this->labeladressepost->Size = System::Drawing::Size(104, 19);
			this->labeladressepost->TabIndex = 21;
			this->labeladressepost->Text = L"Adresse Postale";
			// 
			// labelidadresse
			// 
			this->labelidadresse->AutoSize = true;
			this->labelidadresse->BackColor = System::Drawing::Color::Transparent;
			this->labelidadresse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadresse->ForeColor = System::Drawing::Color::White;
			this->labelidadresse->Location = System::Drawing::Point(532, 206);
			this->labelidadresse->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelidadresse->Name = L"labelidadresse";
			this->labelidadresse->Size = System::Drawing::Size(75, 19);
			this->labelidadresse->TabIndex = 20;
			this->labelidadresse->Text = L"ID Adresse";
			// 
			// text_adressepostale
			// 
			this->text_adressepostale->Location = System::Drawing::Point(530, 282);
			this->text_adressepostale->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_adressepostale->Name = L"text_adressepostale";
			this->text_adressepostale->Size = System::Drawing::Size(151, 20);
			this->text_adressepostale->TabIndex = 19;
			// 
			// text_paysadresse
			// 
			this->text_paysadresse->Location = System::Drawing::Point(530, 439);
			this->text_paysadresse->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_paysadresse->Name = L"text_paysadresse";
			this->text_paysadresse->Size = System::Drawing::Size(151, 20);
			this->text_paysadresse->TabIndex = 18;
			// 
			// text_villeadresse
			// 
			this->text_villeadresse->Location = System::Drawing::Point(530, 391);
			this->text_villeadresse->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_villeadresse->Name = L"text_villeadresse";
			this->text_villeadresse->Size = System::Drawing::Size(151, 20);
			this->text_villeadresse->TabIndex = 17;
			// 
			// text_codepostaleadresse
			// 
			this->text_codepostaleadresse->Location = System::Drawing::Point(530, 335);
			this->text_codepostaleadresse->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_codepostaleadresse->Name = L"text_codepostaleadresse";
			this->text_codepostaleadresse->Size = System::Drawing::Size(151, 20);
			this->text_codepostaleadresse->TabIndex = 16;
			// 
			// text_idadresse
			// 
			this->text_idadresse->Location = System::Drawing::Point(530, 226);
			this->text_idadresse->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idadresse->Name = L"text_idadresse";
			this->text_idadresse->Size = System::Drawing::Size(151, 20);
			this->text_idadresse->TabIndex = 15;
			// 
			// labeldatenaissance
			// 
			this->labeldatenaissance->AutoSize = true;
			this->labeldatenaissance->BackColor = System::Drawing::Color::Transparent;
			this->labeldatenaissance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldatenaissance->ForeColor = System::Drawing::Color::White;
			this->labeldatenaissance->Location = System::Drawing::Point(112, 369);
			this->labeldatenaissance->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labeldatenaissance->Name = L"labeldatenaissance";
			this->labeldatenaissance->Size = System::Drawing::Size(212, 19);
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
			this->labelprenomclient->Location = System::Drawing::Point(112, 316);
			this->labelprenomclient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelprenomclient->Name = L"labelprenomclient";
			this->labelprenomclient->Size = System::Drawing::Size(57, 19);
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
			this->labelnomclient->Location = System::Drawing::Point(112, 263);
			this->labelnomclient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelnomclient->Name = L"labelnomclient";
			this->labelnomclient->Size = System::Drawing::Size(39, 19);
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
			this->labelidclient->Location = System::Drawing::Point(112, 206);
			this->labelidclient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelidclient->Name = L"labelidclient";
			this->labelidclient->Size = System::Drawing::Size(62, 19);
			this->labelidclient->TabIndex = 10;
			this->labelidclient->Text = L"ID Client";
			// 
			// text_nomclient
			// 
			this->text_nomclient->Location = System::Drawing::Point(111, 282);
			this->text_nomclient->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_nomclient->Name = L"text_nomclient";
			this->text_nomclient->Size = System::Drawing::Size(151, 20);
			this->text_nomclient->TabIndex = 9;
			// 
			// text_datenaissance
			// 
			this->text_datenaissance->Location = System::Drawing::Point(111, 391);
			this->text_datenaissance->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_datenaissance->Name = L"text_datenaissance";
			this->text_datenaissance->Size = System::Drawing::Size(151, 20);
			this->text_datenaissance->TabIndex = 7;
			// 
			// text_prenomclient
			// 
			this->text_prenomclient->Location = System::Drawing::Point(111, 335);
			this->text_prenomclient->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_prenomclient->Name = L"text_prenomclient";
			this->text_prenomclient->Size = System::Drawing::Size(151, 20);
			this->text_prenomclient->TabIndex = 6;
			// 
			// text_idclient
			// 
			this->text_idclient->Location = System::Drawing::Point(111, 226);
			this->text_idclient->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idclient->Name = L"text_idclient";
			this->text_idclient->Size = System::Drawing::Size(151, 20);
			this->text_idclient->TabIndex = 5;
			// 
			// dataGridView_gestclient
			// 
			this->dataGridView_gestclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestclient->Location = System::Drawing::Point(9, 624);
			this->dataGridView_gestclient->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dataGridView_gestclient->Name = L"dataGridView_gestclient";
			this->dataGridView_gestclient->ReadOnly = true;
			this->dataGridView_gestclient->RowHeadersWidth = 62;
			this->dataGridView_gestclient->RowTemplate->Height = 28;
			this->dataGridView_gestclient->Size = System::Drawing::Size(1153, 182);
			this->dataGridView_gestclient->TabIndex = 1;
			// 
			// Title_gestion_clients
			// 
			this->Title_gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_gestion_clients->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_gestion_clients->Location = System::Drawing::Point(442, 32);
			this->Title_gestion_clients->Name = L"Title_gestion_clients";
			this->Title_gestion_clients->Size = System::Drawing::Size(326, 86);
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
			this->Panel_Gestion_Commandes->Location = System::Drawing::Point(1391, 35);
			this->Panel_Gestion_Commandes->Name = L"Panel_Gestion_Commandes";
			this->Panel_Gestion_Commandes->Size = System::Drawing::Size(109, 842);
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
			this->label_idadfactcommande->Location = System::Drawing::Point(333, 270);
			this->label_idadfactcommande->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_idadfactcommande->Name = L"label_idadfactcommande";
			this->label_idadfactcommande->Size = System::Drawing::Size(145, 19);
			this->label_idadfactcommande->TabIndex = 125;
			this->label_idadfactcommande->Text = L"ID Adresse facturation";
			// 
			// text_idadfactcommande
			// 
			this->text_idadfactcommande->Location = System::Drawing::Point(336, 289);
			this->text_idadfactcommande->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idadfactcommande->Name = L"text_idadfactcommande";
			this->text_idadfactcommande->Size = System::Drawing::Size(132, 20);
			this->text_idadfactcommande->TabIndex = 124;
			// 
			// label_idadlivcommande
			// 
			this->label_idadlivcommande->AutoSize = true;
			this->label_idadlivcommande->BackColor = System::Drawing::Color::Transparent;
			this->label_idadlivcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadlivcommande->ForeColor = System::Drawing::Color::White;
			this->label_idadlivcommande->Location = System::Drawing::Point(192, 270);
			this->label_idadlivcommande->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_idadlivcommande->Name = L"label_idadlivcommande";
			this->label_idadlivcommande->Size = System::Drawing::Size(129, 19);
			this->label_idadlivcommande->TabIndex = 123;
			this->label_idadlivcommande->Text = L"ID Adresse livraison";
			// 
			// text_idadlivcommande
			// 
			this->text_idadlivcommande->Location = System::Drawing::Point(195, 289);
			this->text_idadlivcommande->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idadlivcommande->Name = L"text_idadlivcommande";
			this->text_idadlivcommande->Size = System::Drawing::Size(119, 20);
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
			this->button2_nouveau->Location = System::Drawing::Point(965, 497);
			this->button2_nouveau->Name = L"button2_nouveau";
			this->button2_nouveau->Size = System::Drawing::Size(182, 47);
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
			this->label_payssociete->Location = System::Drawing::Point(1010, 416);
			this->label_payssociete->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_payssociete->Name = L"label_payssociete";
			this->label_payssociete->Size = System::Drawing::Size(37, 19);
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
			this->label_codepostsociete->Location = System::Drawing::Point(879, 417);
			this->label_codepostsociete->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_codepostsociete->Name = L"label_codepostsociete";
			this->label_codepostsociete->Size = System::Drawing::Size(88, 19);
			this->label_codepostsociete->TabIndex = 119;
			this->label_codepostsociete->Text = L"Code Postale";
			// 
			// text_payssociete
			// 
			this->text_payssociete->Location = System::Drawing::Point(1013, 435);
			this->text_payssociete->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_payssociete->Name = L"text_payssociete";
			this->text_payssociete->Size = System::Drawing::Size(75, 20);
			this->text_payssociete->TabIndex = 118;
			// 
			// text_codepostsociete
			// 
			this->text_codepostsociete->Location = System::Drawing::Point(882, 437);
			this->text_codepostsociete->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_codepostsociete->Name = L"text_codepostsociete";
			this->text_codepostsociete->Size = System::Drawing::Size(115, 20);
			this->text_codepostsociete->TabIndex = 117;
			// 
			// label_villesociete
			// 
			this->label_villesociete->AutoSize = true;
			this->label_villesociete->BackColor = System::Drawing::Color::Transparent;
			this->label_villesociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_villesociete->ForeColor = System::Drawing::Color::White;
			this->label_villesociete->Location = System::Drawing::Point(1010, 360);
			this->label_villesociete->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_villesociete->Name = L"label_villesociete";
			this->label_villesociete->Size = System::Drawing::Size(34, 19);
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
			this->label_adressepostsociete->Location = System::Drawing::Point(879, 361);
			this->label_adressepostsociete->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_adressepostsociete->Name = L"label_adressepostsociete";
			this->label_adressepostsociete->Size = System::Drawing::Size(104, 19);
			this->label_adressepostsociete->TabIndex = 115;
			this->label_adressepostsociete->Text = L"Adresse Postale";
			// 
			// text_villesociete
			// 
			this->text_villesociete->Location = System::Drawing::Point(1013, 380);
			this->text_villesociete->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_villesociete->Name = L"text_villesociete";
			this->text_villesociete->Size = System::Drawing::Size(75, 20);
			this->text_villesociete->TabIndex = 114;
			// 
			// text_adressepostsociete
			// 
			this->text_adressepostsociete->Location = System::Drawing::Point(882, 381);
			this->text_adressepostsociete->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_adressepostsociete->Name = L"text_adressepostsociete";
			this->text_adressepostsociete->Size = System::Drawing::Size(115, 20);
			this->text_adressepostsociete->TabIndex = 113;
			// 
			// label_datepaiement
			// 
			this->label_datepaiement->AutoSize = true;
			this->label_datepaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_datepaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_datepaiement->ForeColor = System::Drawing::Color::White;
			this->label_datepaiement->Location = System::Drawing::Point(564, 345);
			this->label_datepaiement->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_datepaiement->Name = L"label_datepaiement";
			this->label_datepaiement->Size = System::Drawing::Size(211, 19);
			this->label_datepaiement->TabIndex = 112;
			this->label_datepaiement->Text = L"Date de paiement (JJ/MM/AAAA)\r\n";
			// 
			// text_datepaiement
			// 
			this->text_datepaiement->Location = System::Drawing::Point(567, 365);
			this->text_datepaiement->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_datepaiement->Name = L"text_datepaiement";
			this->text_datepaiement->Size = System::Drawing::Size(193, 20);
			this->text_datepaiement->TabIndex = 111;
			// 
			// label2_paiementcommande
			// 
			this->label2_paiementcommande->AutoSize = true;
			this->label2_paiementcommande->BackColor = System::Drawing::Color::Transparent;
			this->label2_paiementcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2_paiementcommande->ForeColor = System::Drawing::Color::White;
			this->label2_paiementcommande->Location = System::Drawing::Point(563, 145);
			this->label2_paiementcommande->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2_paiementcommande->Name = L"label2_paiementcommande";
			this->label2_paiementcommande->Size = System::Drawing::Size(186, 21);
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
			this->label_mypaiement->Location = System::Drawing::Point(564, 271);
			this->label_mypaiement->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_mypaiement->Name = L"label_mypaiement";
			this->label_mypaiement->Size = System::Drawing::Size(132, 19);
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
			this->label_nbpaiement->Location = System::Drawing::Point(564, 200);
			this->label_nbpaiement->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_nbpaiement->Name = L"label_nbpaiement";
			this->label_nbpaiement->Size = System::Drawing::Size(145, 19);
			this->label_nbpaiement->TabIndex = 105;
			this->label_nbpaiement->Text = L"Nombre de paiements";
			// 
			// text_mypaiement
			// 
			this->text_mypaiement->Location = System::Drawing::Point(567, 291);
			this->text_mypaiement->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_mypaiement->Name = L"text_mypaiement";
			this->text_mypaiement->Size = System::Drawing::Size(193, 20);
			this->text_mypaiement->TabIndex = 104;
			// 
			// text_nbpaiement
			// 
			this->text_nbpaiement->Location = System::Drawing::Point(567, 219);
			this->text_nbpaiement->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_nbpaiement->Name = L"text_nbpaiement";
			this->text_nbpaiement->Size = System::Drawing::Size(193, 20);
			this->text_nbpaiement->TabIndex = 100;
			// 
			// label_dateemission
			// 
			this->label_dateemission->AutoSize = true;
			this->label_dateemission->BackColor = System::Drawing::Color::Transparent;
			this->label_dateemission->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_dateemission->ForeColor = System::Drawing::Color::White;
			this->label_dateemission->Location = System::Drawing::Point(273, 417);
			this->label_dateemission->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_dateemission->Name = L"label_dateemission";
			this->label_dateemission->Size = System::Drawing::Size(199, 19);
			this->label_dateemission->TabIndex = 99;
			this->label_dateemission->Text = L"Date d\'émission (JJ/MM/AAAA)\r\n";
			// 
			// text_dateemission
			// 
			this->text_dateemission->Location = System::Drawing::Point(276, 437);
			this->text_dateemission->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_dateemission->Name = L"text_dateemission";
			this->text_dateemission->Size = System::Drawing::Size(193, 20);
			this->text_dateemission->TabIndex = 98;
			// 
			// label_montanttotTTC
			// 
			this->label_montanttotTTC->AutoSize = true;
			this->label_montanttotTTC->BackColor = System::Drawing::Color::Transparent;
			this->label_montanttotTTC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_montanttotTTC->ForeColor = System::Drawing::Color::White;
			this->label_montanttotTTC->Location = System::Drawing::Point(353, 343);
			this->label_montanttotTTC->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_montanttotTTC->Name = L"label_montanttotTTC";
			this->label_montanttotTTC->Size = System::Drawing::Size(121, 19);
			this->label_montanttotTTC->TabIndex = 97;
			this->label_montanttotTTC->Text = L"Montant total TTC";
			// 
			// text_montanttotTTC
			// 
			this->text_montanttotTTC->Location = System::Drawing::Point(357, 363);
			this->text_montanttotTTC->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_montanttotTTC->Name = L"text_montanttotTTC";
			this->text_montanttotTTC->Size = System::Drawing::Size(111, 20);
			this->text_montanttotTTC->TabIndex = 96;
			// 
			// label_montanttotTVA
			// 
			this->label_montanttotTVA->AutoSize = true;
			this->label_montanttotTVA->BackColor = System::Drawing::Color::Transparent;
			this->label_montanttotTVA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_montanttotTVA->ForeColor = System::Drawing::Color::White;
			this->label_montanttotTVA->Location = System::Drawing::Point(213, 343);
			this->label_montanttotTVA->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_montanttotTVA->Name = L"label_montanttotTVA";
			this->label_montanttotTVA->Size = System::Drawing::Size(123, 19);
			this->label_montanttotTVA->TabIndex = 95;
			this->label_montanttotTVA->Text = L"Montant total TVA";
			// 
			// text_montanttotTVA
			// 
			this->text_montanttotTVA->Location = System::Drawing::Point(216, 363);
			this->text_montanttotTVA->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_montanttotTVA->Name = L"text_montanttotTVA";
			this->text_montanttotTVA->Size = System::Drawing::Size(111, 20);
			this->text_montanttotTVA->TabIndex = 94;
			// 
			// label2_informationsgen
			// 
			this->label2_informationsgen->AutoSize = true;
			this->label2_informationsgen->BackColor = System::Drawing::Color::Transparent;
			this->label2_informationsgen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2_informationsgen->ForeColor = System::Drawing::Color::White;
			this->label2_informationsgen->Location = System::Drawing::Point(48, 145);
			this->label2_informationsgen->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2_informationsgen->Name = L"label2_informationsgen";
			this->label2_informationsgen->Size = System::Drawing::Size(187, 21);
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
			this->button2_supprimer->Location = System::Drawing::Point(730, 497);
			this->button2_supprimer->Name = L"button2_supprimer";
			this->button2_supprimer->Size = System::Drawing::Size(182, 47);
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
			this->button2_modifier->Location = System::Drawing::Point(502, 497);
			this->button2_modifier->Name = L"button2_modifier";
			this->button2_modifier->Size = System::Drawing::Size(183, 47);
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
			this->button2_ajouter->Location = System::Drawing::Point(276, 497);
			this->button2_ajouter->Name = L"button2_ajouter";
			this->button2_ajouter->Size = System::Drawing::Size(183, 47);
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
			this->button2_afficher->Location = System::Drawing::Point(49, 497);
			this->button2_afficher->Name = L"button2_afficher";
			this->button2_afficher->Size = System::Drawing::Size(181, 47);
			this->button2_afficher->TabIndex = 89;
			this->button2_afficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_infofact
			// 
			this->label_infofact->AutoSize = true;
			this->label_infofact->BackColor = System::Drawing::Color::Transparent;
			this->label_infofact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_infofact->ForeColor = System::Drawing::Color::White;
			this->label_infofact->Location = System::Drawing::Point(873, 145);
			this->label_infofact->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_infofact->Name = L"label_infofact";
			this->label_infofact->Size = System::Drawing::Size(200, 21);
			this->label_infofact->TabIndex = 76;
			this->label_infofact->Text = L"Informations Facturation";
			// 
			// text_messagecommande
			// 
			this->text_messagecommande->Location = System::Drawing::Point(10, 555);
			this->text_messagecommande->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_messagecommande->Multiline = true;
			this->text_messagecommande->Name = L"text_messagecommande";
			this->text_messagecommande->ReadOnly = true;
			this->text_messagecommande->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text_messagecommande->Size = System::Drawing::Size(1147, 39);
			this->text_messagecommande->TabIndex = 75;
			// 
			// label_soldereglement
			// 
			this->label_soldereglement->AutoSize = true;
			this->label_soldereglement->BackColor = System::Drawing::Color::Transparent;
			this->label_soldereglement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_soldereglement->ForeColor = System::Drawing::Color::White;
			this->label_soldereglement->Location = System::Drawing::Point(564, 417);
			this->label_soldereglement->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_soldereglement->Name = L"label_soldereglement";
			this->label_soldereglement->Size = System::Drawing::Size(127, 19);
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
			this->label_idadressesociete->Location = System::Drawing::Point(1010, 306);
			this->label_idadressesociete->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_idadressesociete->Name = L"label_idadressesociete";
			this->label_idadressesociete->Size = System::Drawing::Size(75, 19);
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
			this->label_societe->Location = System::Drawing::Point(879, 307);
			this->label_societe->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_societe->Name = L"label_societe";
			this->label_societe->Size = System::Drawing::Size(52, 19);
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
			this->label_nmservice->Location = System::Drawing::Point(879, 254);
			this->label_nmservice->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_nmservice->Name = L"label_nmservice";
			this->label_nmservice->Size = System::Drawing::Size(159, 19);
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
			this->label_idfacture->Location = System::Drawing::Point(879, 197);
			this->label_idfacture->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_idfacture->Name = L"label_idfacture";
			this->label_idfacture->Size = System::Drawing::Size(72, 19);
			this->label_idfacture->TabIndex = 70;
			this->label_idfacture->Text = L"ID Facture";
			// 
			// text_nmservice
			// 
			this->text_nmservice->Location = System::Drawing::Point(882, 274);
			this->text_nmservice->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_nmservice->Name = L"text_nmservice";
			this->text_nmservice->Size = System::Drawing::Size(206, 20);
			this->text_nmservice->TabIndex = 69;
			// 
			// text_soldereglement
			// 
			this->text_soldereglement->Location = System::Drawing::Point(567, 437);
			this->text_soldereglement->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_soldereglement->Name = L"text_soldereglement";
			this->text_soldereglement->Size = System::Drawing::Size(191, 20);
			this->text_soldereglement->TabIndex = 68;
			// 
			// text_idadressesociete
			// 
			this->text_idadressesociete->Location = System::Drawing::Point(1013, 326);
			this->text_idadressesociete->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idadressesociete->Name = L"text_idadressesociete";
			this->text_idadressesociete->Size = System::Drawing::Size(75, 20);
			this->text_idadressesociete->TabIndex = 67;
			// 
			// text_societe
			// 
			this->text_societe->Location = System::Drawing::Point(882, 327);
			this->text_societe->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_societe->Name = L"text_societe";
			this->text_societe->Size = System::Drawing::Size(115, 20);
			this->text_societe->TabIndex = 66;
			// 
			// text_idfacture
			// 
			this->text_idfacture->Location = System::Drawing::Point(882, 218);
			this->text_idfacture->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idfacture->Name = L"text_idfacture";
			this->text_idfacture->Size = System::Drawing::Size(206, 20);
			this->text_idfacture->TabIndex = 65;
			// 
			// label_datelivraison
			// 
			this->label_datelivraison->AutoSize = true;
			this->label_datelivraison->BackColor = System::Drawing::Color::Transparent;
			this->label_datelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_datelivraison->ForeColor = System::Drawing::Color::White;
			this->label_datelivraison->Location = System::Drawing::Point(68, 417);
			this->label_datelivraison->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_datelivraison->Name = L"label_datelivraison";
			this->label_datelivraison->Size = System::Drawing::Size(204, 19);
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
			this->label_monanttotHT->Location = System::Drawing::Point(68, 343);
			this->label_monanttotHT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_monanttotHT->Name = L"label_monanttotHT";
			this->label_monanttotHT->Size = System::Drawing::Size(116, 19);
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
			this->label2_idclientcommande->Location = System::Drawing::Point(68, 270);
			this->label2_idclientcommande->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2_idclientcommande->Name = L"label2_idclientcommande";
			this->label2_idclientcommande->Size = System::Drawing::Size(62, 19);
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
			this->labelref_commande->Location = System::Drawing::Point(68, 197);
			this->labelref_commande->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelref_commande->Name = L"labelref_commande";
			this->labelref_commande->Size = System::Drawing::Size(173, 19);
			this->labelref_commande->TabIndex = 60;
			this->labelref_commande->Text = L"Référence de la commande";
			// 
			// text_idclientcommande
			// 
			this->text_idclientcommande->Location = System::Drawing::Point(71, 289);
			this->text_idclientcommande->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_idclientcommande->Name = L"text_idclientcommande";
			this->text_idclientcommande->Size = System::Drawing::Size(111, 20);
			this->text_idclientcommande->TabIndex = 59;
			// 
			// text_datelivraison
			// 
			this->text_datelivraison->Location = System::Drawing::Point(71, 437);
			this->text_datelivraison->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_datelivraison->Name = L"text_datelivraison";
			this->text_datelivraison->Size = System::Drawing::Size(193, 20);
			this->text_datelivraison->TabIndex = 57;
			// 
			// text_montanttotHT
			// 
			this->text_montanttotHT->Location = System::Drawing::Point(71, 363);
			this->text_montanttotHT->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_montanttotHT->Name = L"text_montanttotHT";
			this->text_montanttotHT->Size = System::Drawing::Size(111, 20);
			this->text_montanttotHT->TabIndex = 56;
			// 
			// text_refcommande
			// 
			this->text_refcommande->Location = System::Drawing::Point(71, 217);
			this->text_refcommande->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_refcommande->Name = L"text_refcommande";
			this->text_refcommande->Size = System::Drawing::Size(397, 20);
			this->text_refcommande->TabIndex = 55;
			// 
			// dataGridView_gestcommande
			// 
			this->dataGridView_gestcommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestcommande->Location = System::Drawing::Point(10, 614);
			this->dataGridView_gestcommande->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dataGridView_gestcommande->Name = L"dataGridView_gestcommande";
			this->dataGridView_gestcommande->RowHeadersWidth = 62;
			this->dataGridView_gestcommande->RowTemplate->Height = 28;
			this->dataGridView_gestcommande->Size = System::Drawing::Size(1153, 195);
			this->dataGridView_gestcommande->TabIndex = 54;
			// 
			// Title_Gestion_Commandes
			// 
			this->Title_Gestion_Commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Commandes->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Commandes->Location = System::Drawing::Point(437, 45);
			this->Title_Gestion_Commandes->Name = L"Title_Gestion_Commandes";
			this->Title_Gestion_Commandes->Size = System::Drawing::Size(416, 86);
			this->Title_Gestion_Commandes->TabIndex = 0;
			this->Title_Gestion_Commandes->Text = L"Gestion Commandes";
			this->Title_Gestion_Commandes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_Gestion_Stock
			// 
			this->panel_Gestion_Stock->Controls->Add(this->dataGridView3);
			this->panel_Gestion_Stock->Controls->Add(this->Textbox_Message_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_Supprimer_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_Modifier_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_nouveau_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_enregistrer_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->textBox6);
			this->panel_Gestion_Stock->Controls->Add(this->label_Couleur_Article);
			this->panel_Gestion_Stock->Controls->Add(this->text_Taux_TVA_Article);
			this->panel_Gestion_Stock->Controls->Add(this->label_Taux_TVA);
			this->panel_Gestion_Stock->Controls->Add(this->text_Approvisionnement_Article);
			this->panel_Gestion_Stock->Controls->Add(this->label_Approvisionnement);
			this->panel_Gestion_Stock->Controls->Add(this->text_Prix_HT);
			this->panel_Gestion_Stock->Controls->Add(this->label_Prix_HT);
			this->panel_Gestion_Stock->Controls->Add(this->textBox4);
			this->panel_Gestion_Stock->Controls->Add(this->label_remise_article);
			this->panel_Gestion_Stock->Controls->Add(this->text_Stock_Article);
			this->panel_Gestion_Stock->Controls->Add(this->label_stock);
			this->panel_Gestion_Stock->Controls->Add(this->textBox2);
			this->panel_Gestion_Stock->Controls->Add(this->label_nom_article);
			this->panel_Gestion_Stock->Controls->Add(this->text_Nature_article);
			this->panel_Gestion_Stock->Controls->Add(this->label_Nature);
			this->panel_Gestion_Stock->Controls->Add(this->text_ref_article);
			this->panel_Gestion_Stock->Controls->Add(this->label_ref_article);
			this->panel_Gestion_Stock->Controls->Add(this->title_Gestion_Stock);
			this->panel_Gestion_Stock->Location = System::Drawing::Point(1459, 30);
			this->panel_Gestion_Stock->Name = L"panel_Gestion_Stock";
			this->panel_Gestion_Stock->Size = System::Drawing::Size(57, 855);
			this->panel_Gestion_Stock->TabIndex = 0;
			this->panel_Gestion_Stock->Visible = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(23, 635);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->RowTemplate->Height = 28;
			this->dataGridView3->Size = System::Drawing::Size(1153, 195);
			this->dataGridView3->TabIndex = 145;
			// 
			// Textbox_Message_Stock
			// 
			this->Textbox_Message_Stock->Location = System::Drawing::Point(23, 571);
			this->Textbox_Message_Stock->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Textbox_Message_Stock->Multiline = true;
			this->Textbox_Message_Stock->Name = L"Textbox_Message_Stock";
			this->Textbox_Message_Stock->ReadOnly = true;
			this->Textbox_Message_Stock->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Textbox_Message_Stock->Size = System::Drawing::Size(1153, 39);
			this->Textbox_Message_Stock->TabIndex = 144;
			// 
			// btn_Supprimer_Stock
			// 
			this->btn_Supprimer_Stock->ActiveBorderThickness = 1;
			this->btn_Supprimer_Stock->ActiveCornerRadius = 20;
			this->btn_Supprimer_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_Supprimer_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_Supprimer_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_Supprimer_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Supprimer_Stock.BackgroundImage")));
			this->btn_Supprimer_Stock->ButtonText = L"Supprimer";
			this->btn_Supprimer_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Supprimer_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_Supprimer_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->IdleBorderThickness = 1;
			this->btn_Supprimer_Stock->IdleCornerRadius = 20;
			this->btn_Supprimer_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_Supprimer_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->Location = System::Drawing::Point(758, 432);
			this->btn_Supprimer_Stock->Name = L"btn_Supprimer_Stock";
			this->btn_Supprimer_Stock->Size = System::Drawing::Size(133, 81);
			this->btn_Supprimer_Stock->TabIndex = 22;
			this->btn_Supprimer_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_Modifier_Stock
			// 
			this->btn_Modifier_Stock->ActiveBorderThickness = 1;
			this->btn_Modifier_Stock->ActiveCornerRadius = 20;
			this->btn_Modifier_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_Modifier_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_Modifier_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_Modifier_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Modifier_Stock.BackgroundImage")));
			this->btn_Modifier_Stock->ButtonText = L"Modifier";
			this->btn_Modifier_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Modifier_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_Modifier_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->IdleBorderThickness = 1;
			this->btn_Modifier_Stock->IdleCornerRadius = 20;
			this->btn_Modifier_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_Modifier_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->Location = System::Drawing::Point(595, 432);
			this->btn_Modifier_Stock->Name = L"btn_Modifier_Stock";
			this->btn_Modifier_Stock->Size = System::Drawing::Size(133, 81);
			this->btn_Modifier_Stock->TabIndex = 21;
			this->btn_Modifier_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_nouveau_Stock
			// 
			this->btn_nouveau_Stock->ActiveBorderThickness = 1;
			this->btn_nouveau_Stock->ActiveCornerRadius = 20;
			this->btn_nouveau_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_nouveau_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_nouveau_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nouveau_Stock.BackgroundImage")));
			this->btn_nouveau_Stock->ButtonText = L"Nouveau";
			this->btn_nouveau_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_nouveau_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_nouveau_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->IdleBorderThickness = 1;
			this->btn_nouveau_Stock->IdleCornerRadius = 20;
			this->btn_nouveau_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->Location = System::Drawing::Point(433, 432);
			this->btn_nouveau_Stock->Name = L"btn_nouveau_Stock";
			this->btn_nouveau_Stock->Size = System::Drawing::Size(133, 81);
			this->btn_nouveau_Stock->TabIndex = 20;
			this->btn_nouveau_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_enregistrer_Stock
			// 
			this->btn_enregistrer_Stock->ActiveBorderThickness = 1;
			this->btn_enregistrer_Stock->ActiveCornerRadius = 20;
			this->btn_enregistrer_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_enregistrer_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_enregistrer_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_enregistrer_Stock.BackgroundImage")));
			this->btn_enregistrer_Stock->ButtonText = L"Enregistrer";
			this->btn_enregistrer_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_enregistrer_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_enregistrer_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->IdleBorderThickness = 1;
			this->btn_enregistrer_Stock->IdleCornerRadius = 20;
			this->btn_enregistrer_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->Location = System::Drawing::Point(259, 432);
			this->btn_enregistrer_Stock->Name = L"btn_enregistrer_Stock";
			this->btn_enregistrer_Stock->Size = System::Drawing::Size(133, 81);
			this->btn_enregistrer_Stock->TabIndex = 19;
			this->btn_enregistrer_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(715, 384);
			this->textBox6->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(134, 20);
			this->textBox6->TabIndex = 18;
			// 
			// label_Couleur_Article
			// 
			this->label_Couleur_Article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Couleur_Article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Couleur_Article->Location = System::Drawing::Point(713, 352);
			this->label_Couleur_Article->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_Couleur_Article->Name = L"label_Couleur_Article";
			this->label_Couleur_Article->Size = System::Drawing::Size(100, 27);
			this->label_Couleur_Article->TabIndex = 17;
			this->label_Couleur_Article->Text = L"Couleur";
			// 
			// text_Taux_TVA_Article
			// 
			this->text_Taux_TVA_Article->Location = System::Drawing::Point(715, 300);
			this->text_Taux_TVA_Article->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_Taux_TVA_Article->Name = L"text_Taux_TVA_Article";
			this->text_Taux_TVA_Article->Size = System::Drawing::Size(134, 20);
			this->text_Taux_TVA_Article->TabIndex = 16;
			// 
			// label_Taux_TVA
			// 
			this->label_Taux_TVA->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Taux_TVA->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Taux_TVA->Location = System::Drawing::Point(712, 268);
			this->label_Taux_TVA->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_Taux_TVA->Name = L"label_Taux_TVA";
			this->label_Taux_TVA->Size = System::Drawing::Size(100, 27);
			this->label_Taux_TVA->TabIndex = 15;
			this->label_Taux_TVA->Text = L"Taux TVA";
			// 
			// text_Approvisionnement_Article
			// 
			this->text_Approvisionnement_Article->Location = System::Drawing::Point(715, 222);
			this->text_Approvisionnement_Article->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_Approvisionnement_Article->Name = L"text_Approvisionnement_Article";
			this->text_Approvisionnement_Article->Size = System::Drawing::Size(134, 20);
			this->text_Approvisionnement_Article->TabIndex = 14;
			// 
			// label_Approvisionnement
			// 
			this->label_Approvisionnement->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Approvisionnement->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Approvisionnement->Location = System::Drawing::Point(713, 190);
			this->label_Approvisionnement->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_Approvisionnement->Name = L"label_Approvisionnement";
			this->label_Approvisionnement->Size = System::Drawing::Size(154, 27);
			this->label_Approvisionnement->TabIndex = 13;
			this->label_Approvisionnement->Text = L"Approvisionnement";
			// 
			// text_Prix_HT
			// 
			this->text_Prix_HT->Location = System::Drawing::Point(493, 389);
			this->text_Prix_HT->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_Prix_HT->Name = L"text_Prix_HT";
			this->text_Prix_HT->Size = System::Drawing::Size(134, 20);
			this->text_Prix_HT->TabIndex = 12;
			// 
			// label_Prix_HT
			// 
			this->label_Prix_HT->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Prix_HT->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Prix_HT->Location = System::Drawing::Point(491, 357);
			this->label_Prix_HT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_Prix_HT->Name = L"label_Prix_HT";
			this->label_Prix_HT->Size = System::Drawing::Size(100, 27);
			this->label_Prix_HT->TabIndex = 11;
			this->label_Prix_HT->Text = L"Prix HT";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(493, 305);
			this->textBox4->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label_remise_article
			// 
			this->label_remise_article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_remise_article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_remise_article->Location = System::Drawing::Point(490, 274);
			this->label_remise_article->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_remise_article->Name = L"label_remise_article";
			this->label_remise_article->Size = System::Drawing::Size(100, 27);
			this->label_remise_article->TabIndex = 9;
			this->label_remise_article->Text = L"Remise";
			// 
			// text_Stock_Article
			// 
			this->text_Stock_Article->Location = System::Drawing::Point(493, 226);
			this->text_Stock_Article->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_Stock_Article->Name = L"text_Stock_Article";
			this->text_Stock_Article->Size = System::Drawing::Size(134, 20);
			this->text_Stock_Article->TabIndex = 8;
			// 
			// label_stock
			// 
			this->label_stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_stock->Location = System::Drawing::Point(491, 194);
			this->label_stock->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_stock->Name = L"label_stock";
			this->label_stock->Size = System::Drawing::Size(100, 27);
			this->label_stock->TabIndex = 7;
			this->label_stock->Text = L"Stock";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(261, 380);
			this->textBox2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label_nom_article
			// 
			this->label_nom_article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_nom_article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_nom_article->Location = System::Drawing::Point(259, 348);
			this->label_nom_article->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_nom_article->Name = L"label_nom_article";
			this->label_nom_article->Size = System::Drawing::Size(100, 27);
			this->label_nom_article->TabIndex = 5;
			this->label_nom_article->Text = L"nom";
			// 
			// text_Nature_article
			// 
			this->text_Nature_article->Location = System::Drawing::Point(260, 296);
			this->text_Nature_article->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_Nature_article->Name = L"text_Nature_article";
			this->text_Nature_article->Size = System::Drawing::Size(134, 20);
			this->text_Nature_article->TabIndex = 4;
			// 
			// label_Nature
			// 
			this->label_Nature->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Nature->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Nature->Location = System::Drawing::Point(257, 264);
			this->label_Nature->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_Nature->Name = L"label_Nature";
			this->label_Nature->Size = System::Drawing::Size(100, 27);
			this->label_Nature->TabIndex = 3;
			this->label_Nature->Text = L"Nature";
			// 
			// text_ref_article
			// 
			this->text_ref_article->Location = System::Drawing::Point(261, 216);
			this->text_ref_article->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->text_ref_article->Name = L"text_ref_article";
			this->text_ref_article->Size = System::Drawing::Size(134, 20);
			this->text_ref_article->TabIndex = 2;
			// 
			// label_ref_article
			// 
			this->label_ref_article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_ref_article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_ref_article->Location = System::Drawing::Point(259, 185);
			this->label_ref_article->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label_ref_article->Name = L"label_ref_article";
			this->label_ref_article->Size = System::Drawing::Size(100, 27);
			this->label_ref_article->TabIndex = 1;
			this->label_ref_article->Text = L"référence";
			// 
			// title_Gestion_Stock
			// 
			this->title_Gestion_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_Gestion_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->title_Gestion_Stock->Location = System::Drawing::Point(437, 51);
			this->title_Gestion_Stock->Name = L"title_Gestion_Stock";
			this->title_Gestion_Stock->Size = System::Drawing::Size(317, 78);
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
			this->Panel_Gestion_Stat->Location = System::Drawing::Point(1481, 21);
			this->Panel_Gestion_Stat->Name = L"Panel_Gestion_Stat";
			this->Panel_Gestion_Stat->Size = System::Drawing::Size(50, 875);
			this->Panel_Gestion_Stat->TabIndex = 5;
			this->Panel_Gestion_Stat->Visible = false;
			this->Panel_Gestion_Stat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Gestion_Stat_Paint);
			// 
			// comboBox_TVAStat
			// 
			this->comboBox_TVAStat->FormattingEnabled = true;
			this->comboBox_TVAStat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox_TVAStat->Location = System::Drawing::Point(99, 214);
			this->comboBox_TVAStat->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_TVAStat->Name = L"comboBox_TVAStat";
			this->comboBox_TVAStat->Size = System::Drawing::Size(397, 21);
			this->comboBox_TVAStat->TabIndex = 176;
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
			this->bunifuThinButton29->Location = System::Drawing::Point(99, 493);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->Size = System::Drawing::Size(395, 47);
			this->bunifuThinButton29->TabIndex = 175;
			this->bunifuThinButton29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton28->Location = System::Drawing::Point(769, 465);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->Size = System::Drawing::Size(183, 47);
			this->bunifuThinButton28->TabIndex = 174;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton27->Location = System::Drawing::Point(981, 465);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->Size = System::Drawing::Size(183, 47);
			this->bunifuThinButton27->TabIndex = 173;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton26->Location = System::Drawing::Point(769, 322);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(183, 47);
			this->bunifuThinButton26->TabIndex = 172;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton21->Location = System::Drawing::Point(769, 393);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(395, 47);
			this->bunifuThinButton21->TabIndex = 167;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(75, 151);
			this->label12->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(431, 21);
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
			this->bunifuThinButton22->Location = System::Drawing::Point(981, 158);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(182, 47);
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
			this->bunifuThinButton23->Location = System::Drawing::Point(769, 240);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(395, 47);
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
			this->bunifuThinButton24->Location = System::Drawing::Point(981, 322);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(183, 47);
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
			this->bunifuThinButton25->Location = System::Drawing::Point(769, 158);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(181, 47);
			this->bunifuThinButton25->TabIndex = 145;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(41, 620);
			this->textBox11->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox11->Size = System::Drawing::Size(1153, 39);
			this->textBox11->TabIndex = 143;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(96, 414);
			this->label18->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(126, 19);
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
			this->label19->Location = System::Drawing::Point(96, 340);
			this->label19->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(125, 19);
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
			this->label20->Location = System::Drawing::Point(96, 266);
			this->label20->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 19);
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
			this->label21->Location = System::Drawing::Point(96, 194);
			this->label21->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(33, 19);
			this->label21->TabIndex = 131;
			this->label21->Text = L"TVA";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(99, 286);
			this->textBox16->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(397, 20);
			this->textBox16->TabIndex = 130;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(99, 434);
			this->textBox17->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(397, 20);
			this->textBox17->TabIndex = 129;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(99, 359);
			this->textBox18->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(397, 20);
			this->textBox18->TabIndex = 128;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(39, 675);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1153, 177);
			this->dataGridView2->TabIndex = 126;
			// 
			// Title_Gestion_Stat
			// 
			this->Title_Gestion_Stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Stat->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Stat->Location = System::Drawing::Point(443, 37);
			this->Title_Gestion_Stat->Name = L"Title_Gestion_Stat";
			this->Title_Gestion_Stat->Size = System::Drawing::Size(374, 78);
			this->Title_Gestion_Stat->TabIndex = 0;
			this->Title_Gestion_Stat->Text = L"Gestion Statistiques";
			this->Title_Gestion_Stat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1560, 690);
			this->Controls->Add(this->Panel_Gestion_Stat);
			this->Controls->Add(this->panel_Gestion_Stock);
			this->Controls->Add(this->Panel_Gestion_Commandes);
			this->Controls->Add(this->Panel_Gestion_Client);
			this->Controls->Add(this->panel_Gestion_Personnel);
			this->Controls->Add(this->panel_gestion);
			this->Controls->Add(this->Panel_Dashboard);
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
			this->panel_Gestion_Stock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
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
				
			private: System::Void panel_Gestion_Personnel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			}
	
			private: System::Void Panel_Gestion_Stat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			}
			private: System::Void Panel_Gestion_Client_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
				
				this->ds = gcnew Data::DataSet();
				this->processusClient = gcnew NS_Svc::Svc_gestionClient;
				this->text1_message->Text = "Data chargées";
			}
			private: System::Void button1_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
				this->text_idclient->Clear();
				this->text_nomclient->Clear();
				this->text_prenomclient->Clear();
				this->text_datenaissance->Clear();
				this->text_idadresse->Clear();
				this->text_adressepostale->Clear();
				this->text_codepostaleadresse->Clear();
				this->text_villeadresse->Clear();
				this->text_paysadresse->Clear();
				this->choice_typeadresse->SelectedIndex = -1;
				
				this->text1_message->Text = "Veuillez saisir les information du client et appuyer sur le mode que vous voulez";
			}
			
			private: System::Void button1_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
				this->processusClient->ajouter(Convert::ToInt32(this->text_idclient->Text), this->text_prenomclient->Text, this->text_nomclient->Text, this->text_datenaissance->Text, Convert::ToInt32(this->text_idadresse->Text), this->text_adressepostale->Text, this->text_villeadresse->Text, this->text_paysadresse->Text, Convert::ToInt32(this->text_codepostaleadresse->Text), this->choice_typeadresse->Text);
				this->text1_message->Text = "Ajouté avec succès";
			}
			private: System::Void button1_modiffier_Click(System::Object^ sender, System::EventArgs^ e) {
				this->processusClient->modifier(Convert::ToInt32(this->text_idclient->Text), this->text_prenomclient->Text, this->text_nomclient->Text, this->text_datenaissance->Text, Convert::ToInt32(this->text_idadresse->Text), this->text_adressepostale->Text, this->text_villeadresse->Text, this->text_paysadresse->Text, Convert::ToInt32(this->text_codepostaleadresse->Text), this->choice_typeadresse->Text);
				this->text1_message->Text = "Mis à jour avec succès";
			}
			private: System::Void button1_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
				this->dataGridView_gestclient->Refresh();
				this->ds = this->processusClient->listeClient("Client");
				this->dataGridView_gestclient->DataSource = this->ds;
				this->dataGridView_gestclient->DataMember = "Client";
			}
			private: System::Void button1_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
				this->processusClient->supprimer(Convert::ToInt32(this->text_idclient->Text), Convert::ToInt32(this->text_idadresse->Text));
				this->text1_message->Text = "Supprimé avec succès";
			}

};
}
