#include<iostream>
using namespace std;
int main()
{
    int num,dup,last_digit;
    int sum=0;
    cout<<"Enter the number to check wheather armstrong number or not:";
    cin>>num;
    dup=num;
    while(num>0)
    {
        last_digit=num%10;
        sum=sum+(last_digit*last_digit*last_digit);
        num=num/10;
    }
    if(sum==dup)
    {
        cout<<"It is a palindrome";
    }
    else
    {
        cout<<"It is not a palindrome";
    }
    return 0;
}