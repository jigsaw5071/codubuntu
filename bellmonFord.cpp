#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bellmonFordAgorithm(vector<pair<int,pair<int,int>>> &G,int V,int E,int source){
vector<int> distance(V,INT_MAX);
distance[source]=0;
for(int i=0;i<V-1;++i){
for(int j=0;j<E;++j){
pair<int,pair<int,int>> node=G[j];
int u=node.first;
int v=node.second.first;
int w=node.second.second;
if(distance[v]>distance[u]+w){
distance[v]=distance[u]+w;
}
}
}
vector<int> result(distance.begin(),distance.end());
for(int j=0;j<E;++j){
pair<int,pair<int,int>> node=G[j];
int u=node.first;
int v=node.second.first;
int w=node.second.second;
if(distance[v]>distance[u]+w){
distance[v]=distance[u]+w;
}
}
bool negativeCycle=false;
for(int k=0;k<distance.size();++k){
if(distance[k]!=result[k]){
negativeCycle=true;
break;
}
}
if(negativeCycle){
cout<<"There is a negative cycle in this graph"<<endl;
}
else{
 printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, distance[i]);
}}
int main(void){
int V,E;
cin>>V>>E;
vector<pair<int,pair<int,int>>> G(E);
for(int i=0;i<E;++i){
int u,v,w;
cin>>u>>v>>w;
G[i]=make_pair(u,make_pair(v,w));
}
int S;
cin>>S;
bellmonFordAgorithm(G,V,E,S);






return 0;
}
