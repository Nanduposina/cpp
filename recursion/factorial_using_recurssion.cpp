#include<iostream>
using namespace std;
int rec_factorial(int n)
{
    if(n==0)  
    {
        return 0;//when n becomes 0 then loop returns back.
    }
    return n + rec_factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"factorial of "<<n<<" is: "<<rec_factorial(n);
    return 0;
}