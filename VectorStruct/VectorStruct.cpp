// VectorStruct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct vector
{
	double x;
	double y;
	double z;
};
int main()
{

	vector vector1;
	vector vector2;
	vector vector3;
	vector1 = { 1, 2, 3 };
	vector2 = { 4, 5, 6 };
	vector3 = { 0, 0, 0 };

	vector3.x = { vector1.x + vector2.x + vector3.x };
	vector3.y = { vector1.y + vector2.y + vector3.y };
	vector3.z = { vector1.z + vector2.z + vector3.z };

	std::cout << "Vector 1x: " << vector1.x << std::endl;
	std::cout << "Vector 1y: " << vector1.y << std::endl;
	std::cout << "Vector 1z: " << vector1.z << std::endl;
	std::cout << std::endl;
	std::cout << "Vector 2x: " << vector2.x << std::endl;
	std::cout << "Vector 2y: " << vector2.y << std::endl;
	std::cout << "Vector 2z: " << vector2.z << std::endl;
	std::cout << std::endl;
	std::cout << "Vector 3x: " << vector3.x << std::endl;
	std::cout << "Vector 3y: " << vector3.y << std::endl;
	std::cout << "Vector 3z: " << vector3.z << std::endl;
	std::cout << std::endl;



	system("pause");
    return 0;
}

