#include <iostream>

using namespace std;

int main()
{
  string num1,num2;
  int A=0,B=0,E=0;
  cout << "1st 4-digit number: ";
  cin >> num1;
  cout << "2nd 4-digit number: ";
  cin >> num2;
  for(int i=0;i<4;i++)
  {
    if(num1[i]==num2[i])
    {
      A++;
    }
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(i!=j && num1[i]==num2[j])
      {
        B++;
      }
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(num1[i]==num1[j])
      {
        E++;
        break;
      }
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(num2[i]==num2[j])
      {
        E++;
        break;
      }
    }
  }
  if( E>0 )
  {
    cout << "Duplicate number is not allowed!" <<endl;
  }
  else
  {
    cout << "The comparison result is " << A <<"A"<< B <<"B"<<endl;
  }
}

