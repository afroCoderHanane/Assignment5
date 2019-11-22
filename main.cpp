// Abdoul hanane Gbadamassi
//ID : 23741874
//Fall 2019 CSC 211H
//Submission: 10/29/19
//Prof: Dr. Azhar


#include <iostream> 
using namespace std;
#include "world.h"
#include"myRobot.h"
#include<string>
#include<fstream>

 
int x;
int y;


int main() 
{
   
world w;// world object
  int i = 0; //initiator
  // ofstream outfile;
  // outfile.open("outext.txt", ios::out);

  // loop to get coins location and store them in a point
  while (i < 3 )
  {      
    cout << "Enter coins X value and Y value: " << endl; 
    //fout << "Enter X value and Y value: " << endl;
    // infile inputX;
    // inputX.open("xdata.txt", ios::in);
    // inputX>>x;
    // inputX.close();
    // infile inputY;
    // inputY.open("ydata.txt", ios::in);
    // inputY>>y;
    // inputY.close();
    cin >> x >> y;
    cout<<"----------------------------------"<<endl;
   // outfile<<"----------------------------------"<<endl;
  if(x > -1 && y > -1 && x < 10 && y < 10)
  { 
    w.set(i, x, y);
    i++;
  }
  else
    {
    //outfile << "Error!" << endl;
    cout<<"Error!" << endl;

    }
 }
    cout<< "Points are = ";
//print the point
   w.print();
cout << endl; 
cout << endl; 
// outfile << endl; 
// outfile << endl; 
// robot object
myRobot r;
 // robot call to initialize direction and point  
r.init();
r.print();

//r.operator++(r);
    int coinNum=0;
    int moveCount =0;
// loop to check if the coins are not found within the limit of the code 
 while (coinNum < 3 && moveCount<100)
  {
for (int i =0; i<3; i++)
{
int rX = r.getX();
int rY = r.getY();

int coinX = w.getCoin(i).getX();
int coinY = w.getCoin(i).getY();
//statement to check if the coins are found
if (rX == coinX && rY == coinY) 
{
coinNum++;
cout << "I found the coin num: "<< coinNum <<"! I’m gonna be rich! Yippee!" << endl;
// outfile << "I found the coin num: "<< coinNum <<"! I’m gonna be rich! Yippee!" << endl;

}

}
//r.forward();
moveCount++;
r++;
// reverse overloading call
//r--;
myRobot r1;
r1.setRobot(8,0);
r1--;
myRobot r2;
r2.setRobot(3,0);
if (r==r2||r == r1 )// == overloading
{
cout<< endl;
cout<<"The two robots are at the same location"<<endl;
cout<<endl;
}

r.zag();
r.zig();
r.print();
//distance r-r1
cout << "distance between robots is " << r-r1<< endl;

  }
  //print the number of moves made by robot
  cout<<"----------------------------------------"<<endl;
    cout<<"I made "<<moveCount<<" moves"<<endl;
    cout<<"---------------------------------------"<<endl;
   
  
  return 0;  
} 





