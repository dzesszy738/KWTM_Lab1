#define _USE_MATH_DEFINES
#include"trygonometria.h"
#include<cmath>
double degreemath::sinus(double degree) {
	double rad = (degree * M_PI) / 180;
	return std::sin(rad);
}
double degreemath::cosinus(double degree) {
	double rad = (degree * M_PI) / 180;
	return std::cos(rad);
}
double degreemath::tangens(double degree) {
	double rad = (degree * M_PI) / 180;
	return std::tan(rad);
}
double degreemath::cotangens(double degree) {
	double rad = (degree * M_PI) / 180;
	return 1/(std::tan(rad));
}