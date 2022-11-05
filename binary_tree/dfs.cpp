#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> v[N];
bool vis[N];


void dfs(int vertex){
    cout<<vertex<<endl;
    vis[vertex]=true;

    for (auto child: v[vertex]){
        cout<<"par"<<vertex<<" child"<<child<<endl;
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


    dfs(v1);

 

    return 0;
}

