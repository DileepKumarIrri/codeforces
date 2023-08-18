#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector <int> arr;
    for(int i=0;i<s.length();i+=2)
    {   
        arr.push_back(s[i]-'0');
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
        if (i<arr.size()-1)
            cout<<"+";
    }
    return 0;
}
