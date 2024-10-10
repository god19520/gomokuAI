#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num;
  char c;
  string number[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

  do
  {
  cout << "Number? ";
  cin >> c;
    if(isdigit(c))
    {
      num = c-'0';
      cout << number[num] <<endl;
    }
    else if(tolower(c) != 'q')
    {
     cout << "Wrong! Try Again!"<<endl;
    } 
  }
  while (tolower(c) != 'q');
    cout <<"bye"<<endl;
}

