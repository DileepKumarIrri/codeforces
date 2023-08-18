#include<iostream>

using namespace std;

bool ispal(string s){
      for(int i=0;i<s.length();i++)
      {
        if(s[i] != s[s.length()-1-i])
        {
            return false;
        }
      }
      return true;
}
int main(){
    string S ="aaaabbaa";
    string pal="" ;
    string sub ="";
    for(int i=0;i<S.length();i++)
    {   
        sub ="";
        for(int j=i;j<S.length();j++)

    {    sub+=S[j];
        
          if (ispal(sub) && pal.length()<sub.length())
          {
            pal = sub;
          }
    }
    }
    cout<<(pal);
}