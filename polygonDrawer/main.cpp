#include <iostream>
#include <vector>
#include <math.h>
#include <string>

int main()
{
	const long double M_PI = 3.1415926f;
	const long double M_2PI = 6.2831852f;

	unsigned number;
	long double radius;
	long double posX;
	long double posY;

	long double pointPosX;
	long double pointPosY;


	std::cout << "please enter the shape side number (>2): ";
	std::cin >> number;
	if (number < 3) {
		std::cout << "wrong number (<3)";
		return 1;
	}

	std::cout << "please enter the shape radius (>0): ";
	std::cin >> radius;
	if (radius <= 0) {
		std::cout << "wrong radius (<=0)";
	}
	std::cout << "please enter the shape X position: ";
	std::cin >> posX;
	std::cout << "please enter the shape Y position: ";
	std::cin >> posY;

	for (size_t i = 0; i < number; i++)
	{
		pointPosX = (cos((i) * (M_2PI / number))*radius) + posX;
		pointPosY = (sin((i) * (M_2PI / number))*radius) + posY;
		std::cout << "point no" << std::to_string(i+1) << ": (" << std::to_string(pointPosX) << ", " << std::to_string(pointPosY) << "). \n";
	}

	return 0;

}