#include<bits/stdc++.h>
using namespace std;

int main(){

 stack <string> books;
 books.push("c++");
 books.push("c+");
 books.push("c");

 while(!books.empty()){
    cout<<books.top()<<endl;
    books.pop();
 }


    return 0;
}
