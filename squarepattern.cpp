#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* "; 
        }
        cout<<endl;
    }
}
int main()
{
    int i=0;
    int j=0;
    int n;
    cout<<"enter the value of n to get square pattern :";
    cin>>n;
    pattern(n);
    return 0;
}