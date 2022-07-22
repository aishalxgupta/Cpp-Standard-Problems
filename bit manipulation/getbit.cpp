#include<bits/stdc++.h>
using namespace std;

int getIthbit(int n, int i){

    int add = (1<<i);
    if ((n&add)>0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

 int n=6;
 int i;
 cin>>i;

 cout<<getIthbit(n,i)<<endl;

    return 0;
}
