#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/// The time complexity of this algoritm is O(V+E) as discussed in the above code and ia linear as seen in topological sort
void TopologicalSort(int v,vector<list<pair<int,int>>> &G,vector<bool> &visited,stack<int> &S){
visited[v]=true;
list<pair<int,int>> L=G[v];
for(list<pair<int,int>>::iterator iter=L.begin();iter!=L.end();++iter){
if(!visited[iter->first]){
TopologicalSort(iter->first,G,visited,S);
}
}
S.push(v);
}

int main(void){
int V,E;
cin>>V>>E;
vector<list<pair<int,int>>> G(V);
for(int i=0;i<E;++i){
int u,v,w;
cin>>u>>v>>w;
G[u].push_back(make_pair(v,w));
}
int source;
cin>>source;
stack<int> S;
vector<bool> visited(V,false);
TopologicalSort(source,G,visited,S);
for(int i=0;i<V;++i){
if(!visited[i]){
TopologicalSort(i,G,visited,S);
}
}
/// till here we have got the topological sorting of the graph
vector<int> distance(V,INT_MIN);
distance[source]=0;
while(!S.empty()){
int top=S.top();
list<pair<int,int>> L=G[top];
for(list<pair<int,int>>::iterator iter=L.begin();iter!=L.end();++iter){
if(distance[iter->first]<distance[top]+iter->second){
distance[iter->first]=distance[top]+iter->second;
}
}
S.pop();
}
copy(distance.begin(),distance.end(),ostream_iterator<int>(cout," "));
cout<<endl;


return 0;
}
