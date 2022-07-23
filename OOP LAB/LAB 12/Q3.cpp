#include<iostream>
using namespace std;
template <class A> class MyContainer 
{
  A a;
  public: 
  MyContainer(A i) 
  {
    a=i;
  } 
  void Increase()	// Increase function
  {
     a++; 
     cout<<a<<endl;
  }
};
template <> class MyContainer <char>	//explicit specializiation for only char variable
{
	char a;
   	public: 
   	MyContainer(char i) 
   	{
     	a=i;
   	}
    void UpperCase() 
	{
        a=toupper(a);	// using function of to upper
        cout<<a<<endl; 
    }
};
int main() 
{
  MyContainer<int> a1 (5); 			// for int
  MyContainer<float> a2 (0.3);		// for float
  MyContainer<char> a3 ('a'); 		// only for char
  a1.Increase();
  a2.Increase(); 
  a3.UpperCase(); 
} 

