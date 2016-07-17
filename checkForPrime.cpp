#include<iostream>
#include<bits/stdc++.h>
using namespace std;
///this algorithm is used to check whether a  given number is prime or not

bool isPrime(int N){
if(N<2){
return false;
}
for(int p=2;(p*p)<=N;++p){
if(N%p==0){
return false;
}
}
return true;
}
int main(void){
int N;
cin>>N;
cout<<isPrime(N);

return 0;
}
