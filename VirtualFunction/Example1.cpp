/*
->A virtual function is a member function that is declared within a base class and redefined by a derived class
->virtual function supports run-time polymorphism
*/

#include<bits/stdc++.h>
using namespace std;
class Nandlal
{

    public:
  virtual void PrintName();

};


class Sudhir : public Nandlal
{
public:
    void PrintName();

};

class Sushil: public Nandlal
{
public:
    void PrintName();

};
void Nandlal::PrintName()
{

    cout<<"Hi I am Nandlal pal"<<endl;
}

void Sudhir::PrintName()
{

    cout<<"Hi I am Sudhir Pal"<<endl;
}

void Sushil::PrintName()
{

    cout<<"Hi I am Sushil Pal"<<endl;
}
int main()
{

Nandlal *p ,np;
Sudhir sp1;
Sushil sp2;
p=&np;
p->PrintName();
p=&sp1;
p->PrintName();
p=&sp2;
p->PrintName();







}

