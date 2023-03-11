#pragma once
#include <iostream>
#include "Circle.h"
#include <cmath>

using namespace std;

class Cylinder : public Circle
{
private:
	Circle base;                        //circle to be used 
	double height;                      //value for the height 
	double volume;                      //value for the volume
	double surarea;                     //value for the surface area
	const double pi = 3.14;             //constant of pi

public:
	Cylinder();                                 //default constructor for the Cylinder
	Cylinder(Circle &b, double h);              //constructor for the cylinder with a given circle and height value
	Cylinder operator=(const Cylinder& r);      //fucntion to set one cylinder equal to another

	void input();                               //function to gather Circle vlaue and height

	void printHeight();                         //print fucntions
	void printVolume();
	void printSurarea();
	void printAll();
	 
	double getHeight();                          //functions to return values
	double getVolume();
	double getSurarea();

	void setHeight(double h);                    //functions to set radius, height and center point
	void setRad(double r);
	void setCenter(double xin, double yin);
};