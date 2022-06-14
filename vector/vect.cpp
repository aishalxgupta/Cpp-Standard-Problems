#include<bits/stdc++.h>
using namespace std;

int main(){

 vector <int> arr={1};


 cout<<arr.size()<<endl;  // size == len



 arr.push_back(2);
 arr.push_back(24);



 cout<<arr.capacity()<<endl; // capacity keeps on doubling on addition of new element

 vector<int> arry(10,7); 
 for (int i=0;i<arry.size();i++){
    cout<<arry[i]<<endl;
 }

    return 0;
}
