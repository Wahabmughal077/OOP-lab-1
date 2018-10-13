#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,qaud1,qaud2;
cout<<"enter value of a....";
cin>>a;
cout<<"enter value of b....";
cin>>b;
cout<<"enter value of c....";
cin>>c;
qaud1=(-b+sqrt(b*b-4*a*c))/(2*a);
cout<<"the positive Qauadratic value is....";
cout<<qaud1<<endl;
qaud2=(-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"the negative Quadratic value is....";
cout<<qaud2<<endl;
return 0;
}

