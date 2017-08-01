
/**********************************
 ** Program Filename:Point.hpp
 ** Author: reuben youngblom
 ** Date: November 2nd 2016
 ** Description:  This program creates a Point object and breaks it down into x and y coordinates.  These coordinates can be passed by reference to a distanceTo function, which will calculate the distance between them.  This file is the class definition and prototypes.
 ** Input: No real input for a header file.  Contains class definition
 ** Output: No real output, this is just class definitions
 **********************************/


#include <iostream>
#include <cmath>
using namespace std;

class Point  //class definition

{
private:  //private members
    double xCoord;  //creates double for storing xCoordinate
    double yCoord;  //creates double for storing xCoordinate
    
public:  //public members
    
    Point ();  //constructor for no parameters
    Point (double, double);  //prototype for double parameters
    void setXCoord (double);  //prototype for set X, takes a double
    double getXCoord ();  //prototype for get X, will kick back a double
    void setYCoord (double);  //prototype for set Y, takes a double
    double getYCoord ();  //prototype for get Y, can kick back a double
    double distanceTo (Point&);  //prototype for distanceTo, takes a point by reference and will kick back the distance between that point and the point that is currently stored in X/Y variables above
    
};
