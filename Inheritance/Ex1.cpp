/*
1 : The access specifier is private by default if the derived class is a class

2 : If the derived class is a struct, then public is the default in the absence of an explicit access specifier.

3 : When the access specifier for a base class is public, all public members of the base become public members of the derived class, 
    and all protected members of the base become protected members of the derived class. In all cases, the base's private elements
    remain private to the base and are not accessible by members of the derived class.

*/
#include <iostream>
using namespace std;
class base
{
int i, j;
public:
void set(int a, int b)
{
    i=a;
    j=b;
}

void show()
{
     cout<<"i : "<<i<<endl;
     cout<<"j : "<<j<<endl;
}

};
class derived : public base  // access specifier is public
{
int k;
public:
derived(int x)
{
    k=x;
}
void showk()
{
     cout << k << "\n";
}
};
int main()
{
derived ob(3);
ob.set(1, 2); // Can access member of base as constructor of base is public and it can be accessed by derived.
ob.show(); // access member of base
ob.showk(); // uses member of derived class
return
