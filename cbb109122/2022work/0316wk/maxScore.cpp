#include <iostream>
using namespace std;
#include "maxScore.h"

int main()
{
  int score[10]={60,38,98,2,66,80,23,77,10,0};

  if(max(score, 10)<100)
     max(score, 10)=100;
  cout << "max score = " << max(score, 10) << endl;
  return 0;
}
