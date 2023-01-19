# POOProjet
Nous sommes une équipe de chercheurs, membres du service informatique. Nous en charge de la conception et de la réalisation des solutions digital. Afin de mener notre projet à bien, nous devons tout d’abord redéfinir le besoin. Autrement dit, il nous incombe de concevoir et réaliser une solution digitalisant certains des processus métiers d’une nouvelle entreprise dont le cœur d’activité est la vente en ligne de composants électroniques, qui sont :

•	La gestion du personnel

•	La gestion des clients

•	La gestion des commandes

•	La gestion du stock

•	La gestion des statistiques

Nous avons précédemment effectué l’organisation et planification de notre projet dans le précédent livrable à travers le OBS pour représenter l’ensemble des activités nécessaires et le WBS pour la répartition des tâches. 
En ce qui concerne notre livrable, nous allons nous concentrer sur la conception et la réalisation de la solution digitale de nôtre client. Nous réaliserons la conception de la base de données (MCD, MLD). Puis, nous réaliserons la solution digitale.

## I. Conception de la base de données.

### A.	Dictionnaire de données

  Tout d’abord, nous avons commencé par réaliser le dictionnaire de données. C’est un outil nécessaire pour la construction du MCD. Il constitue la première étape de l’élaboration du MCD.

Afin d’établir le dictionnaire de données, nous avons établi une liste exhaustive de tous les éléments importants des différentes catégories de processus (La gestion du personnel, La gestion des clients, La gestion des commandes, La gestion du stock, La gestion des statistiques) ainsi que leurs fonctionnalités, en voici un aperçu :

