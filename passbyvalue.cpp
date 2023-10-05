#include<iostream>
using namespace std;
void something(int num)
{
    cout<<"initial num value:"<<num<<endl;
    num+=20;
    cout<<"after adding 20 to num:"<<num<<endl;
}
int main()
{
    int num=100;
    something(num);
    cout<<"pass by value of num:"<<num<<endl;
    
    return 0;
}