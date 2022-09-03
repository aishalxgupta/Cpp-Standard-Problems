#include<bits/stdc++.h>
using namespace std;


 void nge(int arr [5]){
    stack <int> st;
 st.push(arr[0]);

 for (int i=1;i<5;i++){

     

    while(!st.empty() && arr[i]>st.top()){
        cout<<st.top()<<" -> "<<arr[i]<<endl;
        st.pop();
            }

            st.push(arr[i]);
 }
            while (!st.empty()){
                
                 cout<<st.top()<<" -> "<<-1<<endl;
                st.pop();
            }
 

 }

int main(){

int arr[] = {11,13,4,21,3};
nge(arr);

  

    return 0;
}

