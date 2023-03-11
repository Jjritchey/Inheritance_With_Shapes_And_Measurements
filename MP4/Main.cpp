//Justin Ritchey. 10/22/2020. MP4. Desiginig a program that will have classes for a point on a graph, a circle and a cylinder.

#include <iostream>
#include "Cylinder.h"
#include "Circle.h"
#include "Point.h"


using namespace std;


int main()
{
    Cylinder cyl;                               //variables used for testing the classes
    Circle circ;
    Point p;
    double height;
    double volume;
    double surarea;
    double rad;
    double circum;
    double area;
    double x;
    double y;

    Point point(2, 2);                         //Testing the initialization of the classes
    Circle circ2(point, 4);
    Cylinder cyl2(circ2, 5);




    cyl.input();                              //Testing the functions and classes for the Cylinder class
    cyl.setHeight(10);
    cyl.setRad(2);
    cyl.setCenter(1, 1);
    cyl.printAll();

    height = cyl.getHeight();
    cout << "Height: " << height << endl;
    volume = cyl.getVolume();
    cout << "Volume: " << volume << endl;
    surarea = cyl.getSurarea();
    cout << "Surface Area: " << surarea << endl;


    circ.input();                            //Testing the fucntions and classes for the Circle class
    circ.setRad(10);
    circ.setCenter(5, 5);

    rad = circ.getRad();
    cout << "Radius: " << rad << endl;
    p = circ.getCenter();                   //Using Point p as a test here as well
    cout << "Center point: ";
    p.printOnlyxy();
    cout << endl;
    area = circ.getArea();
    cout << "Area: " << area << endl;
    circum = circ.getCircum();
    cout << "Circumference: " << circum << endl;


    x = p.getx();                        //Tetsing the fucntions and classes for the Point class
    cout << "X is: " << x << endl;
    y = p.gety();
    cout << "Y is: " << y << endl;

    p.input();
   
    p.printxy();

    p.setx(3);
    p.sety(2);

    p.printxy();

    cout << "\n\n\n\n";

    point.printxy();                    //Testing the intitialzed variables from above.
    cout << "\n\n";
    circ.printAll();
    cout << "\n\n";
    cyl2.printAll();


}