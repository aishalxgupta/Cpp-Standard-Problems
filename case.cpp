#include<bits/stdc++.h>
using namespace std;
int main(){

   string s;
   cin>>s;
   cout<<"a"-"A"<<endl;
   cout<<'a'-'A'<<endl;

   for (int i=0;i<s.length();i++){
       s[i] -=32;
       cout<<s[i];
   }
   
cout<<"\n";
   // method 2
   transform(s.begin(), s.end(), s.begin(), ::toupper);

   cout<<s;
    return 0;
}