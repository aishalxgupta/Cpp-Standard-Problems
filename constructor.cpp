#include<bits/stdc++.h>
using namespace std;

class product{

         int id;
         
         int mrp;
         char name[100];
         int sp;
public:
// constructor
// product(){
// cout<<"hello";
// }

product(int id, char *n,int mrp, int sp){
    this -> id = id;
    strcpy(name,n);
    this -> mrp = mrp;    //  'this' means class attributes not parameters
    this -> sp = sp;
}
};

int main(){

 product camera(2,'sony',9000,8000);

cout<<camera.getmrp();
    return 0;
}
