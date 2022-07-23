#include<iostream>
#include<string>
using namespace std;
void check(char arr[],int n)
{
	int flag=0;
	
	for(int i=0;i<n/2&& n!=0;i++)
	{
		if(arr[i]!=arr[n-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"\nNOT PALINDROME";
	}
	else
	{
		cout<<"\nPALINDROME";
	}
}
int main ()
{
	char arr[]={'t','o','p','o','t'};
	int n=sizeof(arr)/sizeof(arr[0]);

	
	for(int i=0;i<n;i++)
	{
		cout<<""<<arr[i];
	}
	
	check(arr,n);

}


