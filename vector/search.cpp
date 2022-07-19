#include<bits/stdc++.h>
using namespace std;

int main(){

 vector <int> arr ={1,2,5,3};

 int key=3;

 vector <int> :: iterator it = find(arr.begin(),arr.end(),key);
 cout<<it -arr.begin()<<endl;  // address - base address
 


    return 0;
}
