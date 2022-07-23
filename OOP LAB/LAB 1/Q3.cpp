#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
int first[3][3];
int second[3][3];
int i=0,j=0;
cout<<"ENTER FIRST MATRIX:";

for(i=0;i<3;i++)
{
	cout<<"\n";
	for(j=0;j<3;j++)
	{
		cin>>first[i][j];
	}
}
cout<<"ENTER SECOND MATRIX:";

for(i=0;i<3;i++)
{
	cout<<"\n";
	for(j=0;j<3;j++)
	{
		cin>>second[i][j];
	}
}
cout<<"\nFIRST MATRIX:";

for(i=0;i<3;i++)
{
	cout<<"\n";
	for(j=0;j<3;j++)
	{
		cout<<"\t"<<first[i][j];
	}
}
cout<<"\nSECOND MATRIX:";
for(i=0;i<3;i++)
{
	cout<<"\n";
	for(j=0;j<3;j++)
	{
		cout<<"\t"<<second[i][j];
	}
}
cout<<"\nRESULT MATRIX:\n";
for(i=0;i<3;i++)
{
	cout<<"\n";
	for(j=0;j<3;j++)
	{
		cout<<"\t"<<first[i][j]+second[i][j];
	}
}
getch ();

}


