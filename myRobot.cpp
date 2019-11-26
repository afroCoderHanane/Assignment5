// create by @Abdoul-hanane Gbadamassi on 11/26/19
#include "myRobot.h"
void myRobot:: setRobot (int a, int b)
{
  currentLoc.set(a,b);
}
// function intialize robot position to (0,0) and orientation to East

void myRobot::init()
{
  currentLoc.set(0,0);
  orientation= EAST;
}
// print function
void myRobot::print() const
{
  cout<<"I am at  ";
  currentLoc.print();
  cout<<" and I am facing ";
      if (orientation==EAST)
      cout<<"EAST\n";
    else if(orientation==SOUTH)
      cout<<"Sout\n";
    else if(orientation==WEST)
    cout<<"WEST\n";
    else if(orientation==NORTH)
    cout<<"NORTH\n";

  // ofstream outfile;
  // outfile.open("outext.txt", ios::out);
  // outfile<<" and I am facing ";
  //     if (orientation==EAST)
  //     outfile<<"EAST\n";
  //   else if(orientation==SOUTH)
  //     outfile<<"Sout\n";
  //   else if(orientation==WEST)
  //   outfile<<"WEST\n";
  //   else if(orientation==NORTH)
  //   outfile<<"NORTH\n";
  // //outfile.close();

}
//function to set the new orientation
void myRobot::setOrientation(orientation_type orientation)
{
  this->orientation=orientation;
}
//function to return true if the robot can move forward
void myRobot::operator++()
{ forward();
  
}
//function to return true if the robot can move forward
void myRobot::operator++(int )
{ forward();

}
//forward
bool myRobot::forward()
{
    if(orientation==EAST)
    {
       if(currentLoc.getX()<9)
      {
      currentLoc.set(currentLoc.getX()+1,currentLoc.getY());
       return true;
      }
      else 
      {
       return false;
      }
   }
  else if (orientation==WEST)
  {
  if(currentLoc.getX()>0)
    {
   currentLoc.set(currentLoc.getX()-1, currentLoc.getY());
return true;
    }
  else 
    {
  return false;
    }
  }
else if(orientation==NORTH)
{
  if (currentLoc.getY()<9)
  {
    currentLoc.set(currentLoc.getX(),currentLoc.getY()+1);
    return true; 
  }
  else
  {
    return false;
  }
}
else if(orientation==SOUTH)
{
  if(currentLoc.getY()>0)
  {
    currentLoc.set(currentLoc.getX(),currentLoc.getY()-1);
    return true;
  }
  else
  {
    return false;
  }
}
return false;
}


// turn clocewise if the robot reaches the wall
void myRobot::turnCW()
{
    if(orientation==EAST)
    orientation=SOUTH;
    else if(orientation==SOUTH)
    orientation=WEST;
    else if(orientation==WEST)
    orientation=NORTH;
    else if(orientation==NORTH)
    orientation=EAST;

}
//turn anticlockwise if the robot reach the wall
void myRobot::turnAntiCW()
{
  if(orientation==EAST)
   orientation=NORTH;
  else if(orientation==NORTH)
   orientation=WEST;
  else if(orientation==WEST)
   orientation=SOUTH;
  else if (orientation==SOUTH)
   orientation=EAST;
}
//return true if the north end is reach
bool myRobot::northEnd()
{
  if(currentLoc.getY()==9)
   return true;
  else 
   return false;
}
//return true if the south end is reach
bool myRobot:: southEnd()
{
  if(currentLoc.getY()==0)
   return true;
  else 
   return false;
}
//return true if the east end is reach
bool myRobot::eastEnd()
{
  if(currentLoc.getX()==9)
   return true;
  else
   return false;
}
//return true if the west end is reach
bool myRobot::westEnd()
{
  if(currentLoc.getX()==0)
   return true;
  else
   return false;
}
//return true if 
bool myRobot::zag()
{
  if(eastEnd())
  {
    turnAntiCW();
    forward();
    turnAntiCW();
    return true;
  }
  else
   return false;
}
bool myRobot::zig()
{
  if(westEnd())
  {
    turnCW();
    forward();
    turnCW();
    return true;
  }
  else 
    return false;
}
int myRobot:: getX()
{
  return currentLoc.getX();
}
int myRobot:: getY()
{
  return currentLoc.getY();
}

//reverse
bool myRobot::reverse()
{
    if(orientation==EAST)
    {
       if(currentLoc.getX()<9)
      {
      currentLoc.set(currentLoc.getX()-1,currentLoc.getY());
       return true;
      }
      else 
      {
       return false;
      }
   }
  else if (orientation==WEST)
  {
  if(currentLoc.getX()>0)
    {
   currentLoc.set(currentLoc.getX()+1, currentLoc.getY());
return true;
    }
  else 
    {
  return false;
    }
  }
else if(orientation==NORTH)
{
  if (currentLoc.getY()<9)
  {
    currentLoc.set(currentLoc.getX(),currentLoc.getY()-1);
    return true; 
  }
  else
  {
    return false;
  }
}
else if(orientation==SOUTH)
{
  if(currentLoc.getY()>0)
  {
    currentLoc.set(currentLoc.getX(),currentLoc.getY()+1);
    return true;
  }
  else
  {
    return false;
  }
}
return false;
}
//overloading  -- operator
void myRobot::operator--(int)
{
  reverse();
}
//overloading  - operator
float myRobot:: operator-( myRobot & r2)
{
  int c= currentLoc.getX()-r2.getX();
  int d = currentLoc.getY()-r2.getY();
  return sqrt(pow(c,2)+pow(d,2));
}
bool myRobot :: operator==( myRobot & r1)
{
  if(this->getX()==r1.getX()&& this->getY()==r1.getY())
  return true;
  else
  return false;
}
