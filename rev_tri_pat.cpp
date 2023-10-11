#include<iostream>
using namespace std;
void reverse_triangle(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void rev_num_tri(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n to print reverse triangle:";
    cin>>n;
    reverse_triangle(n);
    rev_num_tri(n);
    return 0;
}