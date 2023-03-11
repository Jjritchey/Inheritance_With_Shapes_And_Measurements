#include "Cylinder.h"
#include <cmath>
#include <iostream>

Cylinder::Cylinder()                      //default constructor sets everything to 0. Circle value is already initalzied to 0
{
	height = 0;
	volume = 0;
	surarea = 0;
}

Cylinder::Cylinder(Circle &b, double h)    //constrcutor when circle is given and the height
{
	height = h;
	base = b;
	volume = pow(base.getRad(), 2) * pi * height;              //sets volume and surface area with the given circle radius and height
	surarea = 2 * pi * base.getRad() * height + 2 * pi * pow(base.getRad(), 2);
}

void Cylinder::input()                     //function to gather circle value and height from the user
{
	base.input();
	cout << "Enter height of the Cylinder: ";
	cin >> height;

	volume = pow(base.getRad(), 2) * pi * height;        //sets volume and surface area with the given values
	surarea = 2 * pi * base.getRad() * height + 2 * pi * pow(base.getRad(), 2);

}

void Cylinder::printHeight()               //print fucntions
{
	cout << "The height is: " << height << endl;
}
void Cylinder::printVolume()
{
	cout << "The Volume is: " << volume << endl;
}
void Cylinder::printSurarea()
{
	cout << "The Surface Area is: " << surarea << endl;
}
void Cylinder::printAll()
{
	base.printAll();
	printHeight();
	printVolume();
	printSurarea();
}
double Cylinder::getHeight()              //returns the values of the variables
{
	return height;
}
double Cylinder::getVolume()
{
	return volume;
}
double Cylinder::getSurarea()
{
	return surarea;
}
void Cylinder::setHeight(double h)        //sets the values of height, radius and center and updates the volume and surface area where needed
{
	height = h;

	volume = pow(base.getRad(), 2) * pi * height;
	surarea = 2 * pi * base.getRad() * height + 2 * pi * pow(base.getRad(), 2);
}
void Cylinder::setRad(double r)
{
	base.setRad(r);

	volume = pow(base.getRad(), 2) * pi * height;
	surarea = 2 * pi * base.getRad() * height + 2 * pi * pow(base.getRad(), 2);
}
void Cylinder::setCenter(double xin, double yin)
{
	base.setCenter(xin, yin);

}
Cylinder Cylinder::operator=(const Cylinder& r)         //sets ones cylinder equal to another
{
	base = r.base;
	height = r.height;
	volume = r.volume;
	surarea = r.surarea;
	
	return *this;
}