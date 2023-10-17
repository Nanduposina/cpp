#include<iostream>
using namespace std;
//back tracking by printing numbers 1 to n 
//it is done by printing the elements after inner function
void print_upto_n(int i,int n)
{
    if(i<1)
    {
        return ;
    }
    print_upto_n(i-1,n);
    cout<<endl<<i;
}
int main()
{
    int i,n;
    cout<<"Enter the n value:";
    cin>>n;
    print_upto_n(n,n);
    return 0;
}