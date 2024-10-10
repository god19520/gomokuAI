#include <iostream>
#include "Student.h"
using namespace std;

double Student::calculateScore(double hkscore[],double midscore, double finalscore)
{
	double resault;
	double avescore;
	double latecount=0,cheatcount=0;
	for(int i=0;i<5;i++)
	{
		if(hkscore[i]== -1)
		{
			latecount++;
		}
		else if(hkscore[i]== -2)
		{
			cheatcount++;
		}
		avescore += hkscore[i];
	}
	if(midscore==-1)
	{
		midscore=0;
	}
	else  if(finalscore==-1)
	{
		finalscore=0;
	}
	avescore = (avescore+latecount+(cheatcount*2))/5 - (latecount*5);
	resault = (avescore*0.4) + (midscore*0.3) + (finalscore*0.3) - (cheatcount*5);
	return resault;
}

void Student::showinfo()
{
	cout << name << " (" << ID << ") " << sg << endl;
}
