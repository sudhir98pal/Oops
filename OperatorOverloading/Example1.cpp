/*

*/

#include<bits/stdc++.h>
using namespace std;
class co_ordinate
{

    int x;
    int y;
  co_ordinate(){}
  public:
    co_ordinate( int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    co_ordinate operator+(co_ordinate co);
    // the return type is important as addition result is of type co_ordinate only
    // first operand of + is passed by this and second operand is co.
    void display();


};
co_ordinate co_ordinate::operator+(co_ordinate co)
{

    co_ordinate ans;
    // to use declaration like this define
    // other constructor as     co_ordinate(){}
    ans.x=x+co.x;
    ans.y=y+co.y;
    return ans;
}

void co_ordinate::display()
{

    cout<<x<<" ";
    cout<<y<<endl;
}
int main()
{

co_ordinate co1(1,1),co2(2,2);
co1=co1+co2;
co1.display();
//also (co1+co2).display() gives same result






}

