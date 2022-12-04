#pragma once
using namespace System;

namespace NS_Composants
{
	ref class Map_Commande
	{
	private:
		String^ ref_commande;
		int id_client;
		String^ date_emission;
		String^ date_livraison;
		String^ date_paiement;
		double montant_TotHT, montant_TotTVA, montant_TotTTC;
		int quantite_articles;
		int id_remise;
	public:
		Map_Commande(void);
		String^ SELECT(void) ;
		String^ INSERT(void) ;
		String^ UPDATE(void);
		String^ UPDATE2(void);
		String^ UPDATE3(void);
		String^ DELETE(void) ;
		void setRefCommande(String^);
		void setIdClient(int);
		void setDateEmission(String^);
		void setDateLivraison(String^);
		void setDatePaiement(String^);
		void setMontantToTHT(double);
		void setMontantToTTVA(double);
		void setMontantToTTTC(double);
		void setQuantiteArticles(int);
		void setIdRemise(int);
		String^ getRefCommande(void);
		int getIdClient(void);
		String^ getDateEmission(void);
		String^ getDateLivraison(void);
		String^ getDatePaiement(void);
		double getMontantToTHT(void);
		double getMontantToTTVA(void);
		double getMontantToTTTC(void);
		int getQuantiteArticles(void);
		int getIdRemise(void);
	};
}