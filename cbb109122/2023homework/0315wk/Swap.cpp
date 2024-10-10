#include<iostream>

using namespace std;

int show2Numbers(int x,int y)
{
  cout << x <<", "<< y << endl;
}
int  swap(int &x, int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
  return x,y;
}
