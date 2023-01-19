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

### B. Interface dashboard
### C. Interface gestion clients
### C. Interface gestion commandes
### C. Interface gestion statistiques
