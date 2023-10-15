#include<bits/stdc++.h>
using namespace std;
void print_name(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"Nandu"<<endl;
    print_name(i+1,n);
}
int main()
{
    int n,i;
    cout<<"Enter the value of n to print name n times:";
    cin>>n;
    print_name(1,n);
}