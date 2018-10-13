#include<iostream>
using namespace std;
int main()
{

char arr[5],ch;
int i,j;
for(int i=1;i<=5;i++){
cin>>arr[i];
cout<<"Character in uppercase";
cout<<arr[i]<<endl;
}
cout<<"               Now conversion in lowercase       "<<endl;
for(int k=5;k>=1;k--)
{
ch=arr[k]+32;	
	cout<<"Character in lowercase is  ";
cout<<ch<<endl;
	}	
}
