#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    int x=0;
    for(int i=0 ;i<n;i++)
    {
        string s ;
        cin>>s;
        char ch =s[1];
        if( ch == '+')
        {
         x++;
        }
        else x--;
    }
    cout<<x;
}