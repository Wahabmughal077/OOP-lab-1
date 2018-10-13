#include<iostream>
using namespace std;
int main()
{
	float a,b,c,total,percentage;
	//total marks of per subjects are 100;
	cout<<"Enter marks of english ";
	cin>>a;
	cout<<"Enter marks of urdu ";
		cin>>b;
	cout<<"Enter marks of mathematics ";
	cin>>c;
	total=a+b+c;
	cout<<"YOur obtained marks are "<<total<<endl;
	percentage=(total/300)*100;
	cout<<"your percentage is "<<percentage<<"%";
			
}
