#include <iostream>
using namespace std;
#include "Swap.h"

int main()
{
   int x,y;
   cout << "Please input two numbers: ";
   cin >> x;
   cin >> y;
   show2Numbers(x,y);
   swap (x, y);
   show2Numbers(x,y);
}
