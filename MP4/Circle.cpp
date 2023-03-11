#include "Circle.h"
#include <cmath>
#include <iostream>


Circle::Circle()                  //default constructor setting everything to 0
{
	rad = 0.0;
	area = 0.0;
	circum = 0.0;
	b.setx(0);
	b.sety(0);
}

Circle::Circle(Point bin, double radius)      //constructor for when point and radius is given
{
	rad = radius;
	b = bin;

	area = pi * (rad * rad);                  //setting area and circumference
	circum = 2 * pi * rad;
}

Circle::Circle(double radius)                 //constructor for when only radius is given
{
	rad = radius;
	b.setx(0);                                //setting center point to 0, 0
	b.sety(0);

	area = pi * (rad * rad);                  //setting area and circumference
	circum = 2 * pi * rad;
}

void Circle::input()                          //function to gather radius of the circle and center point
{
	b.input();                                //gathers center point

	cout << "Enter the circles radius: ";     //gathers radius
	cin >> rad;

	area = pi * (rad * rad);                  //updates area and circumference
	circum = 2 * pi * rad;
}

void Circle::setRad(double radius)            //function to set a radius
{
	rad = radius;

	area = pi * (rad * rad);                  //updates area and circumference with new radius
	circum = 2 * pi * rad;
}

void Circle::printRad()                       //print functions
{
	cout << "The radius is: " << rad << endl;
}

void Circle::printCircum()
{
	cout << "The circumference is: " << circum << endl;
}
void Circle::printArea()
{
	cout << "The area is: " << area << endl;
}
void Circle::printCenter()
{
	cout << "The center of the circle is: ";
	b.printOnlyxy();
	cout << endl;

}
void Circle::printAll()
{
	cout << "Here are the details of the circle: " << endl;
	printRad();
	printCircum();
	printArea();
	printCenter();
}
double Circle::getRad()                  //functions to return values
{
	return rad;
}
double Circle::getCircum()
{
	return circum;
}
double Circle::getArea()
{
	return area;
}
Point Circle::getCenter()
{
	return b;
}
Circle Circle::operator=(const Circle& r)       //operator function to set one Circle equal to another
{
	rad = r.rad;
	b = r.b;
	circum = r.circum;
	area = r.area;

	return *this;
}
void Circle::setCenter(double xin, double yin)     //function to change center point
{
	b.setx(xin);
	b.sety(yin);
}