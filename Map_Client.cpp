#include "Map_Client.h"

NS_Composants::Map_Client::Map_Client(void)
{
    this->num_client = -1 ;
	this->adresse_livraison = gcnew Map_Adresse;
    this->adresse_facturation = gcnew Map_Adresse;
    this->date_naissance = "RIEN";
}

String^ NS_Composants::Map_Client::SELECT(void)
{
	return "SELECT client.id_client, prenom, nom, date_naissance, adressePostale, ville, pays, codePostale FROM ([POO].[dbo].[Client] AS client JOIN [POO].[dbo].[Adresse_facturation] AS adfact ON adfact.id_client = client.id_client) JOIN [POO].[dbo].[Adresse] AS adresse ON adresse.id_adresse = adfact.id_adresse; ";
}

String^ NS_Composants::Map_Client::INSERT(void)
{
	return "INSERT INTO [POO].[dbo].[Client](prenom, nom, date_naissance) VALUES (" + this->getNumClient() + ",'" + this->getPrenom() + "','" + this->getNom() + "','" + this->getDateNaissance() + "');SELECT @@IDENTITY; INSERT INTO [POO].[dbo].[Adresse_facturation](id_adresse, id_client) SELECT [Adresse].id_adresse, [Client].id_client FROM [POO].[dbo].[Adresse], [POO].[dbo].[Client] WHERE [Adresse].id_adresse = "+ this->adresse_facturation->getID_Adresse() + " AND [Client].id_client = " + this->getNumClient() +"; INSERT INTO [POO].[dbo].[Adresse_facturation](id_adresse, id_client) SELECT [Adresse].id_adresse, [Client].id_client FROM [POO].[dbo].[Adresse], [POO].[dbo].[Client] WHERE [Adresse].id_adresse = " + this->adresse_livraison->getID_Adresse() + " AND [Client].id_client = " + this->getNumClient() + "";
}

String^ NS_Composants::Map_Client::UPDATE(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ NS_Composants::Map_Client::DELETE(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

int NS_Composants::Map_Client::getNumClient(void)
{
	return this->num_client;
}

String^ NS_Composants::Map_Client::getNom(void)
{
	return  this->nom;
}

String^ NS_Composants::Map_Client::getPrenom(void)
{
	return this->prenom;
}

//Map_Adresse^ NS_Composants::Map_Client::getAdresseLivraison(void)
//{
//	return this->adresse_livraison;
//}
//
//Map_Adresse^ NS_Composants::Map_Client::getAdresseFacturation(void)
//{
//	return this->adresse_facturation;
//}

String^ NS_Composants::Map_Client::getDateNaissance(void)
{
	return this->date_naissance;
}

void NS_Composants::Map_Client::setNumClient(int num_client)
{
	if (num_client > 0)
	{
		this->num_client = num_client;
	}
}

void NS_Composants::Map_Client::setNom(String^ nom)
{
	if (nom != "")
	{
		this->nom = nom;
	}
}

void NS_Composants::Map_Client::setPrenom(String^ prenom)
{
	if (prenom != "")
	{
		this->prenom = prenom;
	}
}


//void NS_Composants::Map_Client::setAdresseLivraison(int adresse_livraison)
//{
//	if (adresse_livraison > 0)
//	{
//		this->adresse_livraison->setID_Adresse(adresse_livraison);
//	}
//}
//
//void NS_Composants::Map_Client::setAdresseFacturation(int adresse_facturation)
//{
//	if (adresse_facturation > 0)
//	{
//		this->adresse_facturation->setID_Adresse(adresse_facturation);
//	}
//}

void NS_Composants::Map_Client::setDateNaissance(String^ date_naissance)
{
	this->date_naissance = date_naissance;
}
