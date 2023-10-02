#include<iostream>
using namespace std;
int main()
{
   // 1d array
    int arr[5];
    cout<<"enter the five elements into the array:";
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<"Element at 2nd position:"<<arr[1];

    //strigs
    string a="nandu posina";
    int len;
    len =a.size();
    cout<<"The length of the string is:"<<len;
    cout<<endl<<"1st element in the string is:"<<a[0];
    cout<<endl<<"Last element in the string is:"<<a[len-1];
    
    return 0;
}