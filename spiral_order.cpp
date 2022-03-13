#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
      // r_s=row start , r_e= row end and ..
      int r_s=0,r_e=n-1,c_s=0,c_e=m-1;
while(r_s<=r_e && c_s<=c_e){

    
      for (int i=c_s;i<=c_e;i++){     // for first row
          cout<<arr[r_s][i]<<" ";
      } 
       r_s++;

       for (int i=r_s;i<=r_e;i++){
           cout<<arr[i][c_e]<<" ";   // for last column
       }
       c_e--;

        
      for (int i=c_e;i>=c_s;i--){
          cout<<arr[r_e][i]<<" ";   // last row
      } 
      r_e--;

       for (int i=r_e;i>=r_s;i--){
           cout<<arr[i][c_s]<<" ";    // first column
       }
       c_s++;
}
   
    return 0;
}