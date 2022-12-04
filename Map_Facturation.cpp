#include "Map_Facturation.h"

Map_Facturation::Map_Facturation(void)
{
	this->id_facture = -1;
	this->num_service = -1;
	this->nom_societe = "RIEN";
	this->moyen_paiement = "RIEN";
	this->id_client = -1;
	this->id_adresse_societe = -1;
}

String^ Map_Facturation::SELECT(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ Map_Facturation::INSERT(void)
{
	return "INSERT INTO [POO].[dbo].[Facture](id_facture, num_service, nom_societe, moyen_paiement, id_client, id_adresse_societe) VALUES (" + this->getIdFacture() + ", " + this->getNumService() + ",'" + this->getNomSociete() + "','" + this->getMoyenPaiement() + "'," + this->getIdClient() + "," + this->getIdAdresseSociete() + "); INSERT INTO [POO].[dbo].[Poste_facture](reference_commande, reference_articles, id_facture) SELECT [Commande].reference_commande, [Articles].reference_articles, [Facture].id_facture FROM [POO].[dbo].[Commande], [POO].[dbo].[Facture], [POO].[dbo].[Articles];";
}

String^ Map_Facturation::UPDATE(void)
{
	return "UPDATE [POO].[dbo].[Facture] SET num_service = " + this->getNumService() + ", nom_societe = '" + this->getNomSociete() + "', moyen_paiement = '" + this->getMoyenPaiement() + "' WHERE id_facture = " + this->getIdFacture() + "; ";
}

//String^ Map_Facturation::UPDATE2(void)
//{
//	return "UPDATE [POO].[dbo].[Adresse] SET reference_commande = " + this->get + ", id_adresse_societe = " + this->getIdAdresseSociete() + " WHERE id_facture = " + this->getIdFacture() + "; ";
//}

String^ Map_Facturation::DELETE(void)
{
	return "DELETE FROM [POO].[dbo].[Poste_facture] WHERE id_facture = " + this->getIdFacture() + "; DELETE FROM [POO].[dbo].[Facture] WHERE id_facture = " + this->getIdFacture() + ";";
}

void Map_Facturation::setIdFacture(int id_facture)
{
	if (id_facture > 0)
	{
		this->id_facture = id_facture;
	}
}

void Map_Facturation::setNumService(int num_service)
{
	if (num_service > 0)
	{
		this->num_service = num_service;
	}
}

void Map_Facturation::setNomSociete(String^ nom_societe)
{
	if (nom_societe != "")
	{
		this->nom_societe = nom_societe;
	}
}

void Map_Facturation::setMoyenPaiement(String^ moyen_paiement)
{
	if (moyen_paiement != "")
	{
		this->moyen_paiement = moyen_paiement;
	}
}

void Map_Facturation::setIDClient(int id_client)
{
	if (id_client > 0)
	{
		this->id_client = id_client;
	}
}

void Map_Facturation::setIdAdresseSociete(int id_adresse_societe)
{
	if (id_adresse_societe > 0)
	{
		this->id_adresse_societe = id_adresse_societe;
	}
}

int Map_Facturation::getIdFacture(void)
{
	return this->id_facture;
}

int Map_Facturation::getNumService(void)
{
	return this->num_service;
}

String^ Map_Facturation::getNomSociete(void)
{
	return this->nom_societe;
}

String^ Map_Facturation::getMoyenPaiement(void)
{
	return this->moyen_paiement;
}

int Map_Facturation::getIdClient(void)
{
	return this->id_client;
}

int Map_Facturation::getIdAdresseSociete(void)
{
	return this->id_adresse_societe;
}
