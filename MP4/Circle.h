#pragma once
#include <iostream>
#include <cmath>
#include "Point.h"


using namespace std;


class Circle
{
private:
	double rad;                       //value for radius
	Point b;                          //value for the center point
	double circum;                    //value for circumference
	double area;                      //value for area
	const double pi = 3.14;           //constant for pi

public:
	Circle();                              //default circle constructor
	Circle(Point bin, double radius);      //constrctor for when a point is given and a radius
	Circle(double radius);                 //constructor for when only radius is given, sets center to 0,0
	Circle operator=(const Circle& r);     //setting = to operator for circles

	void input();                          //function for gathering radius

	void setRad(double radius);                //fucntion to set radius
	void setCenter(double xin, double yin);    //function to set center point

	void printRad();                           //function to print info
	void printCircum();
	void printArea();
	void printCenter();
	void printAll();

	double getRad();                           //functions to return info
	double getArea();
	Point getCenter();
	double getCircum();
};
