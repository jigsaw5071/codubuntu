#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// the time complexity is O(N)
// The space complexity is O(Log(N)2)
int main(void){
int T;
cin>>T;
while(T--){
 int N;
 cin>>N;
 queue<string> Q;
 Q.push("1");
 while(N--){
     string value=Q.front();
     Q.pop();
     cout<<value<<" ";
     string v1=value+"0";
     string v2=value+"1";
     Q.push(v1);
     Q.push(v2);
     
 }
 cout<<endl;
}
return 0;    
}
