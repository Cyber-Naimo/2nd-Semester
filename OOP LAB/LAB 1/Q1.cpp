#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
float kmp,mlp;
cout<<"ENTER THE SPEED OF VECHICLE IN KILOMETERS PER HOURS:\n";
cin>>kmp;
mlp=kmp/1.609344;
cout<<"THE SPEED IN MILES PER HOURS:"<<fixed<<setprecision(2)<<mlp;


}


