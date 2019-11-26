// create by @Abdoul-hanane Gbadamassi on 11/26/19
#include <iostream>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;
#include"point.h"

class myRobot {
private:
point currentLoc;
enum orientation_type {EAST,WEST,SOUTH,NORTH};
orientation_type orientation; 


public:
void setRobot(int, int);
void init();
void print() const;
void setOrientation(orientation_type orientation);
bool forward();
bool reverse();
void turnCW();
void turnAntiCW();
bool eastEnd();
bool westEnd();
bool northEnd();
bool southEnd();
bool zag();
bool zig();
int getX();
int getY();
//operator overloading
void operator++();
void operator++(int);
void operator--();
void operator--(int);
float operator-( myRobot &);
bool operator==( myRobot & r1) ;// == overloading for robot
};