#include <iostream>
#include <string>
#include <cstring>
using namespace std; 

int main()
{
  int i,k;
  char array[200];
  cout << "Please input a string: ";
  cin.getline(array,200);
  cout << "Capitalizing..." << endl;
  cout << "Output: ";
  k=strlen(array);
  if(array[0]>=97&&array[0]<=122)
  array[0]-=32;
  for(i=0;i<k;i++)
  {
    if(array[i]==' '&&(array[i+1]>=97&&array[i+1]<=122))
    {
      array[i+1]-=32;
    }
  }
  cout << array << endl;
  
}

