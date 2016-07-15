#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TopologicalSort(int v,vector<list<int>> &G,vector<bool> &visited,stack<int> &S){
visited[v]=true;
list<int> L=G[v];
for(list<int>::iterator iter=L.begin();iter!=L.end();++iter){
if(!visited[*iter]){
TopologicalSort(*iter,G,visited,S);
}
}
S.push(v);
}

int main(void){
int V,E;
cin>>V>>E;
vector<list<int>> G(V);
for(int i=0;i<E;++i){
int x,y;
cin>>x>>y;
G[x].push_back(y);
}
vector<bool> visited(V,false);
stack<int> S;
for(int i=0;i<V;++i){
if(!visited[i]){
TopologicalSort(i,G,visited,S);
}
}
while(!S.empty()){
cout<<S.top()<<" ";
S.pop();
}




return 0;
}
