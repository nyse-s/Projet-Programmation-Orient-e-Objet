#pragma once
using namespace System;

ref class Map_Adresse
{
private:
	int id_adresse;
	String^ adressePostale;
	String^ ville;
	int code_postal;
	String^ pays;
public:
	Map_Adresse(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ UPDATE(void);
	String^ DELETE(void);
	int getID_Adresse(void);
	String^ getAdressePostale(void);
	String^ getVille(void);
	int getCodePostal(void);
	String^ getPays(void);
	void setID_Adresse(int);
	void setAdressePostale(String^);
	void setVille(String^);
	void setCodePostal(int);
	void setPays(String^);
};

