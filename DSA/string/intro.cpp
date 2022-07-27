#include<iostream>
using namespace std;
int getlength(char name[])
{
    int count = 0 ;
    for (int i = 0; i < name[i] != '\0'; i++)
    {
        count++;
    }
    return count ;
}
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;

    cin>>name;

    cout<<"Your name is "<<endl;
    cout<<name;
    int a = getlength(name);
    cout<<"Length of your name "<<a<<endl;
 return 0;
}
