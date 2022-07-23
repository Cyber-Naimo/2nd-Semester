#include<iostream>
using namespace std;
int main ()
{
int min=0,size=0,i=0;
cout<<"ENTER THE SIZE OF THE ARRAY GREAER THAN 1:\n";
cin>>size;
int arr[size];
cout<<"ENTER ELEMENTS OF ARRAY:\n";
for(i=0;i<size;i++)
{
	cin>>arr[i];
}
min=arr[0];			// INITIALIZING MIN ELEMENT TO 0
for(i=0;i<size;i++)		// FOR CHECKING EACH ELEMENT
{
	if(min>arr[i])	// CONDITION FOR MIN
	{
		min=arr[i];		// MIN ELEMENT
	}
}
cout<<"THE MINIMUM ELEMENT IN THE ARRAY IS:"<<min;

}


