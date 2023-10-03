#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age of the person:";
    cin>>age;
    if(age<18)
    {
        cout<<"Not eligible for voting";
    }
    else
    {
        cout<<"The person is eligible for voting";
    }
}
