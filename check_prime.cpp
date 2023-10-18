#include<iostream>
using namespace std;
void prime(int num)
{
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count==2)
    {
        cout<<num<<" is a prime number";
    }
    else
    {
        cout<<num<<" is not a prime number";
    }
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    prime(num);
    return 0;
}