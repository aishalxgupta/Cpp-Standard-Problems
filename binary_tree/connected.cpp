#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> v[N];
bool vis[N];
vector<int> current_cc;
vector<vector<int>> cc;


void dfs(int vertex){
    // cout<<vertex<<endl;
    vis[vertex]=true;
    current_cc.push_back(vertex);
 // cout<<"par"<<vertex<<" child"<<child<<endl;
    for (auto child: v[vertex]){
       
        if (vis[child]) continue;
        

        dfs(child);
        
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    int v1,v2;
    for(int i=0;i<9;i++){
        
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    int c=0;
    for (int i=1;i<=n;i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        c++;
    }

    for(auto x:cc){
        for (auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}