![alt tag](https://zupimages.net/up/23/03/xgmt.png)

### B.	Création du Modèle Conceptuel de Données

  Après avoir réalisé notre dictionnaire, nous pouvons nous pencher sur la création de notre Modèle Conceptuel. Pour cela, nous avons utilisé l’outil Merise permettant de créer des tables, attributs, relations, etc… 

Ainsi, nous rassemblons les attributs de nôtre dictionnaire de données dans des entités, qui seront ici en rapport avec tous les aspects de la solution digitale des processus métiers de l’entreprise de vente de composant électronique (La gestion du personnel, La gestion des clients, La gestion des commandes, La gestion du stock, La gestion des statistiques) et qui respectent les 3 formes normales. Ainsi, nous obtenons le modèle conceptuel suivant:

![alt tag](https://zupimages.net/up/23/03/x3l9.png)

### C.	Réalisation du Modèle Logique de Données

  Le modèle logique de données consiste à décrire la structure de données utilisée sans faire référence à un langage de programmation. Il s'agit donc de préciser le type de données utilisées lors des traitements. 

Dans le but d’obtenir un modèle physique, nous nous devons d’abord de réaliser un modèle logique ayant pour but de supprimer les relations. 
Afin de transformer le modèle conceptuel de données en modèle logique de données, nous allons nous référer aux cardinalités, c’est-à-dire qu’en fonction de la cardinalité présente entre les deux entités, nous allons soit transformer la relation en table (Cas 0.N-1.N, 1.N-1.N) qui contiendra les clés primaires des entités liées à cette relation (A savoir que les clés sont à la fois clés primaires et clés étrangères). 

Ou sinon dans le cas où nous aurions comme cardinalité (0.1-1.1, 1.1-1.1, 1.N-1.1, 0.N-1.1) nous supprimons la relation et la clé primaire de la table qui présente la cardinalité (0.1, 1.N, 0.N) sera clé étrangère dans la table qui présente la cardinalité 1.1. Ainsi, nous avons le modèle logique de données suivant :

![alt tag](https://zupimages.net/up/23/03/mk1x.png)

## II. Réalisation de la solution digital

A présent, nous allons réaliser la solution digital de l'entreprise qui nous a engagé.

### A. Interface de login

![alt tag](https://zupimages.net/up/23/03/t7ab.png)

Ici, nous avons l'interface login où l'utlisateur pourra entrer son identifiant et son mot de passe pour accéder aux gestions.

### B. Interface dashboard

Après s'être identifier nous arrivons sur l'interface d'accueille Dashboard suivant :

![alt tag](https://zupimages.net/up/23/03/jnq2.png)

Ici, à votre gauche vous avez les différentes gestions de vos processus métier qui sont de boutons :

•	Gestion Personnel

•	Gestion Clients

•	Gestion Commandes

•	Gestion Stocks

•	Gestion des Statistiques

Grâce à ces boutons vous pouvez naviguer entre les gestions.

### C. Interface gestion clients

Lorsque nous appuyons sur le boutons gestion clients, nous arrivons sur l'interface gestion clients qui est la suivante :

![alt tag](https://zupimages.net/up/23/03/oqmb.png)

Ici, nous avons :

a)	Information client : 

•	Attribution id client 

•	Nom, prénom

•	Date de naissance :

*(**La date de naissance sélectionnée ne peut pas être postérieure à la date actuelle**)*

b)	Ajoute type adresse :

Possibilité choisir le type d’adresse à remplir :

•	Facturation 

•	Livraison

c)	5 boutons : 

Afficher : permet afficher le client 

Ajouter : permet ajouter le client  

Modifier : permet modifier une ou plusieurs informations du client 

Supprimer : permet de supprimer un client 

Nouveau : permet de crée un nouveau formulaire vierge 

### C. Interface gestion commandes

Lorsque nous appuyons sur le boutons gestion commande, nous arrivons sur l'interface gestion commande qui est la suivante :

![alt tag](https://zupimages.net/up/23/03/sjon.png)

Ici, nous avons :

a) Information générale : 

•	Référence commande 

•	Quantité de l’article 

•	Id du client :

*(**Si le Id client n’existe pas alors l’application propose d’ajouter un nouveau client et si oui, vous serez redigérer vers gestion client**)* 

•	Id de l’Article 

•	Id de remise : 

  -	1 pour 10 % de réduction

  -	2 pour 5 % de réduction 

  -	3 pour ne pas appliquer de réduction 
    
•	Date de livraison/d’émission :  

*(**La date d’émission ne peut pas être postérieur que celui de la date de livraison sinon celui-ci affiche une erreur**)*

b) Information paiement : 

•	Moyen paiement :  

  -	Choisir les différents moyens de paiement : carte bleue, PayPal …
  
  -	Date de paiement   
  
*(**La date paiement ne peut pas être ultérieur que celui de la date de commande sinon celui-ci affiche une erreur et il y aura aussi un message d’erreur si une référence commande entrée n’existe pas.**)*

c) Choix mode : 

Choisir les informations qu’on veut remplir 

  •	Commande 
  
  •	Date de paiement 
  
  •	Facturation 
  
  •	Article 
  
Information facturation : 

Lorsque qu’on remplit la facturation on rentre les différents moyens de paiement et il y aura un message d’erreur si une référence commande entrée n’existe pas.

  •	ID facturation 
  
  •	Numéro de service client
  
  •	Société
  
  •	Id adresse
  
  •	Adresse postale 
  
  •	Ville
  
  •	Pays 
  
  •	Code postale 

d) 5 boutons : 

Afficher : permet afficher le Choix mode 

Ajouter : permet ajouter le Choix mode 

Modifier : permet modifier une ou plusieurs informations du Choix mode 

Supprimer : permet de supprimer un Choix mode 

Nouveau : permet de crée un nouveau formulaire du Choix mode 

### C. Interface gestion statistiques

Lorsque nous appuyons sur le boutons gestion statistiques, nous arrivons sur l'interface gestion statistiques qui est la suivante :

![alt tag](https://zupimages.net/up/23/03/sjon.png)

Ici, nous avons des boutons nous permettant de calculer : 

•	Le panier moyen

•	Produits sous seuil de réapprovisionnement

•	Les 10 articles les moins vendus

•	Les 10 articles les plus vendus

•	Valeur d’Achat du Stock

•	Valeur Commercial du Stock

•	Montant total d’achat d’un client

•	Chiffre d’affaires

•	Valeur commercial (Avec Variations)
