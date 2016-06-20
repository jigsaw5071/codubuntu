#include<iostream>
#include<bits/stdc++.h>
using namespace std;
///The time complexity is O(n^2/32)

int main(void){
    int T;
    cin>>T;
    while(T--){
     int N;
     cin>>N;
     map<int,int> M;
     M[0]=1;
     for(int i=2;i<=N;i+=2){
         M[i]=0;  
         for(int j=0;j<i;j+=2){
             M[i]+=M[j]*M[i-j-2];
         }
     }
     cout<<M[N]<<endl;
        
    }
return 0;    
}
