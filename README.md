<img src= "git_utils/banner.png" width= 100%>

<br>

---

<br>

<details>
<summary>FRENCH VERSION</summary>

## Exercice 00 - Mon premier canon

<details>
  <summary>Afficher/Masquer</summary>

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

</details>

<br>

## Exercice 01 - Premier pas vers une classe utile

<details>
  <summary>Afficher/Masquer</summary>

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

</details>

<br>

## Exercice 02 - Maintenant, on peut parler

<details>
  <summary>Afficher/Masquer</summary>

Cet exercice enrichit davantage la classe Fixed introduite dans les exercices précédents en ajoutant la surcharge des opérateurs de comparaison, des opérateurs arithmétiques, ainsi que des opérateurs d'incrémentation et de décrémentation. De plus, des fonctions membres statiques sont introduites pour fournir des fonctionnalités de comparaison avancées entre deux nombres à virgule fixe.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP02/tree/main/ex02)

#### Surcharge des opérateurs

###### Opérateurs de comparaison

- ```>``` : Compare si un Fixed est supérieur à un autre.
- ```<``` : Compare si un Fixed est inférieur à un autre.
- ```>=``` : Compare si un Fixed est supérieur ou égal à un autre.
- ```<=``` : Compare si un Fixed est inférieur ou égal à un autre.
- ```==``` : Vérifie l'égalité entre deux Fixed.
- ```!=``` : Vérifie la non-égalité entre deux Fixed.

###### Opérateurs arithmétiques

- ```+``` : Additionne deux Fixed.
- ```-``` : Soustrait un Fixed d'un autre.
- ```*``` : Multiplie deux Fixed.
- ```/``` : Divise un Fixed par un autre.

###### Opérateurs d'incrémentation et de décrémentation

- ```++``` (pré-incrémentation) : Incrémente la valeur d'un Fixed d'une unité avant l'utilisation de la valeur.
- ```--``` (pré-décrémentation) : Décrémente la valeur d'un Fixed d'une unité avant l'utilisation de la valeur.
- ```++``` (post-incrémentation) : Incrémente la valeur d'un Fixed d'une unité après l'utilisation de la valeur.
- ```--``` (post-décrémentation) : Décrémente la valeur d'un Fixed d'une unité après l'utilisation de la valeur.

##### Fonctions membres publiques statiques

- ```min```: Retourne le plus petit des deux nombres à virgule fixe passés en paramètres. Deux versions sont fournies, une pour les références non-constantes et une pour les références constantes.
- ```max```: Retourne le plus grand des deux nombres à virgule fixe passés en paramètres. De même, deux versions sont disponibles pour gérer les références non-constantes et constantes.

</details>

<br>

## Exercice 03 - BSP (Bonus)

<details>
  <summary>Afficher/Masquer</summary>

L'objectif cette fois-ci est d'implémenter une fonction bsp qui vérifie si un point est situé à l'intérieur d'un triangle défini dans un espace 2D, en utilisant la classe Fixed pour une représentation précise des coordonnées.

