#include "Svc_gestionCommande.h"

NS_Svc::Svc_gestionCommande::Svc_gestionCommande(void)
{
	this->cad = gcnew NS_Composants::CL_CAD();
	this->commande = gcnew NS_Composants::Map_Commande();
	this->facturation = gcnew Map_Facturation();
	this->adresse = gcnew Map_Adresse();
	this->ds = gcnew DataSet();
}

DataSet^ NS_Svc::Svc_gestionCommande::listeCommande(String^ dataTableName)
{
	this->ds->Clear();
	this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
	return this->ds;
}

void NS_Svc::Svc_gestionCommande::ajouter(String^ ref_commande, int id_client, double totHT, double totTVA, double totTTC, String^ datecommande, String^ datelivraison, String^ datepaiement, int quantitearticles, int id_remise, int id_facture, int numservice, String^ nomsociete, String^ moyenpaiement, int id_clientfact, int id_adressesociete, String^ adressepostale, String^ ville, String^ pays, int codepostal)
{
	String^ sql;
	String^ sql2;
	String^ sql3;
	this->adresse->setID_Adresse(id_adressesociete);
	this->adresse->setAdressePostale(adressepostale);
	this->adresse->setVille(ville);
	this->adresse->setPays(pays);
	this->adresse->setCodePostal(codepostal);
	this->commande->setRefCommande(ref_commande);
	this->commande->setIdClient(id_client);
	this->commande->setMontantToTHT(totHT);
	this->commande->setMontantToTTVA(totTVA);
	this->commande->setMontantToTTTC(totTTC);
	this->commande->setDateEmission(datecommande);
	this->commande->setDateLivraison(datelivraison);
	this->commande->setDatePaiement(datepaiement);
	this->commande->setQuantiteArticles(quantitearticles);
	this->commande->setIdRemise(id_remise);
	this->facturation->setIdFacture(id_facture);
	this->facturation->setNumService(numservice);
	this->facturation->setNomSociete(nomsociete);
	this->facturation->setMoyenPaiement(moyenpaiement);
	this->facturation->setIDClient(id_clientfact);
	this->facturation->setIdAdresseSociete(id_adressesociete);
	sql3 = this->adresse->INSERT();
	this->cad->actionRows(sql3);
	sql = this->commande->INSERT();
	this->cad->actionRows(sql);
	sql2 = this->facturation->INSERT();
	this->cad->actionRows(sql2);
}

void NS_Svc::Svc_gestionCommande::modifier(String^ ref_commande, double totHT, double totTVA, double totTTC, String^ datecommande, String^ datelivraison, String^ datepaiement, int quantitearticles, int id_remise, int id_facture, int numservice, String^ nomsociete, String^ moyenpaiement, int id_adressesociete, String^ adressepostale, String^ ville, String^ pays, int codepostal)
{
	String^ sql;
	String^ sql2;
	String^ sql3;
	String^ sql4;
	this->adresse->setID_Adresse(id_adressesociete);
	this->adresse->setAdressePostale(adressepostale);
	this->adresse->setVille(ville);
	this->adresse->setPays(pays);
	this->adresse->setCodePostal(codepostal);
	this->commande->setRefCommande(ref_commande);
	this->commande->setMontantToTHT(totHT);
	this->commande->setMontantToTTVA(totTVA);
	this->commande->setMontantToTTTC(totTTC);
	this->commande->setDateEmission(datecommande);
	this->commande->setDateLivraison(datelivraison);
	this->commande->setDatePaiement(datepaiement);
	this->commande->setQuantiteArticles(quantitearticles);
	this->commande->setIdRemise(id_remise);
	this->facturation->setIdFacture(id_facture);
	this->facturation->setNumService(numservice);
	this->facturation->setNomSociete(nomsociete);
	this->facturation->setMoyenPaiement(moyenpaiement);
	sql3 = this->adresse->UPDATE();
	this->cad->actionRows(sql3);
	sql = this->commande->UPDATE();
	this->cad->actionRows(sql);
	sql3 = this->commande->UPDATE2();
	this->cad->actionRows(sql3);
	sql4 = this->commande->UPDATE3();
	this->cad->actionRows(sql4);
	sql2 = this->facturation->UPDATE();
	this->cad->actionRows(sql2);
}

void NS_Svc::Svc_gestionCommande::supprimer(String^ refcommande, int id_facture, int id_adressesociete)
{
	String^ sql;
	String^ sql2;
	String^ sql3;
	this->commande->setRefCommande(refcommande);
	this->facturation->setIdFacture(id_facture);
	this->adresse->setID_Adresse(id_adressesociete);
	sql2 = this->facturation->DELETE();
	this->cad->actionRows(sql2);
	sql = this->commande->DELETE();
	this->cad->actionRows(sql);
	sql3 = this->adresse->DELETE();
	this->cad->actionRows(sql3);
}
