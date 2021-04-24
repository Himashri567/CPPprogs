#include<iostream>
using namespace std;
void calculate(int,int,int);
int main()
{
	int h,m,s;
	cout<<"Hours?"<<endl;
	cin>>h;
	cout<<"Minutes?"<<endl;
	cin>>m;
	cout<<"Seconds?"<<endl;
	cin>>s;
	cout<<"The time is= "<<h<<":"<<m<<":"<<s<<endl;
	calculate(h,m,s);
	return 0;
}
void calculate(int hrs, int min, int sec)
{
	int tot;
	tot=(60*60*hrs)+(60*min)+sec;
	cout<<"Time in total seconds:"<<tot;
}
