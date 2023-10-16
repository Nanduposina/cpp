#include<iostream>
using namespace std;
void print_upto_n(int i,int n)
{
    if(i<1)
    {
        return ;
    }
    cout<<endl<<i;
    print_upto_n(i-1,n);//inner function recursing and decrements i
}
int main()
{
    int i,n;
    cout<<"Enter the n value:";
    cin>>n;
    print_upto_n(n,n);
    return 0;
}