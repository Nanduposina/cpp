#include<iostream>
using namespace std;

void sum(int num1,int num2)
{
    int result=num1+num2;
    cout<<endl<<"the addition is :"<<result;
}
void sub(int num1,int num2)
{
    int result=num1-num2;
    cout<<endl<<"the subtraction is :"<<result;
}
void mul(int num1,int num2)
{
    int result=num1*num2;
    cout<<endl<<"the multiplication is :"<<result;
}
void divi(int num1,int num2)
{
    int result=num1/num2;
    cout<<endl<<"the division is :"<<result;
}
int main()
{
    int num1,num2;
    cout<<"Enter the num1 and num2 values:";
    cin>>num1>>num2;
    sum(num1,num2);
    sub(num1,num2);
    mul(num1,num2);
    divi(num1,num2);
    return 0;
}