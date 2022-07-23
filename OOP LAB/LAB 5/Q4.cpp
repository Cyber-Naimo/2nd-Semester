#include<iostream>
using namespace std;
class ACCONT{
const int ACC;
int BAL;
string securitycode;
public:
ACCONT(int ACC,int BAL,string securitycode):ACC(ACC),BAL(BAL),securitycode(securitycode){

}
void print()
{
cout<<"ACCONT number is: "<<ACC<<endl;
cout<<"ACCONT balance is: "<<BAL<<endl;
cout<<"Security code is: "<<securitycode;
}
};
int main()
{
ACCONT a(450,456,"K214540");
a.print();
}

