#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  int arr[t];
  for (int i=0;i<t;i++){
      cin>>arr[i];
  }
int maxx;

    for (int i=0;i<t;i++){
     maxx=max(maxx,arr[i]);
     cout<<maxx<<" ";
  }


    return 0;
}