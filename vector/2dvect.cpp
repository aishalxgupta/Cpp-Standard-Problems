#include<bits/stdc++.h>
using namespace std;

int main(){

 vector< vector<int>> arr={
    {1,2,3},
    {4,5},
    {6,7,8,9},
    {10,11}
 };

 for (int i=0;i<arr.size();i++){
    for (int n : arr [i]){
        cout<< n <<" ";
    }
    cout<<endl;
 }

    return 0;
}
