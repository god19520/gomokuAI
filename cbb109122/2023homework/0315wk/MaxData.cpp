#include <iostream>
using namespace std;

void getData(int data[10])
{
  for(int i=0;i<10;i++)
  {
    cin >> data[i];
  }
}
int max(int data[10],int num=10)
{
  int max1;
  max1 = data[0];
  for(int i=0;i<num;i++)
  {
    if(max1<data[i])
    {
      max1=data[i];
    } 
  }
  return max1;  
}
