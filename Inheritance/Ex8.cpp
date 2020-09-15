/*
Constructing base
Constructing derived
Destructing derived
Destructing base

*/

#include <iostream>
using namespace std;
class base
{
public:
base()
{
     cout << "Constructing base"<<endl;
}
~base()
{
    cout << "Destructing base"<<endl;
}
};
class derived: public base
{
public:
derived()
{
    cout << "Constructing derived\n";
}
~derived()
{
    cout << "Destructing derived\n";
}
};
int main()
{
derived ob;


return 0;

}
