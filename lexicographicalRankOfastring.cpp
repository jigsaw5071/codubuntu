#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSmallerCharactersRight(string &S,int left,int right){
int result=0;
for(int i=left+1;i<=right;++i){
if(S[i]<S[left]){
result++;
}
}
return result;
}

int fact(int N){
if(N<=1){
return 1;
}
return N*fact(N-1);
}
int main(void){
string S;
cin>>S;
int length=S.length();
int mul=fact(length);
int ranking=1;
for(int i=0;i<length;++i){
mul=mul/(length-i);
int countRight=getSmallerCharactersRight(S,i,length-1);
ranking+=mul*countRight;
}
cout<<ranking;




return 0;
}
