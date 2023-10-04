#include<iostream>
using namespace std;

void printName(string name)
{
    cout<<"hi"<<" "<<name<<endl;
    cout<<"How are you"<<endl;
}
int main()
{
    string name;
    cout<<"enter the first name:";
    cin>>name;
    printName(name);
    
    string name2;
    cout<<"enter the second name:";
    cin>>name2;
    printName(name2);
    
    return 0;
}