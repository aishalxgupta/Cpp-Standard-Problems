#include<bits/stdc++.h>
using namespace std;

unordered_map <char,int> m = {  {'{',-3}, {'[',-2}, {'(',-1}, {')',1}, {']',2}, {')',3} };




int main(){

 string s;
 cin>>s;
 stack <char> st;

 for (auto i:s){
    if (m[i] <0 ) {
        st.push(i);
    }
    else {
        if (st.empty()) cout<<"No";
        else {
            char top = st.top();
            st.pop();
            if (m[top]+ m[i] != 0  ) cout <<"No"<<endl;
        }
        

    }
 
 }
   if (!s.empty()) cout <<"No"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}

