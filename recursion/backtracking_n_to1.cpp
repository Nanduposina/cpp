#include<iostream>
using namespace std;
//back tracking by printing numbers n to 1 
//it is done by printing the elements after inner function
void print_upto_n(int i,int n)
{
    if(i>n)
    {
        return ;
    }
    print_upto_n(i+1,n);
    cout<<endl<<i;
}
int main()
{
    int i,n;
    cout<<"Enter the n value:";
    cin>>n;
    print_upto_n(1,n);//here i=1 and i keeps incrementing until the condition terminates
    return 0;
}