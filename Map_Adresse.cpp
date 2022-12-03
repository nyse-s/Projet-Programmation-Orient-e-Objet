#include "Map_Adresse.h"

Map_Adresse::Map_Adresse(void)
{
	this->id_adresse = -1;
	this->adressePostale = "RIEN";
	this->code_postal = -1;
	this->ville = "RIEN";
	this->pays = "RIEN";
}

String^ Map_Adresse::SELECT(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

String^ Map_Adresse::INSERT(void)
{
	return "INSERT INTO [POO].[dbo].[Adresse](id_adresse, adressePostale, ville, pays, codePostale) VALUES ("+ this->getID_Adresse() + ",'" + this->getAdressePostale() + "','" + this->getVille() + "','" + this->getPays() + "'," + this->getCodePostal() + ");SELECT @@IDENTITY;";
}

String^ Map_Adresse::UPDATE(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

String^ Map_Adresse::DELETE(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

int Map_Adresse::getID_Adresse(void)
{
	return this->id_adresse;
}

String^ Map_Adresse::getAdressePostale(void)
{
	return this->adressePostale;
}

String^ Map_Adresse::getVille(void)
{
	return this->ville;
}

int Map_Adresse::getCodePostal(void)
{
	return this->code_postal;
}

String^ Map_Adresse::getPays(void)
{
	return this->pays;
}

void Map_Adresse::setID_Adresse(int id_adresse)
{
	if (id_adresse > 0)
	{
		this->id_adresse = id_adresse;
	}
}

void Map_Adresse::setAdressePostale(String^ adressePostale)
{
	if (adressePostale != "")
	{
		this->adressePostale = adressePostale;
	}
}

void Map_Adresse::setVille(String^ ville)
{
	if (ville != "")
	{
		this->ville = ville;
	}
}

void Map_Adresse::setCodePostal(int codepostal)
{
	if (codepostal > 0)
	{
		this->code_postal = codepostal;
	}
}

void Map_Adresse::setPays(String^ pays)
{
	if (pays != "")
	{
		this->pays = pays;
	}
}
