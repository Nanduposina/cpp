#include<iostream>
using namespace std;
int count=0;//declared global variable
void print(int num)
{
    if(count==num)
    {
        return;
    }
    cout<<count<<endl;
    count++;
    print(num);//function calls itsels is known as recursion
}
int main()
{
    int num;
    cout<<"Enter the num value:";
    cin>>num;
    print(num);
    return 0;
}