#include "chef.h"


Chef::Chef(string s)
{
    name = s;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}


void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
/*
void Chef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}
*/
void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes Salad"<<endl;
}
