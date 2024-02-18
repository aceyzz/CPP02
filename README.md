<img src= "utils/CPP02.png" width= 100%>

## Exercice 00 - Mon premier canon

Cet exercice introduit la notion de nombres à virgule fixe, un type de données absent des types scalaires de la plupart des langages de programmation, mais qui offre un équilibre entre performance, exactitude, portée et précision. Vous êtes invités à créer une classe en C++ pour représenter un nombre à virgule fixe, en respectant la forme canonique et en implémentant les fonctionnalités suivantes :

##### Membres privés :

- Un entier pour stocker la valeur du nombre à virgule fixe.
- Un entier constant statique pour stocker le nombre de bits de la partie fractionnaire, fixé à 8.

##### Membres publics :

- Un constructeur par défaut qui initialise la valeur du nombre à virgule fixe à 0.
- Un constructeur de recopie.
- Une surcharge de l’opérateur d’affectation.
- Un destructeur.
- ```getRawBits```: Retourne la valeur du nombre à virgule fixe sans la convertir.
- ```setRawBits```: Initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP02/tree/main/ex00)

La classe ```Fixed``` a été mise en œuvre pour représenter un nombre à virgule fixe avec les spécifications données.

- Constructeur par défaut : Affiche un message lors de l'appel et initialise la valeur du nombre à 0.
- Constructeur de recopie : Copie la valeur du nombre à virgule fixe d'un objet ```Fixed``` existant.
- Opérateur d'affectation : Assigne la valeur d'un objet ```Fixed``` à un autre.
- Destructeur : Affiche un message lors de sa destruction.
- ```getRawBits``` : Affiche un message lors de son appel et retourne la valeur du nombre à virgule fixe.
- ```setRawBits``` : Affiche un message lors de son appel et modifie la valeur du nombre à virgule fixe.

La gestion des couleurs dans la console et le nettoyage de l'écran sont utilisés pour améliorer la lisibilité des messages d'état. Le programme principal démontre la création d'objets ```Fixed```, l'utilisation des constructeurs, de l'opérateur d'affectation, ainsi que des méthodes getRawBits et ```setRawBits```.

<br>

## Exercice 01 - Premier pas vers une classe utile

Cet exercice vise à enrichir la classe Fixed introduite dans l'exercice précédent, en y ajoutant de nouvelles fonctionnalités pour la rendre plus utile. L'objectif est de permettre à la classe de représenter des nombres à virgule fixe, non seulement avec la valeur 0.0 mais aussi avec des valeurs entières et flottantes converties en virgule fixe.

##### Membres privés :
- int _value : Un entier pour stocker la valeur du nombre à virgule fixe.
- static const int _bits = 8 : Un entier constant statique pour stocker le nombre de bits de la partie fractionnaire.

##### Membres publics :
- Constructeurs :
	- Un constructeur par défaut qui initialise la valeur à 0.
	- Un constructeur prenant un entier constant en paramètre pour convertir cet entier en virgule fixe.
	- Un constructeur prenant un flottant constant en paramètre pour convertir ce flottant en virgule fixe.
	- Un constructeur de recopie.
- Opérateur d'affectation.
- Destructeur.
- getRawBits : Retourne la valeur du nombre à virgule fixe sans la convertir.
- setRawBits : Initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
- toFloat : Convertit la valeur en virgule fixe en nombre à virgule flottante.
- toInt : Convertit la valeur en virgule fixe en nombre entier.
- Surcharge de l’opérateur d’insertion (<<) : Insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP02/tree/main/ex01)

Les constructeurs convertissent les valeurs entières et flottantes en virgule fixe en multipliant ou divisant par ```2^_bits``` (8 dans ce cas), permettant une représentation précise des nombres à virgule fixe.

```toFloat``` convertit la valeur stockée en virgule fixe en un nombre à virgule flottante en effectuant l'opération inverse, et ```toInt``` arrondit cette valeur à l'entier le plus proche.

La surcharge de l'opérateur ```<<``` facilite l'affichage des objets ```Fixed```.

```getRawBits``` et ```setRawBits``` permettent respectivement de récupérer et de définir la valeur à virgule fixe, sans conversion. Cette implémentation favorise une gestion flexible des nombres à virgule fixe, offrant ainsi une nouvelle dimension à la manipulation des nombres dans le cadre du projet.

La classe ```Fixed``` enrichie démontre son utilité à travers un programme de test qui convertit différentes valeurs entre les représentations entières, flottantes, et à virgule fixe, illustrant la polyvalence et la précision des conversions effectuées par la classe.
