#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i;
    cout<<"Enter the values of num1 and num2:";
    cin>>num1>>num2;
    cout<<"The common factors of num1 and num2 are:"<<endl;
    for(i=1;i<=min(num1,num2);i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}