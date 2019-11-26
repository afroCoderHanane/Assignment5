// create by @Abdoul-hanane Gbadamassi on 11/26/19
# pragma once
#include <iostream>
#include<fstream>
using namespace std; 
class point
{
private:
int x, y; 
public:
void print()
const; 
void set (int x, int y);
int getX(); 
int getY();
//operator overloading== prototype in Point
bool operator==(point & r1);
};
