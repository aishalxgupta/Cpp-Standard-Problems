#include<bits/stdc++.h>
using namespace std;


// 5,4,2,3,1

void insertion_sort(int arr[], int n){

    for (int i=1;i<n;i++){

        int current = arr[i];
        int prev = i-1;
        
        while(prev>=0 and arr[prev]>current){
            arr[prev+1]= arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=current;
    }
    return ;

}

int main(){

 int arr[]={1,5,3,4,7,2};

 int n = sizeof(arr)/sizeof(arr[0]);

 insertion_sort(arr,n);

 for (auto i : arr){
    cout<<i<<" ";
 }

    return 0;
}
