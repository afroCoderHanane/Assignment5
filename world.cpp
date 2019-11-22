#include "world.h"
// print the location
void world::print() const 
 {
  for( int i=0;i<3;i++ )
    {
    coins[i].print();
    }
 }
  // set coins location in the world
void world::set(int i,int x,int y)
{
  coins[i].set(x,y);
}
point world:: getCoin(int i)
{
  return coins[i];
}


