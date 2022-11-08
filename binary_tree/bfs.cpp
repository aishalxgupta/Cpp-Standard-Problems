#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int vis[N];
int level[N];

vector<int> adj[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;


    while(!q.empty()){
        int curr_ver= q.front();
        q.pop();
        cout<<curr_ver<<" ";

           for(auto child: adj[curr_ver]){
        if(!vis[child]) {
            q.push(child);
            vis[child]=1;
            level[child]= level[curr_ver]+ 1;
        }
    }

    }

 cout<<endl;
}

int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    bfs(1);

    for (int i=1;i<=n;i++){
        cout<<i<<": "<<level[i]<<endl;
    }

 

    return 0;
}
