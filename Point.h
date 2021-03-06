// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
  double z;

public:
  // Constructors
  Point();                      // default constructor
  Point(double x, double y, double z);    // three-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);

  // Accessor methods
  double getX();
  double getY();
  double getZ();

  // finds the distance from another point
  double distanceTo(Point& otherPoint);
};

#endif // __point_h