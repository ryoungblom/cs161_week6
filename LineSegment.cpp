
/**********************************
 ** Program Filename:LineSegment.cpp
 ** Author: reuben youngblom
 ** Date: November 2nd 2016
 ** Description:  This program as a whole will take line segments that are defined by their points and perform functions on them.  This file contains constuctors and functions, which are mostly designed to take the Points contained in the line and make them into endpoints. The program has the ability to calculate the length of the segment (by calling distanceTo) and the slope.
 ** Input:  takes in defined line segments, as defined by their points.
 ** Output:  has the ability to kick  back the length of the line and the slope
 **********************************/

#include "LineSegment.hpp"

LineSegment::LineSegment (Point aa, Point bb)  //constructor for lineSegment, taking in Point objects
{
    setEnd1 (aa);  //passes first point to setEnd1
    setEnd2 (bb);  //passes second Point to setEnd1
}

void LineSegment::setEnd1(Point ls1)  //constructor for setEnd1 (takes Point object)

{
    
    segmentEnd1 = ls1; //sets it equal to previously declared variable segmentEnd1
}

void LineSegment::setEnd2(Point ls2)  //constructor for setEnd2 (takes Point object)
{
    segmentEnd2 = ls2;  //sets it equal to previously declared variable segmentEnd2
}


Point LineSegment::getEnd1()  //constructor for getEnd1
{
    return segmentEnd1;  //kicks back value in variable segmentEnd1
}

Point LineSegment::getEnd2()  //constructor for getEnd2
{
    return segmentEnd2;  //kicks back value in variable segmentEnd2
}


double LineSegment::length ()  //function for length of line
{
    
    double length;  //length variable
    
    length = segmentEnd1.distanceTo(segmentEnd2);  //takes one segment end (a point) and uses distanceTo formula from Point class to take one point in the form of an endpoint and use distanceTo to calculate the distance between that point and the other endpoint (by passing that via the distanceTo call).
    
    return length;  //kicks back length as a double
}


double LineSegment::slope()  //slope function.  will return slope of a line
{
    //slope formula:  (y2-y1 / x2-x1)
    
    double sx1 = segmentEnd1.getXCoord();   //created all these new variables (for cleanliness, i chose to create new variables) and pulls xCoords and yCoords from segmentEnds
    double sy1 = segmentEnd1.getYCoord();
    double sx2 = segmentEnd2.getXCoord();
    double sy2 = segmentEnd2.getYCoord();
    
    double slope = ((sy2-sy1) / (sx2-sx1));  //plugs above variables into slope formula
    
    return slope;  //kicks slope back as a double
    
}
