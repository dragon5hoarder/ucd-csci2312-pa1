//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double computeArea(Point &a, Point &b, Point &c);

int main(void) {
    // storage for point coordinates
    double pointX;
    double pointY;
    double pointZ;

    cout << "Hello and welcome to the triangle area calculator!" << endl;
    cout << "Please input 3 points, using coordinates x, y, and z respectively" << endl;

    // user input for each point
    cout << "Point A: " << endl;
    cin >> pointX;
    cin >> pointY;
    cin >> pointZ;
    Point A(pointX, pointY, pointZ);

    cout << "Point B: " << endl;
    cin >> pointX;
    cin >> pointY;
    cin >> pointZ;
    Point B(pointX, pointY, pointZ);

    cout << "Point C: " << endl;
    cin >> pointX;
    cin >> pointY;
    cin >> pointZ;
    Point C(pointX, pointY, pointZ);

    // displays the area of the triangle
    cout << "The area of the triangle is: " << setprecision(2) << computeArea(A, B, C) << endl;



    return 0;
}

double computeArea(Point &a, Point &b, Point &c)
{
    // holds the length of each side of the triangle
    double sideA = a.distanceTo(b);
    double sideB = b.distanceTo(c);
    double sideC = c.distanceTo(a);
    // holds the area
    double area;

    // calculates the area of the triangle
    area = sqrt((sideA + sideB + sideC) * (-sideA + sideB + sideC) * (sideA - sideB + sideC) * (sideA + sideB - sideC)) / 4;
    return area;
}
