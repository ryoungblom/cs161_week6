
/**********************************
 ** Program Filename:LineSegment.hpp
 ** Author: reuben youngblom
 ** Date: November 2nd 2016
 ** Description: This program as a whole will take line segments that are defined by their points and perform functions on them.  This file is the header, which contains the class definition and prototypes.  The program has the ability to calculate the length of the segment (by calling distanceTo) and the slope.
 ** Input: No real input for a header file.  Contains class definition
 ** Output: No real output, this is just class definitions
 **********************************/

#include "Point.hpp"

class LineSegment  //class definition

{
private:
    Point segmentEnd1;  //segmentEnd variables, to hold points of lines
    Point segmentEnd2;
    
public:
    LineSegment (Point, Point);  //prototype for LineSegment, takes two point
    void setEnd1 (Point); //prototype for setEnd1 (takes point object)
    Point getEnd1 ();   //prototype for getEnd1 (no parameters)
    void setEnd2 (Point);  //prototype for setEnd2 (takes point object)
    Point getEnd2 ();  //prototype for getEnd2 (no parameters)
    double length ();  //prototype for length.  Takes no parameters, but returns a double
    double slope ();   //prototype for slope.  Takes no parameters, but returns a double
    
};

