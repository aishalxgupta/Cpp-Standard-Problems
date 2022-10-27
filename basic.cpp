#include<bits/stdc++.h>
using namespace std;

int main(){
int x=10;
int* ptr;
int &y =x; // referring to the same bucket

ptr = &x;

cout<<ptr<<endl;
cout<<*ptr<<endl;


 

    return 0;
}
