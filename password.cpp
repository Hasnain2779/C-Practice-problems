#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() 
{
    string s;
    while(cin>>s)
    {
      int count=0, a=0, b=0, c=0;
      for(int i=0; i<s.size(); i++){
      if(isdigit s[i]) a=1;
      if(isupper s[i]) b=1;
      else c=1;
      if(a and b and c) {count++; a=b=c=0;}
      }
      cout<<count<<endl;
    }
    return 0;
}
