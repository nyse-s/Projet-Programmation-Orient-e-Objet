#include "Map_Commande.h"

NS_Composants::Map_Commande::Map_Commande(void)
{
	this->ref_commande = "RIEN";
	this->id_client = -1;
	this->date_emission = "RIEN";
	this->date_livraison = "RIEN";
	this->date_paiement = "RIEN";
	this->montant_TotHT = -1;
	this->montant_TotTVA = -1;
	this->montant_TotTTC = -1;
	this->quantite_articles = -1;
}

String^ NS_Composants::Map_Commande::SELECT(void)
{
	return "SELECT c.reference_commande, c.id_client, montant_totHT, montant_totTVA, montant_totTTC, date_commande, date_livraison, d.date_paiement, quantite_articles, r.id_remise, taux_remise, moyen_paiement, f.id_facture, num_service, nom_societe, adressePostale, ville, pays, codePostale  FROM ((((([POO].[dbo].[Commande] AS c JOIN [POO].[dbo].[Poste_Facture] AS pf ON pf.reference_commande = c.reference_commande) JOIN [POO].[dbo].[Facture] AS f ON f.id_facture = pf.id_facture) JOIN [POO].[dbo].[Ligne_commande] AS lc ON lc.reference_commande = c.reference_commande) JOIN [POO].[dbo].[Remise] AS r ON r.id_remise = lc.id_remise) JOIN [POO].[dbo].[Adresse] AS a ON a.id_adresse = f.id_adresse_societe) JOIN [POO].[dbo].[Date_paiement] AS d ON d.reference_commande = c.reference_commande;";
}

String^ NS_Composants::Map_Commande::INSERT(void)
{
	return "INSERT INTO [POO].[dbo].[Commande](reference_commande, id_client, montant_totHT, montant_totTVA, montant_totTTC, date_commande, date_livraison) VALUES ('" + this->getRefCommande() + "', " + this->getIdClient() + "," + this->getMontantToTHT() + "," + this->getMontantToTTVA() + "," + this->getMontantToTTTC() + ",'" + this->getDateEmission() + "','" + this->getDateLivraison() + "'); INSERT INTO [POO].[dbo].[Ligne_commande](reference_articles, reference_commande, id_remise, quantite_articles) SELECT [Articles].reference_articles, [Commande].reference_commande, [Remise].id_remise, "+ this->getQuantiteArticles() + " FROM [POO].[dbo].[Articles], [POO].[dbo].[Commande], [POO].[dbo].[Remise] WHERE [Remise].id_remise = "+ this->getIdRemise() + "; INSERT INTO [POO].[dbo].[Date_paiement](reference_commande, date_paiement) SELECT [Commande].reference_commande, '"+ this->getDatePaiement() + "' FROM [POO].[dbo].[Commande] WHERE [Commande].reference_commande = '"+ this->getRefCommande() + "';";
}

String^ NS_Composants::Map_Commande::UPDATE(void)
{
	return "UPDATE [POO].[dbo].[Commande] SET  montant_totHT = " + this->getMontantToTHT() + ", montant_totTVA = " + this->getMontantToTTVA() + ", montant_totTTC = " + this->getMontantToTTTC() + ", date_commande = '" + this->getDateEmission() + "', date_livraison = '" + this->getDateLivraison() + "' WHERE reference_commande = '" + this->getRefCommande() + "';";
}
String^ NS_Composants::Map_Commande::UPDATE2(void)
{
	return "UPDATE [POO].[dbo].[Ligne_commande] SET quantite_articles = " + this->getQuantiteArticles() + ", id_remise = "+ this->getIdRemise() + "  WHERE reference_commande = '" + this->getRefCommande() + "' ;";
}

String^ NS_Composants::Map_Commande::UPDATE3(void)
{
	return "UPDATE [POO].[dbo].[Date_paiement] SET date_paiement = '" + this->getDatePaiement() + "' WHERE reference_commande = '" + this->getRefCommande() + "' ;";
}

String^ NS_Composants::Map_Commande::DELETE(void)
{
	return "DELETE FROM [POO].[dbo].[Ligne_commande] WHERE reference_commande = '" + this->getRefCommande() + "'; DELETE FROM [POO].[dbo].[Date_paiement] WHERE reference_commande = '" + this->getRefCommande() + "';; DELETE FROM [POO].[dbo].[Commande] WHERE reference_commande = '" + this->getRefCommande() + "';";
}

void NS_Composants::Map_Commande::setRefCommande(String^ refcommande)
{
	if (refcommande != "")
	{
		this->ref_commande = refcommande;
	}
}

void NS_Composants::Map_Commande::setIdClient(int idclient)
{
	if (idclient > 0)
	{
		this->id_client = idclient;
	}
}

void NS_Composants::Map_Commande::setDateEmission(String^ dateemission)
{
	if (dateemission != "")
	{
		this->date_emission = dateemission;
	}
}

void NS_Composants::Map_Commande::setDateLivraison(String^ datelivraison)
{
	if (datelivraison != "")
	{
		this->date_livraison = datelivraison;
	}
}

void NS_Composants::Map_Commande::setDatePaiement(String^ datepaiement)
{
	if (datepaiement != "")
	{
		this->date_paiement = datepaiement;
	}
}

void NS_Composants::Map_Commande::setMontantToTHT(double montanttotht)
{
	if (montanttotht > 0)
	{
		this->montant_TotHT = montanttotht;
	}
}


void NS_Composants::Map_Commande::setMontantToTTVA(double montanttotva)
{
	if (montanttotva > 0)
	{
		this->montant_TotTVA = montanttotva;
	}
}

void NS_Composants::Map_Commande::setMontantToTTTC(double montanttotttc)
{
	if (montanttotttc > 0)
	{
		this->montant_TotTTC = montanttotttc;
	}
}

void NS_Composants::Map_Commande::setQuantiteArticles(int quantitearticles)
{
	if (quantitearticles > 0)
	{
		this->quantite_articles = quantitearticles;
	}
}

void NS_Composants::Map_Commande::setIdRemise(int idremise)
{
	if (idremise > 0)
	{
		this->id_remise = idremise;
	}
}

String^ NS_Composants::Map_Commande::getRefCommande(void)
{
	return this->ref_commande;
}

int NS_Composants::Map_Commande::getIdClient(void)
{
	return this->id_client;
}


String^ NS_Composants::Map_Commande::getDateEmission(void)
{
	return this->date_emission;
}

String^ NS_Composants::Map_Commande::getDateLivraison(void)
{
	return this->date_livraison;
}

String^ NS_Composants::Map_Commande::getDatePaiement(void)
{
	return this->date_paiement;
}

double NS_Composants::Map_Commande::getMontantToTHT(void)
{
	return this->montant_TotHT;
}

double NS_Composants::Map_Commande::getMontantToTTVA(void)
{
	return this->montant_TotTVA;
}

double NS_Composants::Map_Commande::getMontantToTTTC(void)
{
	return this->montant_TotTTC;
}

int NS_Composants::Map_Commande::getQuantiteArticles(void)
{
	return this->quantite_articles;
}

int NS_Composants::Map_Commande::getIdRemise(void)
{
	return this->id_remise;
}
