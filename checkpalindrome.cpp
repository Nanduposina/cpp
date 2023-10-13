#include<iostream>
using namespace std;
int main()
{
    int n,last_digit;
    int rev=0;
    cout<<"enter the numbers:";
    cin>>n;
    int dup=n;
    while(n>0)
    {
        last_digit=n%10;//stores remainder
        n=n/10;//stores value after division
        rev=(rev*10)+last_digit;
    }
    cout<<"reverse of a number given is:"<<rev;

    if(rev==dup)
    {
        cout<<"\ngiven number is palindrome";
    }
    else
    {
        cout<<"\ngiven number is not a palindrome";
    }
    return 0;
}