#include<bits/stdc++.h>
using namespace std;

bool pali(struct node* head){
     node* temp=head;
     stack<int> st;

     while(temp){
        st.push(temp->data);
        temp=temp->next;
     }

     while(temp){
        int x= st.top();
        st.pop();

        if (temp->data !=i)
        return false;
        temp=temp->next;
        
     }

return true;

}

int main(){

 

    return 0;
}