> Lien utile [GeoGebra](https://www.geogebra.org/geometry?lang=fr) pour la représentation graphique du triangle et des points.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP02/tree/main/ex03)

##### Classe Point

Premièrement, une classe Point est créée pour représenter un point en 2D avec les coordonnées x et y de type ```Fixed```.

###### Membres privés

- ```Fixed const _x```: Coordonnée X du point, constante.
- ```Fixed const _y```: Coordonnée Y du point, constante.

###### Membres publics

- Constructeur par défaut : Initialise x et y à 0.
- Constructeur avec deux flottants : Prend deux flottants en paramètres pour initialiser x et y.
- Constructeur de recopie : Permet la copie d'un objet Point.
- Opérateur d'affectation : Affecte les valeurs d'un Point à un autre.
	- **/!\ Notez que l'implémentation originale selon le sujet pour cet opérateur soulève une problématique avec les membres constants !!**
- Destructeur : Détruit l'objet Point.
- ```getX()```: Retourne la coordonnée X.
- ```getY()```: Retourne la coordonnée Y.

##### Fonction bsp

La fonction ```bsp(Point const a, Point const b, Point const c, Point const point)``` détermine si le point est à l'intérieur du triangle formé par a, b, et c.

- Paramètres : Les sommets a, b, c du triangle, et le point à vérifier.
- Retour : ```True``` si le point est à l'intérieur du triangle, ```False``` dans le cas contraire (y compris sur les côtés ou les sommets du triangle).

###### Logique de bsp

 La fonction utilise le principe de la détermination du signe des aires formées par le point et les sommets du triangle pour conclure sur la position du point :

- Calcul des signes : Utilise une fonction auxiliaire sign pour comparer les orientations des triangles formés par le point avec chaque paire de sommets du triangle principal.

- Évaluation : Le point est à l'intérieur si et seulement si il partage la même orientation par rapport à chaque côté du triangle.

#### Points importants et problématiques

- Assignation et Constantes : Vous avez identifié une problématique dans l'assignation aux membres constants de Point. Une solution serait d'omettre l'opérateur d'affectation pour la classe Point, vu que les attributs sont constants et initialisés à la construction.
- Précision : L'utilisation de la classe Fixed assure une gestion précise des opérations arithmétiques et des comparaisons, cruciale pour l'exactitude des vérifications géométriques.

</details>

</details>

<br>

---

<br>

<details>
<summary>ENGLISH VERSION</summary>

## Exercise 00 - My First Canon

<details>
	<summary>Show/Hide</summary>

This exercise introduces the concept of fixed-point numbers, a data type absent from the scalar types of most programming languages, but which offers a balance between performance, accuracy, range, and precision. You are invited to create a C++ class to represent a fixed-point number, adhering to the canonical form and implementing the following features:

##### Private Members:

- An integer to store the value of the fixed-point number.
- A static constant integer to store the number of bits of the fractional part, fixed at 8.

##### Public Members:

- A default constructor that initializes the value of the fixed-point number to 0.
- A copy constructor.
- An assignment operator overload.
- A destructor.
- ```getRawBits```: Returns the value of the fixed-point number without converting it.
- ```setRawBits```: Initializes the value of the fixed-point number with the one passed as a parameter.

### My Implementation

[Link here](https://github.com/aceyzz/CPP02/tree/main/ex00)

The ```Fixed``` class was implemented to represent a fixed-point number with the given specifications.

- Default constructor: Displays a message when called and initializes the value of the number to 0.
- Copy constructor: Copies the value of the fixed-point number from an existing ```Fixed``` object.
- Assignment operator: Assigns the value of one ```Fixed``` object to another.
- Destructor: Displays a message upon destruction.
- ```getRawBits```: Displays a message when called and returns the value of the fixed-point number.
- ```setRawBits```: Displays a message when called and modifies the value of the fixed-point number.

Console color management and screen clearing are used to improve the readability of status messages. The main program demonstrates the creation of ```Fixed``` objects, the use of constructors, the assignment operator, as well as the ```getRawBits``` and ```setRawBits``` methods.

</details>

<br>

## Exercise 01 - First Steps Towards a Useful Class

<details>
	<summary>Show/Hide</summary>

This exercise aims to enhance the ```Fixed``` class introduced in the previous exercise by adding new features to make it more useful. The goal is to allow the class to represent fixed-point numbers, not only with the value 0.0 but also with integer and floating-point values converted to fixed-point.

##### Private Members:
- int _value: An integer to store the value of the fixed-point number.
- static const int _bits = 8: A static constant integer to store the number of bits of the fractional part.

##### Public Members:
- Constructors:
	- A default constructor that initializes the value to 0.
	- A constructor taking a constant integer as a parameter to convert this integer to fixed-point.
	- A constructor taking a constant float as a parameter to convert this float to fixed-point.
	- A copy constructor.
- Assignment operator.
- Destructor.
- ```getRawBits```: Returns the value of the fixed-point number without converting it.
- ```setRawBits```: Initializes the value of the fixed-point number with the one passed as a parameter.
- ```toFloat```: Converts the fixed-point value to a floating-point number.
- ```toInt```: Converts the fixed-point value to an integer.
- Insertion operator overload (```<<```): Inserts a floating-point representation of the fixed-point number into the output stream.

### My Implementation

[Link here](https://github.com/aceyzz/CPP02/tree/main/ex01)

The constructors convert integer and floating-point values to fixed-point by multiplying or dividing by ```2^_bits``` (8 in this case), allowing for precise representation of fixed-point numbers.

```toFloat``` converts the stored fixed-point value to a floating-point number by performing the inverse operation, and ```toInt``` rounds this value to the nearest integer.

The ```<<``` operator overload facilitates the display of ```Fixed``` objects.

```getRawBits``` and ```setRawBits``` allow retrieving and setting the fixed-point value, respectively, without conversion. This implementation promotes flexible management of fixed-point numbers, offering a new dimension to number manipulation within the project.

The enhanced ```Fixed``` class demonstrates its utility through a test program that converts various values between integer, floating-point, and fixed-point representations, illustrating the versatility and precision of the conversions performed by the class.

</details>

<br>

## Exercise 02 - Now We Can Talk

<details>
	<summary>Show/Hide</summary>

This exercise further enriches the ```Fixed``` class introduced in the previous exercises by adding operator overloads for comparison, arithmetic, as well as increment and decrement operators. Additionally, static member functions are introduced to provide advanced comparison features between two fixed-point numbers.

### My Implementation

[Link here](https://github.com/aceyzz/CPP02/tree/main/ex02)

#### Operator Overloads

###### Comparison Operators

- ```>```: Compares if one ```Fixed``` is greater than another.
- ```<```: Compares if one ```Fixed``` is less than another.
- ```>=```: Compares if one ```Fixed``` is greater than or equal to another.
- ```<=```: Compares if one ```Fixed``` is less than or equal to another.
- ```==```: Checks equality between two ```Fixed``` objects.
- ```!=```: Checks inequality between two ```Fixed``` objects.

###### Arithmetic Operators

- ```+```: Adds two ```Fixed``` objects.
- ```-```: Subtracts one ```Fixed``` from another.
- ```*```: Multiplies two ```Fixed``` objects.
- ```/```: Divides one ```Fixed``` by another.

###### Increment and Decrement Operators

- ```++``` (pre-increment): Increments the value of a ```Fixed``` by one unit before using the value.
- ```--``` (pre-decrement): Decrements the value of a ```Fixed``` by one unit before using the value.
- ```++``` (post-increment): Increments the value of a ```Fixed``` by one unit after using the value.
- ```--``` (post-decrement): Decrements the value of a ```Fixed``` by one unit after using the value.

##### Public Static Member Functions

- ```min```: Returns the smaller of the two fixed-point numbers passed as parameters. Two versions are provided, one for non-constant references and one for constant references.
- ```max```: Returns the larger of the two fixed-point numbers passed as parameters. Similarly, two versions are available to handle non-constant and constant references.

</details>

<br>

## Exercise 03 - BSP (Bonus)

<details>
	<summary>Show/Hide</summary>

The goal this time is to implement a ```bsp``` function that checks whether a point is located inside a triangle defined in a 2D space, using the ```Fixed``` class for precise representation of coordinates.

> Useful link [GeoGebra](https://www.geogebra.org/geometry?lang=en) for graphical representation of the triangle and points.

### My Implementation

[Link here](https://github.com/aceyzz/CPP02/tree/main/ex03)

##### Point Class

First, a ```Point``` class is created to represent a point in 2D with ```Fixed``` type coordinates.

###### Private Members

- ```Fixed const _x```: X-coordinate of the point, constant.
- ```Fixed const _y```: Y-coordinate of the point, constant.

###### Public Members

- Default constructor: Initializes x and y to 0.
- Constructor with two floats: Takes two floats as parameters to initialize x and y.
- Copy constructor: Allows copying a ```Point``` object.
- Assignment operator: Assigns the values of one ```Point``` to another.
	- **/!\ Note that the original implementation for this operator raises an issue with constant members!!**
- Destructor: Destroys the ```Point``` object.
- ```getX()```: Returns the X-coordinate.
- ```getY()```: Returns the Y-coordinate.

##### BSP Function

The ```bsp(Point const a, Point const b, Point const c, Point const point)``` function determines whether the point is inside the triangle formed by a, b, and c.

- Parameters: The vertices a, b, c of the triangle, and the point to check.
- Return: ```True``` if the point is inside the triangle, ```False``` otherwise (including on the sides or vertices of the triangle).

###### BSP Logic

The function uses the principle of determining the sign of the areas formed by the point and the vertices of the triangle to conclude the position of the point:

- Sign Calculation: Uses an auxiliary ```sign``` function to compare the orientations of the triangles formed by the point with each pair of vertices of the main triangle.

- Evaluation: The point is inside if and only if it shares the same orientation with respect to each side of the triangle.

#### Key Points and Issues

- Assignment and Constants: You identified an issue with assigning to the constant members of ```Point```. A solution would be to omit the assignment operator for the ```Point``` class, as the attributes are constant and initialized at construction.
- Precision: The use of the ```Fixed``` class ensures precise handling of arithmetic operations and comparisons, crucial for the accuracy of geometric checks.

</details>

</details>