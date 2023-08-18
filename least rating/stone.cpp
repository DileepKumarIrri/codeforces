#include<bits/stdc++.h>


using namespace std;

int main()

{
    string n;
    int k;
    cin>>k;
    cin>>n;
     int c=0;
    for(int i=0;i<n.length()-1;i++)
    {
        
        if(n[i] == n[i+1]) c++;
    }
    cout<<c;
}