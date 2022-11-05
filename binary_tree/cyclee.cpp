#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> v[N];
bool vis[N];

bool dfs(int vertex,int par){
    vis[vertex]=true;
    bool f=false;

    for (auto child:v[vertex]){
        if (vis[child] and child==par)continue;
        if(vis[child]) return true;

        f |= dfs(child,vertex);
    }
    return f;
}



int main(){

  int n,m;
    cin>>n>>m;

    int v1,v2;
    for(int i=0;i<m;i++){
        
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
 bool f1=0;
    for (int i=1;i<=n;i++){
        if(vis[i]) continue;
       
        if(dfs(i,0)){
            f1=1;
            break;
        }

    }
   cout<<f1<<endl;

    return 0;
}
