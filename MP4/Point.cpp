#include "Point.h"
#include <iostream>

Point::Point()                            //default constructor
{
	x = 0.0;
	y = 0.0;
}

Point::Point(double xin, double yin)     //Constructor setting the x and y values from user
{
	x = xin;
	y = yin;
}

double Point::getx()                    //returning x value
{
	return x;
} 
double Point::gety()                    //returnign y value
{
	return y;
}

void Point::printxy()                  //printing out the coordinates
{
	cout << "The coordinate is " << "(" << x << ", " << y << ")";
}
void Point::printOnlyxy()
{
	cout << "(" << x << ", " << y << ")";
}

void Point::input()                    //function to gather x and y
{
	cout << "Enter the x and y coordinates: ";
	cin >> x >> y;
}

void Point::setx(double xin)           //setting x and y functions 
{
	x = xin;
}

void Point::sety(double yin)
{
	y = yin;
}
