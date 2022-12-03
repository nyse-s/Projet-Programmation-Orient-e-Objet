#include "Map_Client.h"

NS_Composants::Map_Client::Map_Client(void)
{
    this->num_client = -1 ;
    this->date_naissance = "RIEN";
}

String^ NS_Composants::Map_Client::SELECT(void)
{
	return "SELECT client.id_client, prenom, nom, date_naissance, adressePostale, ville, pays, codePostale, libelle FROM ([POO].[dbo].[Client] AS client JOIN [POO].[dbo].[TypeAdresse] AS ad ON ad.id_client = client.id_client) JOIN [POO].[dbo].[Adresse] AS adresse ON adresse.id_adresse = ad.id_adresse; ";
}

String^ NS_Composants::Map_Client::INSERT(void)
{
	return "INSERT INTO [POO].[dbo].[Client](id_client, prenom, nom, date_naissance) VALUES (" + this->getNumClient() + ",'" + this->getPrenom() + "','" + this->getNom() + "','" + this->getDateNaissance() + "');SELECT @@IDENTITY; INSERT INTO [POO].[dbo].[TypeAdresse](id_adresse, id_client, libelle) SELECT [Adresse].id_adresse, [Client].id_client, [Typess].libelle FROM [POO].[dbo].[Adresse], [POO].[dbo].[Client], [POO].[dbo].[Typess]  WHERE [Typess].libelle = '"+ this->getTypeAdresse() + "';";
}

String^ NS_Composants::Map_Client::UPDATE(void)
{
	return "UPDATE [POO].[dbo].[Client] SET  prenom = '" + this->getPrenom() + "', nom = '" + this->getNom() + "', date_naissance = '" + this->getDateNaissance() + "' WHERE id_client = " + this->getNumClient() + ";";
}

String^ NS_Composants::Map_Client::UPDATE2(void)
{
	return "UPDATE [POO].[dbo].[TypeAdresse] SET libelle = '"+ this->getTypeAdresse() + "' WHERE id_client = " + this->getNumClient() + ";";
}

String^ NS_Composants::Map_Client::DELETE(void)
{
	return "DELETE FROM [POO].[dbo].[TypeAdresse] WHERE id_client = " + this->getNumClient() + "; DELETE FROM [POO].[dbo].[Client] WHERE id_client = " + this->getNumClient() + ";";
	//DELETE FROM([POO].[dbo].[Client] AS c JOIN[POO].[dbo].[TypeAdresse] AS t ON c.id_client = t.id_client) JOIN[POO].[dbo].[Adresse] AS a ON a.id_adresse = t.id_adresse  WHERE t.id_client = " + this->getNumClient() + " AND t.id_adresse = "+  + " AND t.libelle = '" + this->getTypeAdresse() + "' AND c.id_client = " + this->getNumClient() + "
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

String^ NS_Composants::Map_Client::getTypeAdresse(void)
{
	return this->TypeAdresse;
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

void NS_Composants::Map_Client::setTypeAdresse(String^ type)
{
	if (type != "")
	{
		this->TypeAdresse = type;
	}
}
