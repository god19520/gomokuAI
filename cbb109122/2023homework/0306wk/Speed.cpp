#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a,b,ans;
  cout << "distance(m): ";
  cin >> a;
  cout << "time(min): ";
  cin >> b;
  ans = a/b;
  cout << setprecision(3);
  cout << fixed;
  cout << "speed= " << ans << " m/min" << endl;
}

