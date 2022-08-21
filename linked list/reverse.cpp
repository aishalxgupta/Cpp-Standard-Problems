#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

node* reverse( struct node* head){
    node* current,prev,next;
    current=head;
    prev=NULL;
    while(current != NULL){
        next=  current -> next;
        current -> next = prev;
        prev=current;
        current=next;

    }
    head=prev;
    return head;
}

int main(){
   


 

    return 0;
}
