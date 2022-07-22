#include<bits/stdc++.h>
using namespace std;

int expo(int n, int a){

    int ans=1;
    while(n>0){
        int lastbit=(n&1);
        if (lastbit){
            ans=ans*a;
        }

        a=a*a;
        n=n>>1;
    }

    return ans;
}

int main(){

 cout<<expo(3,5); // 5*5*5

    return 0;
}
