#include <iostream>

using namespace std;

int main()
{
  int n;
  int sum=0;
  cout << "N? ";
  cin >> n;
  cout << "Perfect Numbers:";
  if(n<6)
  {
    cout << " None";
  }
  else
  {
  for(int i=1;i<=n;i++)
  {
      sum=0;
      for(int j=1;j<i;j++)
      {
        if(i%j == 0)
        {
          sum += j;
        }
      }
      if(sum == i)
      {
        cout << " "<<i;
      }
    }
  }
  cout<<endl;
}

