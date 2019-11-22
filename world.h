#include<iostream>
#include<string>
using namespace std;
# include"point.h"

class world {
private:
point coins[3];

public:
void print() const;
void set(int i, int x, int y);
point getCoin(int i );
};