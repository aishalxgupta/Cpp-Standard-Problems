#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  int arr[t];
  for (int i=0;i<t;i++){
      cin>>arr[i];
  }

int s=0;
for (int j=0;j<t;j++){
  s=0;
  for (int i=j;i<t;i++){
    s+=arr[i];
    cout<<s<<endl;
  }
}

    return 0;
}