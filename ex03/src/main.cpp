/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:36:19 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/20 11:40:51 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iomanip>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	std::cout << CLEAR;

	Point	angleA(1.0, 1.0);
	Point	angleB(3.0, 9.0);
	Point	angleC(5.0, 2.0);
	Point	pointInside(3.0, 5.0);
	Point	otherInside(2.22681, 5.17106);
	Point	pointOutside(7.0, 9.0);
	Point	pointOnside(2.0, 5.0);
	Point	pointOnAngle(angleA);

	bool result;

	std::cout << MAG " -------------------------------------------- " << std::endl;
	std::cout << "        VALEURS DES ANGLES ET POINTS" << std::endl;
	std::cout << " -------------------------------------------- " RST << std::endl;
	std::cout << GRY "Angle A: \tx: " RST << angleA.getX() << GRY " - y: " RST << angleA.getY() <<std::endl; 
	std::cout << GRY "Angle B: \tx: " RST << angleB.getX() << GRY " - y: " RST << angleB.getY() <<std::endl; 
	std::cout << GRY "Angle C: \tx: " RST << angleC.getX() << GRY " - y: " RST << angleC.getY() <<std::endl; 
	std::cout << GRY "Point inside: \tx: " RST << pointInside.getX() << GRY " - y: " RST << pointInside.getY() <<std::endl; 
	std::cout << GRY "Point Outside: \tx: " RST << pointOutside.getX() << GRY " - y: " RST << pointOutside.getY() <<std::endl; 
	std::cout << GRY "Point Onside: \tx: " RST << pointOnside.getX() << GRY " - y: " RST << pointOnside.getY() <<std::endl; 
	std::cout << GRY "Point OnAngle: \tx: " RST << pointOnAngle.getX() << GRY " - y: " RST << pointOnAngle.getY() <<std::endl; 
	
	std::cout << std::endl << std::endl;

	std::cout << CYA " -------------------------------------------- " << std::endl;
	std::cout << "Test avec un point a l'interieur d'un triangle " <<std::endl;
	std::cout << " -------------------------------------------- " RST << std::endl;
	result = bsp(angleA, angleB, angleC, pointInside);
	if (result == true)
		std::cout << GRE "Le point est a l'interieur du triangle" RST << std::endl;
	else
		std::cout << RED "Le point n'est pas l'interieur du triangle" RST << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << CYA " -------------------------------------------- " << std::endl;
	std::cout << "Test avec un point a l'interieur d'un triangle (proche coté) " <<std::endl;
	std::cout << " -------------------------------------------- " RST << std::endl;
	result = bsp(angleA, angleB, angleC, otherInside);
	if (result == true)
		std::cout << GRE "Le point est a l'interieur du triangle" RST << std::endl;
	else
		std::cout << RED "Le point n'est pas l'interieur du triangle" RST << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << CYA " -------------------------------------------- " << std::endl;
	std::cout << "Test avec un point a l'exterieur d'un triangle"  <<std::endl;
	std::cout << " -------------------------------------------- " RST << std::endl;
	result = bsp(angleA, angleB, angleC, pointOutside);
	if (result == true)
		std::cout << GRE "Le point est a l'interieur du triangle" RST << std::endl;
	else
		std::cout << RED "Le point n'est pas l'interieur du triangle" RST << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << CYA " -------------------------------------------- " << std::endl;
	std::cout << "Test avec un point sur le coté d'un triangle :" <<std::endl;
	std::cout << " -------------------------------------------- " RST << std::endl;
	result = bsp(angleA, angleB, angleC, pointOnside);
	if (result == true)
		std::cout << GRE "Le point est a l'interieur du triangle" RST << std::endl;
	else
		std::cout << RED "Le point n'est pas l'interieur du triangle" RST << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << CYA " -------------------------------------------- " << std::endl;
	std::cout << "Test avec un point sur l'angle d'un triangle :" <<std::endl;
	std::cout << " -------------------------------------------- " RST << std::endl;
	result = bsp(angleA, angleB, angleC, pointOnAngle);
	if (result == true)
		std::cout << GRE "Le point est a l'interieur du triangle" RST << std::endl;
	else
		std::cout << RED "Le point n'est pas l'interieur du triangle" RST << std::endl;

	std::cout << std::endl << std::endl;

	return (0);
}
