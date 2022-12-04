//#include "Map_article.h"
//
//Svc_Article::Map_Articles::Map_Articles(void)
//{
//	this->ref_article = -1;
//	this->stock_articles = -1;
//	this->seuil_reapprovisionnement = -1;
//	this->nature = "rien";
//	this->nom_article = "rien";
//	this->couleur = "rien";
//	this->taux_TVA = 0,0;
//	this->prix_articleUHT = 0, 0;
//	this->remise_articles = 0, 0;
//}
//
//String^ Svc_Article::Map_Articles::SELECT(void)
//{
//	return;
//}
//
//String^ Svc_Article::Map_Articles::INSERT(void)
//{
//	return;
//}
//
//String^ Svc_Article::Map_Articles::UPDATE(void)
//{
//	return;
//}
//
//String^ Svc_Article::Map_Articles::DELETE(void)
//{
//	return;
//}
//
//int Svc_Article::Map_Articles::getRef_Article(void)
//{
//	return this->ref_article;
//}
//
//String^ Svc_Article::Map_Articles::getNature(void)
//{
//	return this->nature;
//}
//
//String^ Svc_Article::Map_Articles::getNom_Article(void)
//{
//	return this->nom_article;
//}
//
//String^ Svc_Article::Map_Articles::getCouleur(void)
//{
//	return this->couleur;
//}
//
//int Svc_Article::Map_Articles::getStock_Articles(void)
//{
//	return this->stock_articles;
//}
//
//float Svc_Article::Map_Articles::getRemise_Articles(void)
//{
//	return this->remise_articles;
//}
//
//float Svc_Article::Map_Articles::getPrix_ArticleUHT(void)
//{
//	return this->prix_articleUHT;
//}
//
//float Svc_Article::Map_Articles::getTaux_TVA(void)
//{
//	return this->taux_TVA;
//}
//
//int Svc_Article::Map_Articles::getSeuil_Reapprovisionnement(void)
//{
//	return this->seuil_reapprovisionnement;
//}
//
//void Svc_Article::Map_Articles::setRef_Article(int ref_article)
//{
//	if (ref_article > 0)
//	{
//		this->ref_article = ref_article;
//	}
//}
//
//void Svc_Article::Map_Articles::setNature(String^ nature)
//{
//	if (nature != "")
//	{
//		this->nature = nature;
//	}
//}
//
//void Svc_Article::Map_Articles::setNom_Article(String^ nom_article)
//{
//	if (nom_article != "")
//	{
//		this->nom_article = nom_article;
//	}
//}
//
//void Svc_Article::Map_Articles::setCouleur(String^ couleur)
//{
//	if (couleur != "")
//	{
//		this->nom_article = couleur;
//	}
//}
//
//void Svc_Article::Map_Articles::setStock_Articles(int stock_articles)
//{
//	if (stock_articles > 0)
//	{
//		this->stock_articles = stock_articles;
//	}
//}
//
//void Svc_Article::Map_Articles::setRemise_Articles(float remise_articles)
//{
//	if (remise_articles > 0,0)
//	{
//		this->remise_articles = remise_articles;
//	}
//}
//
//void Svc_Article::Map_Articles::setPrix_ArticleUHT(float prix_articleUHT)
//{
//	if (prix_articleUHT > 0, 0)
//	{
//		this->prix_articleUHT = prix_articleUHT;
//	}
//}
//
//void Svc_Article::Map_Articles::setTaux_TVA(float taux_TVA)
//{
//	if (taux_TVA > 0, 0)
//	{
//		this->taux_TVA = taux_TVA;
//	}
//}
//
//void Svc_Article::Map_Articles::setSeuil_Reapprovisionnement(int seuil_reapprovisionnement)
//{
//	if (seuil_reapprovisionnement > 0)
//	{
//		this->stock_articles = seuil_reapprovisionnement;
//	}
//}
