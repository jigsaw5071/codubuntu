#include<queue>
void bfs(int s, vector<int> g[], bool vis[])
{
vis[s]=true;
queue<int> Q;
Q.push(s);
while(!Q.empty()){
    s=Q.front();
    cout<<s<<" ";
    Q.pop();
    for(vector<int>::iterator iter=g[s].begin();iter!=g[s].end();++iter){
        if(!vis[*iter]){
            vis[*iter]=true;
            Q.push(*iter);
        }
    }
    
    
}
}
