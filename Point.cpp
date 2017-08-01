
/**********************************
 ** Program Filename:Point.cpp
 ** Author: reuben youngblom
 ** Date: November 2nd 2016
 ** Description: This program creates a Point object and breaks it down into x and y coordinates.  These coordinates can be passed by reference to a distanceTo function, which will calculate the distance between them.  This file is the constructors and functions.
 ** Input:  Will take point objects in and break them down into x and y coordinates
 ** Output: Can kick back the distance between two points
 **********************************/

#include "Point.hpp"

Point::Point ()  //constructor for Point with no parameters defined
{
    setXCoord(0);  //sets x and y coordinates to zero
    setYCoord(0);
}

Point::Point (double xx, double yy)   //constructor for when parameters are defined and passed
{
    setXCoord(xx);  //passes parameters to setX and setY functions
    setYCoord(yy);
}

void Point::setXCoord (double xSet)  //function that sets passed parameter to variable xCoord
{
    xCoord = xSet;
}

double Point::getXCoord ()  //returns value in variable xCoord
{
    return xCoord;
}

void Point::setYCoord (double ySet) //function that sets passed parameter to variable yCoord
{
    yCoord = ySet;
}

double Point::getYCoord ()  //returns value in variable yCoord
{
    return yCoord;
}


double Point::distanceTo(Point & pq)  //distanceTo function.  Creates variable distance, and then sets it equal to distance formula using current xCoord and yCoord as one point, but also calls the get methods of another point passed by reference and calling get methods for that second point (so the get.xCoord and xCoord, say, would be different).  Then it returns the value of the distance formula.
{
    double distance;
    
    return distance = sqrt(pow((pq.getXCoord() - xCoord), 2) + pow((pq.getYCoord() - yCoord), 2));
}


