#include<bits/stdc++.h>
using namespace std;

int clearbit(int n,int i ){
    int mask = ~(1<<i);
    return (mask&n);
}

int main(){
   int n=7;
   int i;
   cin>>i;
   cout<<clearbit(n,i);
 

    return 0;
}
