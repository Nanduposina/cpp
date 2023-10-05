#include<iostream>
using namespace std;
void reference(string &name)
{
    cout<<"initial name :"<<name<<endl;
    name[0]='r';
    cout<<"after changing name :"<<name<<endl;
}
int main()
{
    string name="taj";
    reference(name);
    cout<<"pass by reference of name :"<<name<<endl;
    return 0;
}