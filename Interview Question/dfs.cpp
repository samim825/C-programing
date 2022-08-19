#include<bits/stdc++.h>
using namespace std;

void dfs(int src, vector<bool> &vis,vector<int> g[]){

    vis[src] = 1;
    cout<<src<<" ";

    for(auto x:g[src]){
        if(!vis[x]){
            dfs(x, vis,g);
        }
    }
}

int main(){
    int v, e;

    cin>>v>>e;

    vector<int> g[v];
    for(int i=0; i<e; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(x);
        g[y].push_back(y);
    }

    vector<bool> vis(v,false);
    // for(int i=0; i<v; i++){
    //     vis[i] = 0;
    // }

    dfs(0, vis, g);



}
