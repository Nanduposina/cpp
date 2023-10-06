#include<iostream>
using namespace std;
void identify(char ch)
{
    //Prints '1' if the character is an upper case alphabet
    if(ch>='A' && ch<='Z')
    {
        cout<<"1  character is upper case alphabet"<<endl;
    }
    //Prints '0' if the character is an lower case alphabet
    else if(ch>='a' && ch<='z')
    {
        cout<<"0   character is lower case alphabet"<<endl;
    }
    //prints '-1' if the input is not a character
    else
    {
        cout<<"-1  given input is not a character"<<endl;
    }
}
int main()
{
    char ch;
    cout<<"enter any character:"<<endl;
    cin>>ch;
    identify(ch);
    return 0;
}