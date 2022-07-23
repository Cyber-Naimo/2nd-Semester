#include <iostream>
using namespace std;

template <class A,class B> void Swap(A a, B b)
{
		
		cout<<"BEFORE SWAPPING:";
        cout<<"A: "<<a<<" & "<<"B: "<<b<<endl<<endl;
        A temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"AFTER SWAPPING:";
        cout<<"A: "<<a<<" & "<<"B: "<<b<<endl<<endl;
}

int main()
{
          Swap(1, 4);
          cout<<"\n\n";
          Swap("NAIMAT", "KHAN");
          cout<<"\n\n";
          Swap(4.4,1.0);
          cout<<"\n\n";
          Swap(9,8.5);
          cout<<"\n\n";
}

