#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isConnected(vector<list<int>> &G,int V,int E){
vector<bool> visited(V,false);
///using the BFS to test the connectivity of the graph
queue<int> Q;
Q.push(0);
while(!Q.empty()){
int front_node=Q.front();
visited[front_node]=true;
Q.pop();
list<int> L=G[front_node];
for(list<int>::iterator iter=L.begin();iter!=L.end();++iter){
if(!visited[*iter]){
Q.push(*iter);
}
}
}
for(int i=0;i<visited.size();++i){
if(!visited[i]){
return false;
}
}
return true;
}

bool CyclicUtil(vector<list<int>> &G,vector<bool> &visited,int s,int parent){
visited[s]=true;
list<int> L=G[s];
for(list<int>::iterator iter=L.begin();iter!=L.end();++iter){
if(!visited[*iter]){
if( CyclicUtil(G,visited,*iter,s)){
return true;
}}
else{
if(parent!=*iter){
return true;
}
}
}
return false;
}
bool isUnDirectedCyclic(vector<list<int>> &G,int V,int E){
vector<bool> visited(V,false);
for(int i=0;i<V;++i){
if(!visited[i]){
if(CyclicUtil(G,visited,i,-1)){
return true;
}
}
}
return false;
}
bool isTree(vector<list<int>> &G,int V,int E){
return ( !isUnDirectedCyclic(G,V,E) && isConnected(G,V,E));
}
int main(void){
int V,E;
cin>>V>>E;
vector<list<int>> G(V);
for(int i=0;i<E;++i){
int u,v;
cin>>u>>v;
G[u].push_back(v);
G[v].push_back(u);
}
cout<<isTree(G,V,E);







return 0;
}
