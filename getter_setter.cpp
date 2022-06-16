#include<bits/stdc++.h>
using namespace std;

class product{

         int id;
         
         int mrp;
         char name[100];
         int sp;
public:
 // setters
    void setmrp(int price){
        mrp=price;
    }

    
    void setSP(int price){
        sp=price;
    }

// getters
    int getmrp(){
        return mrp;
    }

     int getSP(){
        return sp;
    }

};

int main(){

 product camera;
 camera.setmrp(100);
 cout<<camera.getmrp();

    return 0;
}
