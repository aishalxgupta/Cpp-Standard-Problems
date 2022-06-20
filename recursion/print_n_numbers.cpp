#include<bits/stdc++.h>
using namespace std;

void dec(int n){
    if (n==1){
        cout<<"1";
    }

    else{
        cout<<n<<" ";
        dec(n-1);
    }
}

int main(){

   dec(5);

    return 0;
}
