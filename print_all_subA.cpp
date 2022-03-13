#include<bits/stdc++.h>
using namespace std;
int main(){

 int n;
 cin>>n;

 int arr[n];

 for (int i=0;i<n;i++){
     cin>>arr[i];
 }
int s=0;
for (int i=0;i<n;i++){       // 1st loop for starting point
    for (int j=i;j<n;j++){      // for ending point
       int s=0;
        for (int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
            s+=arr[k];
        }
        cout<<s;
        cout<<"\n";
    }
}
    return 0;
}