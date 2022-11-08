#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

class graph{
    public:
    int vis[N];
    vector<int> adj[N];

    void addEdge(int v1, int v2);

    void dfs(int vertex);
};

void graph::addEdge(int v1,int v2){

    adj[v1].push_back(v2);

}

void graph::dfs(int vertex){

    vis[vertex]=1;
    cout<<vertex<<" ";

    for (auto child: adj[vertex]){

        if(vis[child]) continue;

        dfs(child);
    }
}

int main(){

    graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
 
    // Function call
    g.dfs(2);
 

    return 0;
}
