//Question - Write a program to read 2 numbers from keyboard and display the larger value on the screen.

#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    if(a>b){
        cout<<a<<"is greater";
    }
    else if(b>a){
        cout<<b<<"is greater";
         
    }
    else if(b==a){
        cout<<"both the numbers are equal";
    }
    else {
        cout<<"invalid numbers";
    }
    return 0;
}