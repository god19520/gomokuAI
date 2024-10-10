#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int x,ans;
    cout << "Please input the width: ";
    cin >> x;
    ans=(x-3)/2;
    for(int i=0;i<ans;i++)
    {
      cout << "*";
    }
    cout << "xyz";
    for(int i=0;i<ans;i++)
    {
      cout << "*";
    }
    if((x-3)%2==0 || x<3)
    {
    cout <<endl;
    }
    else
    {
    cout << "*" <<endl;
    }
}
