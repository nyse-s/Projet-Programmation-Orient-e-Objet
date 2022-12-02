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


void NS_Svc::Svc_gestionClient::ajouter(String^ prenom, String^ nom, String^ date_naissance, String^ adressepostale, String^ ville, String^ pays, int codepostal)
{
    String^ sql;
    String^ sql2;
    this->client->setNom(nom);
    this->client->setPrenom(prenom);
	this->client->setDateNaissance(date_naissance);
	this->adresse->setAdressePostale(adressepostale);
	this->adresse->setVille(ville);
	this->adresse->setPays(pays);
	this->adresse->setCodePostal(codepostal);
    sql2 = this->adresse->INSERT();
	sql = this->client->INSERT();
	this->cad->actionRows(sql2);
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
