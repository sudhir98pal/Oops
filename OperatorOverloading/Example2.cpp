/*
OPERATOR -,=,++(prefix(++i) and postfix(i++) )
*/

#include<bits/stdc++.h>
using namespace std;
class co_ordinate
{

    int x;
    int y;
  co_ordinate(){} // needed to construct temporaries
  public:
    co_ordinate( int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    co_ordinate operator-(co_ordinate co);
    co_ordinate operator=(co_ordinate co);
     co_ordinate operator++();
        co_ordinate operator++(int);
    void display();


};
co_ordinate co_ordinate::operator-(co_ordinate co)
{

    co_ordinate ans;
    ans.x=x-co.x;
    ans.y=y-co.y;
    return ans;
}
co_ordinate co_ordinate::operator=(co_ordinate co)
{


    x=co.x;
    y=co.y;
    return *this;
}
co_ordinate co_ordinate::operator++()
{


    x++;
    y++;
    return *this;
}
co_ordinate co_ordinate::operator++(int)
{


    x++;
    y++;
    return *this;
}
void co_ordinate::display()
{

    cout<<x<<" ";
    cout<<y<<endl;
}
int main()
{

co_ordinate co1(1,1),co2(2,2);
co1.display();
// operator++() is for ++co1;
//  operator++(int) if for co1++;
co1++;
co1.display();
++co1;
co1.display();
co1=co1-co2;;
co1.display();
co1=co2;
co1.display();








}

