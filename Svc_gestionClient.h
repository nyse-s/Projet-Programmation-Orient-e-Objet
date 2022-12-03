#pragma once
#include "CL_CAD.h"
#include "Map_Client.h"

namespace NS_Svc
{
	ref class Svc_gestionClient
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::Map_Client^ client;
		//Map_Personne^ personne;
		Map_Adresse^ adresse;
		DataSet^ ds;
	public:
		Svc_gestionClient(void);
		DataSet^ listeClient(String^);
		//void rechercher(int, String^, String^, int, int);
		void ajouter(int, String^, String^, String^,int, String^, String^, String^, int, int, String^, String^, String^, int);
		void modifier(int, String^, String^, int, int);
		void supprimer(int);
	};
}
