#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* "; 
        }
        cout<<endl;
    }
}
void num_pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j; 
        }
        cout<<endl;
    }
}
void num_pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i; 
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n to get triangle pattern :";
    cin>>n;
    pattern(n);
    num_pattern(n);
    num_pattern2(n);
    return 0;
}