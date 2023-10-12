#include<iostream>
using namespace std;
void space_triangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter n value:";
    cin>>n;
    space_triangle(n);
    return 0;
}