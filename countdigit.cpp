#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int last_digit;
    int count=0;
    while(n>0)
    {
        last_digit=n%10;
        cout<<"last_digit:";
        cout<<last_digit<<endl;
        count =count+1;
        n=n/10;
    }
    cout<<"Total no of digits in n:"<<count;
    return 0;
}