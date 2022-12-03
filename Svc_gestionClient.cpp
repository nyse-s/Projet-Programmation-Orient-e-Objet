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


void NS_Svc::Svc_gestionClient::ajouter(int id_client, String^ prenom, String^ nom, String^ date_naissance, int id_adresse, String^ adressepostale, String^ ville, String^ pays, int codepostal, String^ type)
{
    String^ sql;
    String^ sql2;
    //String^ sql3;
	this->client->setNumClient(id_client);
    this->client->setNom(nom);
    this->client->setPrenom(prenom);
	this->client->setDateNaissance(date_naissance);
	this->adresse->setID_Adresse(id_adresse);
	this->adresse->setAdressePostale(adressepostale);
	this->adresse->setVille(ville);
	this->adresse->setPays(pays);
	this->adresse->setCodePostal(codepostal);
    this->client->setTypeAdresse(type);
    sql2 = this->adresse->INSERT();
    this->cad->actionRows(sql2);
    sql = this->client->INSERT();
    this->cad->actionRows(sql);
}

void NS_Svc::Svc_gestionClient::modifier(int id_client, String^ prenom, String^ nom, String^ date_naissance, int id_adresse, String^ adressepostale, String^ ville, String^ pays, int codepostal, String^ type)
{
    String^ sql;
    String^ sql2;
    String^ sql3;
    this->client->setNumClient(id_client);
    this->client->setNom(nom);
    this->client->setPrenom(prenom);
    this->client->setDateNaissance(date_naissance);
    this->adresse->setID_Adresse(id_adresse);
    this->adresse->setAdressePostale(adressepostale);
    this->adresse->setVille(ville);
    this->adresse->setPays(pays);
    this->adresse->setCodePostal(codepostal);
    this->client->setTypeAdresse(type);
    sql2 = this->adresse->UPDATE();
    this->cad->actionRows(sql2);
    sql = this->client->UPDATE();
    this->cad->actionRows(sql);
    sql3 = this->client->UPDATE2();
    this->cad->actionRows(sql3);
}

void NS_Svc::Svc_gestionClient::supprimer(int id_client, int id_adresse)
{
    String^ sql;
	String^ sql2;
	this->client->setNumClient(id_client);
	this->adresse->setID_Adresse(id_adresse);
	sql = this->client->DELETE();
	this->cad->actionRows(sql);
    sql2 = this->adresse->DELETE();
	this->cad->actionRows(sql2);
}
