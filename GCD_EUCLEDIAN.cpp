#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/// this is the eucledian method for finding the HCF of two numbers
int GCD(int a,int b){
if(a==b){
return a;
}
if(a>b){
return GCD(a-b,b);
}
return GCD(a,b-a);
}

int main(void){
int a,b;
cin>>a>>b;
if(a==0 || b==0){
cout<<0<<endl;
}
else{
cout<<GCD(a,b);
}


return 0;
}
