#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;



void insert (int data,int n){
 
    node* temp1 = new node();
    temp1->data= data;
    temp1->next=NULL; 

    if (n==1){
        temp1->next=head; 
        head=temp1;
        return;
    }

    node* temp2=head;
    for (int i=0;i<n-2;i++){
      temp2 =  temp2 -> next; 
         }

 temp1 -> next = temp2->next;
 temp2 -> next = temp1;
    
}

void print(){
    node* temp = head;
    while(temp!=NULL){
        cout<< temp -> data<<" ";
        temp=temp -> next;
    }
    cout<<endl;
}


bool search(int n){
    node* temp = head;
    while(temp!=NULL){
        if (temp -> data == n){
            return true;
        }
        temp = temp -> next;
    }

    return false;
}


int main(){

    head=NULL; // empty list

insert(5,1);
insert(4,2);
insert(5,1);
insert(3,3);
// search(3);
// print();
 search( 3)? cout<<"Yes" : cout<<"No";




    return 0;
}
