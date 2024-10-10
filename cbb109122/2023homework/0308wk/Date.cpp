#include <iostream>
#include <string>

using namespace std;

int main()
{
  int a,b;
  string month,date;
  string Month[12] = {"january", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  cout << "Month (1-12)? ";
  cin >> a;
  cout << "Date (1-31)? ";
  cin >> b;
  month = Month[a-1];
  if( b==1 || b==21 || b==31)
  {
    date ="st";
  }
  else if(b==2 || b==22)
  {
   date ="nd"; 
  }
  else if(b==3 || b==23)
  {
   date ="rd";
  }
  else
  {
  date ="th";
  }
 


  cout << "Your input date is the "<< b << date <<" day of "<< month <<"."<<endl;
}
