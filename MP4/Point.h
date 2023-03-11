#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
	double x;
	double y;

public:
	Point();                               //default constructor
	Point(double x, double y);             //Constructor for when both points are added
	
	double getx();                         //functions for returning the x and y values
	double gety();

	void printxy();                        //functions for printing out jsut the x and y and a longer version
	void printOnlyxy();

	void input();                          //fucntion for inputting the x and y values

	void setx(double xin);                 //functions for setting the x and y values seperatrly
	void sety(double yin);
};
