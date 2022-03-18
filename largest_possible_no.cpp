#include<bits/stdc++.h>
using namespace std;
int main(){

   string s="354612";
string s1="";
   // 654321;
//  int max1=INT_MIN;
//  for (int j=0;j<s.length();j++){
//    for (int i=0;i<s.length();i++){
//        if (s[i]<s[i+1]){
//            int temp=s[i];
//            s[i]=s[i+1];
//            s[i+1]=temp;

//        }
//        s1+=s[i];
//    }
//     }
sort(s.begin(), s.end(), greater<int>());


      cout<<s<<endl;

    return 0;
}