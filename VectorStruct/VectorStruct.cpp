// VectorStruct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>


struct vector
{
	double x;
	double y;
	double z;
};
int main()
{

	/*vector vector1;
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
*/
	/*int george = 1;
	int sally = 2;

	if (bool(george != sally))
	{
		std::cout << "TRUE";
	}
	else
	{
		std::cout << "False";
	}

	for (int i; i < 10; i++)
	{
		std::cout << "ttteeest"; 
	}

*/
	/*int i = 100;
	while (i < 111)
	{
		std::cout << i++ << " ";
	}*/
	/*int i = 100;
	do
	{
		std::cout << i++ << " ";
	} while (i < 111);*/

	/*int age = 22;
	if (age > 21)
	{
		std::cout << "YEEESSSS";
	}
	else
	{
		std::cout << "Noooooo";
	}*/

	/*int c = 0;
	c = getche();*/


	/*char input = 'a';
	std::cin >> input;
	switch (input)
	{
		case 'y':
			std::cout << "Yeeees";
			break;
		case 'n':
			std::cout << "NOOOOOOooo";
			break;
		default:
			std::cout << " WTF?!";
			break;
	}*/
	/*int ticket = 0;
	int speed = 0;
	std::cin >> speed;

	if (speed > 55)
	{
		ticket = 1;
		std::cout << ticket << std::endl;
	}
	else 
	{
		ticket = 0;
		std::cout << ticket << std::endl;
	}*/
//
//	int one{ 1 }, two{ 2 };
//
//if (one < two && two < one +2)
//{
//	std::cout << "&&" << std::endl;
//}
//	int three;
//	three = one + two;
//	std::cout << three << std::endl;

	bool isTrue{ 0 };
	bool isTrue2{ 0 };
	//std::cout << isTrue << std::endl;
	if (isTrue == isTrue2)
	{
		std::cout << "true" << std::endl;
		bool isTrue3;
		isTrue3 = isTrue + isTrue2;
		std::cout << isTrue3 << std::endl;
	}
	else (std::cout << "False") << std::endl;


	system("pause");
    return 0;
}

