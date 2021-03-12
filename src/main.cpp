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
	double wynik_sinus = degreemath::sinus(45);

#else
	double wynik_sinus = sin(M_PI/10);
	
#endif
	
	std::cout << wynik_sinus << std::endl;
	

	return 0;
}