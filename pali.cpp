#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;

char arr[n+1];
cin>>arr;

bool flag=0;
for (int i=0;i<n;i++){
    if (arr[i] !=arr[n-i-1]){
        flag=1;
        break;
      
    }
}

if (flag==1){
      cout<<"np"<<endl;
}
 else  
cout<<"p"<<endl;
   
    return 0;
}