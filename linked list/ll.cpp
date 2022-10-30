#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;



void insert (int data,int n){
 
    node* temp1= new node();
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
 temp2 ->next =temp1;




    
}

void print(){
    node* temp = head;
    while(temp !=NULL){ // temp->next don't use
        cout<< temp -> data<<" ";
        temp=temp -> next;
    }
    cout<<endl;
}

void reverse(){
    struct node *curr,*prev,*next;
    curr=head;
    prev=NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

bool findLoop(struct node* h){
    unordered_set<node*> s;

    while(h){
      

        if (s.find(h)!=s.end()) return true;
          s.insert(h);
        h=h->next;
    }
    return false;
}


int countLoop(struct node *h){
    struct node *temp=h;
    res=1;

    while(temp->next!=h){
        res++;
        temp=temp->next;
    }
    return res;
}


void removeDuplicates(){

    node *temp1= head;
    node *temp2;
    while(temp1!=NULL ){
        temp2= temp1;
        while(temp2->next){
                 if(temp1-> data== temp2->next->data) {
            temp2->next = temp2->next->next;
        }
        else{
            temp2=temp2->next;
        }
        }

  temp1=temp1->next;
    }
    
}

int main(){

    head=NULL; // empty list

insert(5,1);
insert(4,2);
insert(5,1);
insert(3,3);
print();
cout<<endl;
reverse();
removeDuplicates();
print();
head->next->next->next->next = head;
 if (findLoop(head))
        cout << "Loop Found";
    else
        cout << "No Loop";


    return 0;
}

