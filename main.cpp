
/*


#include <iostream>
#include <cmath>
using namespace std;

class Point

{
private:
    double xCoord;
    double yCoord;
    
public:
    
    Point ();
    Point (double, double);
    void setXCoord ( double);
    double getXCoord ();
    void setYCoord (double);
    double getYCoord ();
    double distanceTo (Point&);
    
};

Point::Point ()
{
    setXCoord(0);
    setYCoord(0);
}

Point::Point (double xx, double yy)
{
    setXCoord(xx);
    setYCoord(yy);
}

void Point::setXCoord (double xSet)
{
    xCoord = xSet;
}

double Point::getXCoord ()
{
    return xCoord;
}

void Point::setYCoord (double ySet)
{
    yCoord = ySet;
}

double Point::getYCoord ()
{
    return yCoord;
}


double Point::distanceTo(Point & pq)
{
    double distance;
    
    return distance = sqrt(pow((pq.getXCoord() - xCoord), 2) + pow((pq.getYCoord() - yCoord), 2));
}



class LineSegment

{
private:
    Point segmentEnd1;
    Point segmentEnd2;
    
public:
    LineSegment (Point, Point);
    void setEnd1 (Point);
    Point getEnd1 ();
    void setEnd2 (Point);
    Point getEnd2 ();
    double length ();
    double slope ();
    
};


LineSegment::LineSegment (Point aa, Point bb)
{
    setEnd1 (aa);
    setEnd2 (bb);
}

void LineSegment::setEnd1(Point ls1)

{
    
    segmentEnd1 = ls1;
}

void LineSegment::setEnd2(Point ls2)
{
    segmentEnd2 = ls2;
}


Point LineSegment::getEnd1()
{
    return segmentEnd1;
}

Point LineSegment::getEnd2()
{
    return segmentEnd2;
}


double LineSegment::length ()
{
    
    double length;
    
    length = segmentEnd1.distanceTo(segmentEnd2);
    
    return length;
}


double LineSegment::slope()
{
    //slope formula:  (y2-y1 / x2-x1)
    
    double sx1 = segmentEnd1.getXCoord();
    double sy1 = segmentEnd1.getYCoord();
    double sx2 = segmentEnd2.getXCoord();
    double sy2 = segmentEnd2.getYCoord();
    
    double slope = ((sy2-sy1) / (sx2-sx1));
    
    return slope;
    
}

 */
 

//#include "Point.cpp"
#include "LineSegment.hpp"

int main() {
    //main for testing
    
    //point class
    
    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);
    double dist = p1.distanceTo(p2);
    
    cout << dist << endl;
    
    
    //line class
    
    
    Point p5(4.3, 7.52);
    Point p6(-17.0, 1.5);
    LineSegment ls1(p5, p6);
    double length = ls1.length();
    double slope = ls1.slope();
    
    cout << length << endl;
    cout << slope << endl;
    
    return 0;
}

