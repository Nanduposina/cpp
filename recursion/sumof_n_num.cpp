#include<iostream>
using namespace std;
void print_sum(int i,int sum)
{
    if(i<1)
    {
        cout<<"The sum of numbers is :"<<sum;
        return;
    }
    print_sum(i-1,sum+i);
}
int main()
{
    int n,i,sum=0;
    cout<<"Enter the n value:";
    cin>>n;
    print_sum(n,sum);
    return 0;
}