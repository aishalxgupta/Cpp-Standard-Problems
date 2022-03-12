#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={12,67,45,11,93,32};

    for (int j=0;j<6;j++){
        for (int i=0;i<6;i++){
            // for increasing order
           if (arr[i]>arr[i+1]){
               int temp= arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
           }
        }
    }

    for (int j=0;j<6;j++){
        cout<<arr[j]<<" ";
    }

   
    return 0;
}