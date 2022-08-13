#include<bits/stdc++.h>
using namespace std;

int main(){

 // ordered map

 unordered_map <int,int> m;

 m.insert(pair<int,int>(5,2));
 m.insert(pair<int,int>(2,2));
 m.insert(pair<int,int>(3,2));

 for (auto x:m){

    cout<<x.first<<"-"<<x.second<<endl;

 }

    return 0;
}
