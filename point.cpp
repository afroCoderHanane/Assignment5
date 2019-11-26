// create by @Abdoul-hanane Gbadamassi on 11/26/19
#include "point.h"
//print function
void point::print()const
{
  // ofstream outfile;
  // outfile.open("outext1.txt", ios::out);
  //  outfile<< "("<< x<< ","<< y<< ") \n";
   //outfile.close();
     cout << "("<< x<< ","<< y<< ") \n";
} 
//setters
void point::set(int a, int b)
{
x=a;
y=b;
}
//getters
int point::getX()
{
  return x;
}
int point::getY(){
  return y;
} 
//operator == overloading in point
bool point::operator==(point & r1)
    {
      bool status = false;

      if(this->getX()==r1.getX()&& this->getY()==r1.getY())
       {
          status = true; 
       }
       return status;

    }