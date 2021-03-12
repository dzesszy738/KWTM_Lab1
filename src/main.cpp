#define _USE_MATH_DEFINES
#include"LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
	#include"Trygonometria/trygonometria.h"
#else
	#include<cmath>
#endif
#include <iostream>

int main(){


#ifdef USE_TRIGONOMETRY_DEGREE
	double wynik_sinus = degreemath::sinus(10);
	double wynik_cosinus = degreemath::cosinus(10);
	double wynik_tangens = degreemath::tangens(10);
	double wynik_cotangens = degreemath::cotangens(10);
#else
	double wynik_sinus = sin(M_PI/10);
	double wynik_cosinus = cos(M_PI / 10);
	double wynik_tangens = tan(M_PI / 10);
	double wynik_cotangens = 1/tan(M_PI / 10);
#endif
	
	std::cout << wynik_sinus << std::endl;
	std::cout << wynik_cosinus << std::endl;
	std::cout << wynik_tangens << std::endl;
	std::cout << wynik_cotangens << std::endl;

	return 0;
}