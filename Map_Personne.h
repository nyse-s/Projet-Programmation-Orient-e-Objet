#pragma once

using namespace System;

ref class Map_Personne
{
protected:
	String^ nom;
	String^ prenom;
public:
	Map_Personne(void);
	/*virtual String^ getNom(void);
	virtual String^ getPrenom(void);*/
	void setNom(String^);
	void setPrenom(String^);
};

