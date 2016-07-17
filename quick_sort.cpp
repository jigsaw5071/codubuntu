#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int> &V,int l,int r){
int pivot=V[r];
int pIndex=l;
int i=l;
while(i!=r){
if(V[i]<=pivot){
int temp=V[pIndex];
V[pIndex]=V[i];
V[i]=temp;
pIndex+=1;
}
i++;
}
V[r]=V[pIndex];
V[pIndex]=pivot;


return pIndex;

}
void QuickSort(vector<int> &V,int l,int r){
if(l<r){
int pIndex=Partition(V,l,r);
QuickSort(V,l,pIndex-1);
QuickSort(V,pIndex+1,r);
}
}
int main(void){
int N;
cin>>N;
vector<int> V(N);
for(int i=0;i<N;++i){
cin>>V[i];
}
QuickSort(V,0,N-1);
copy(V.begin(),V.end(),ostream_iterator<int> (cout," "));
cout<<endl;








return 0;
}
