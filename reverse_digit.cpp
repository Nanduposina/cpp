#include<iostream>
using namespace std;
void print_reverse(int n)
{
    int rev=0;
    int last_digit;
    while(n>0)
    {
        last_digit=n%10;//stores remainder
        n=n/10;//stores value after division
        rev=(rev*10)+last_digit;
    }
    cout<<"reverse of a number given is:"<<rev;
}
int main()
{
    int n;
    cout<<"enter the numbers:";
    cin>>n;
    print_reverse(n);
    return 0;
}