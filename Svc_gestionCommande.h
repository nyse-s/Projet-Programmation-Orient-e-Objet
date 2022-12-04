#pragma once
#include "CL_CAD.h"
#include "Map_Commande.h"
#include "Map_Facturation.h"
#include "Svc_gestionClient.h"

namespace NS_Svc
{
	ref class Svc_gestionCommande
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::Map_Commande^ commande;
		//Map_Personne^ personne;
		Map_Facturation^ facturation;
		Map_Adresse^ adresse;
		DataSet^ ds;
	public:
		Svc_gestionCommande(void);
		DataSet^ listeCommande(String^);
		//void rechercher(int, String^, String^, int, int);
		void ajouter(String^, int, double, double, double, String^, String^, String^, int, int, int, int, String^, String^, int, int, String^, String^, String^, int);
		void modifier(String^, double, double, double, String^, String^, String^, int, int, int, int, String^, String^, int, String^, String^, String^, int);
		void supprimer(String^, int, int);
	};	
}


