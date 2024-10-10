#include <iostream>
using namespace std;

class Student
{
	public:
	char name[20];
	char ID[11];
	double hkscore[5];
	double midscore;
	double finalscore;
	double sg;

	double calculateScore(double[],double,double);
	void showinfo();
};
