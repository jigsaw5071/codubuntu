#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void){
int N;
cin>>N;
priority_queue<int,vector<int>,greater<int>> Q;
for(int i=0;i<N;++i){
int x;
cin>>x;
Q.push(x);
}
while(!Q.empty()){
cout<<Q.top()<<" ";
Q.pop();

}




return 0;
}
