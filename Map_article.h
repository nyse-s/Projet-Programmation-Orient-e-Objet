#pragma once
using namespace System;

namespace Svc_Article{
	ref class Map_Articles
	{
	private:
		int ref_article, stock_articles, seuil_reapprovisionnement;
		String^ nature;
		String^ nom_article;
		String^ couleur;
		float remise_articles, prix_articleUHT, taux_TVA;
	public:
		Map_Articles(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getRef_Article(void);
		String^ getNature(void);
		String^ getNom_Article(void);
		String^ getCouleur(void);
		int getStock_Articles(void);
		float getRemise_Articles(void);
		float getPrix_ArticleUHT(void);
		float getTaux_TVA(void);
		int getSeuil_Reapprovisionnement(void);
		void setRef_Article(int);
		void setNature(String^);
		void setNom_Article(String^);
		void setCouleur(String^);
		void setStock_Articles(int);
		void setRemise_Articles(float);
		void setPrix_ArticleUHT(float);
		void setTaux_TVA(float);
		void setSeuil_Reapprovisionnement(int);
	};
}
