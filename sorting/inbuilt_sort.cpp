#include<bits/stdc++.h>
using namespace std;

int main(){

 int arr[]={1,5,77,34,23,11};
 int n= sizeof(arr)/sizeof(arr[0]);

 sort(arr,arr+n);

 for(auto x:arr){
    cout<<x<<" ";
 }

    return 0;
}
