#include <iostream>
#include "Student.h"
#include <string>
#include <cstring>
#include <cstdlib>

int main()
{
	int i,j;
	Student *stu = new Student[10];
	for(i=0;i<10;i++)
	{
		cin.get(stu[i].name,20);
		cin.get();
		cin.get(stu[i].ID,11);
		cin.get();
		for(j=0;j<5;j++)
		{
			cin >> stu[i].hkscore[j];
		}
		cin >> stu[i].midscore;
		cin >> stu[i].finalscore;
		cin.get();
		cout  << "";
		stu[i].sg = stu[i].calculateScore(stu[i].hkscore,stu[i].midscore,stu[i].finalscore);
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(stu[j].sg < stu[j+1].sg)
			{
				Student temp;
				temp = stu[j];
				stu[j]=stu[j+1];
				stu[j+1] = temp;
			}
			else if(stu[j].sg==stu[j].sg)
			{
				if(atoi(stu[j].ID) > atoi(stu[j+1].ID))
				{
					Student temp;
					temp = stu[j];
					stu[j] = stu[j+1];
					stu[j+1] = temp;
				}
			}
		}
	}

	for(i=0;i<10;i++)
	stu[i].showinfo();
	delete [] stu;
}
