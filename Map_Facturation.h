#pragma once
using namespace System;

ref class Map_Facturation
{
private:
	int id_facture;
	int num_service;
	String^ nom_societe;
	String^ moyen_paiement;
	int id_client;
	int id_adresse_societe;
public:
	Map_Facturation(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ UPDATE(void);
	//String^ UPDATE2(void);
	String^ DELETE(void);
	void setIdFacture(int);
	void setNumService(int);
	void setNomSociete(String^);
	void setMoyenPaiement(String^);
	void setIDClient(int);
	void setIdAdresseSociete(int);
	int getIdFacture(void);
	int getNumService(void);
	String^ getNomSociete(void);
	String^ getMoyenPaiement(void);
	int getIdClient(void);
	int getIdAdresseSociete(void);
};

