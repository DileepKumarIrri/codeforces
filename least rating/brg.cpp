#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   
    int count =1;
    
    string s ;
    cin>>s;
    vector<char>arr(s.length());
    for(int i=0;i<s.length();i++)
    {
        arr[i]=s[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {   
        if(arr[i]!=arr[i-1] && i>0)
        {
            count++;
        }
    }
    
    if(count%2!=0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";

}