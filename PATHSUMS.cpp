//codechef cookoff october
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[105];
int ans[105];
int n;
void dfs(int u,int p){
    ans[u]=(ans[p]&1)?2:1;
    for(auto child:adj[u]){
        if(child!=p){
            dfs(child,u);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=1;i<=n;i++){
            adj[i].clear();
        }
        cin>>n;
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        ans[0]=1;
        dfs(1,0);
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
//EXPLANATION: https://youtu.be/PZY7i-nfxdU
