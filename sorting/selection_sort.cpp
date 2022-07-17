#include<bits/stdc++.h>
using namespace std;


 void selection_sort(int arr[],int n){
  

    for (int i=0;i<n-1;i++){
          int pos=arr[i];

          int min_pos = i;
          for (int j=i;j<n;j++){
            if (arr[j]<arr[min_pos]){
                min_pos=j;
            }

          }
          swap(arr[min_pos],arr[i]);

    }
    return ;
 }

int main(){

 int arr[]={1,5,3,4,7,2};

 int n = sizeof(arr)/sizeof(arr[0]);

 selection_sort(arr,n);

 for (auto i : arr){
    cout<<i<<" ";
 }

    return 0;
}
