#include "Svc_gestionClient.h"

NS_Svc::Svc_gestionClient::Svc_gestionClient(void)
{
    this->cad = gcnew NS_Composants::CL_CAD();
    this->client = gcnew NS_Composants::Map_Client();
    //this->personne = gcnew Map_Personne();
    this->adresse = gcnew Map_Adresse();
    this->ds = gcnew DataSet();
}

DataSet^ NS_Svc::Svc_gestionClient::listeClient(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
    return this->ds;
}


void NS_Svc::Svc_gestionClient::ajouter(int id_client, String^ prenom, String^ nom, String^ date_naissance, int id_adressefact, String^ adressepostalefacturation, String^ villefacturation, String^ paysfacturation, int codepostalfacturation, int id_adresseliv, String^ adressepostalelivraison, String^ villelivraison, String^ payslivraison, int codepostallivraison)
{
    String^ sql;
    String^ sql2;
    String^ sql3;
	this->client->setNumClient(id_client);
    this->client->setNom(nom);
    this->client->setPrenom(prenom);
	this->client->setDateNaissance(date_naissance);
	this->adresse->setID_Adresse(id_adressefact);
	this->adresse->setAdressePostale(adressepostalefacturation);
	this->adresse->setVille(villefacturation);
	this->adresse->setPays(paysfacturation);
	this->adresse->setCodePostal(codepostalfacturation);
    sql2 = this->adresse->INSERT();
    this->cad->actionRows(sql2);
	this->adresse->setID_Adresse(id_adresseliv);
    this->adresse->setAdressePostale(adressepostalelivraison);
    this->adresse->setVille(villelivraison);
    this->adresse->setPays(payslivraison);
    this->adresse->setCodePostal(codepostallivraison);
	sql3 = this->adresse->INSERT();
	this->cad->actionRows(sql3);
    sql = this->client->INSERT();
    this->cad->actionRows(sql);
}

void NS_Svc::Svc_gestionClient::modifier(int, String^, String^, int, int)
{
    throw gcnew System::NotImplementedException();
}

void NS_Svc::Svc_gestionClient::supprimer(int)
{
    throw gcnew System::NotImplementedException();
}
