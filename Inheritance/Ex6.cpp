/*


It is possible to inherit a base class as protected. 
When this is done, all public and protected members of the base class 
become protected members of the derived class.







*/

#include <iostream>
using namespace std;
class base
{

protected:
int i, j;

public:

void setij(int a, int b)
{
    i=a;
    j=b;
}

void showij()
{
    cout<<"i : "<<i<<endl;
    cout<<"j : "<<j<<endl;

}

};


// Inherit base as protected.

class derived : protected base
{
int k;
public:
// derived may access base's i and j and setij().
void setk()
 {
    setij(10, 12);
    k = i*j;
}
// may access showij() here
void showall()
{
    cout << k << " ";
    showij();
}
};
int main()
{
derived ob;
// ob.setij(2, 3); // illegal, setij() is
// protected member of derived
ob.setk(); // OK, public member of derived
ob.showall(); // OK, public member of derived
// ob.showij(); // illegal, showij() is protected
// member of derived
return 0;
}
