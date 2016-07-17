#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void){
int N;
cin>>N;
vector<bool> prime(N+1,true);
for(int p=2;(p*p)<=N;p++){
if(prime[p]==true){
for(int i=p*2;i<=N;i+=p){
prime[i]=false;
}
}

}
for(int j=2;j<=N;++j){
if(prime[j]==true){
cout<<j<<" ";
}
}
return 0;
}
