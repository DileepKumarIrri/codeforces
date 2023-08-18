#include<iostream>

using namespace std;

int main()
{
    string s;
   cin>> s ;
    if(96<s[0]&& s[0]<123)
    s[0] = s[0]- 32;
    cout<<s;
}