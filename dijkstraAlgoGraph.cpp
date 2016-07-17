/// The dijkstra algorithm also uses minimum heap time complexity is O(E+V(log V))
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Compare{
public:
bool operator() (pair<int,int> x,pair<int,int> y){
return x.second > y.second;
}

};

void dijkstraAlgorithm(vector<list<pair<int,int>>> &G,int V,int E,int source){
vector<int> distance(V,INT_MAX);
priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> Q;
Q.push(make_pair(source,0));
distance[source]=0;
while(!Q.empty()){
int u=Q.top().first;
Q.pop();
list<pair<int,int>> L=G[u];
for(list<pair<int,int>>::iterator iter=L.begin();iter!=L.end();++iter){
if(distance[iter->first]>distance[u]+iter->second){
distance[iter->first]=distance[u]+iter->second;
Q.push(make_pair(iter->first,distance[iter->first]));
}
}
}
printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, distance[i]);
}
int main(void){
int V,E;
cin>>V>>E;
vector<list<pair<int,int>>> G(V);
for(int i=0;i<E;++i){
int u,v,w;
cin>>u>>v>>w;
G[u].push_back(make_pair(v,w));
G[v].push_back(make_pair(u,w));
}
int S;
cin>>S;
dijkstraAlgorithm(G,V,E,S);


return 0;
}
