///this algorithm is used to count the number of inversions in an array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Merge(vector<int> &V,int l,int m,int r){
vector<int> left_array(m-l+1);
vector<int> right_array(r-m);
int inv_count=0;
for(int i=0;i<left_array.size();++i){
left_array[i]=V[l+i];
}
for(int j=0;j<right_array.size();++j){
right_array[j]=V[m+1+j];
}
int i=0;
int j=0;
int k=l;
while(i!=left_array.size() && j!=right_array.size()){
if(left_array[i]<=right_array[j]){
V[k]=left_array[i];
i++;
k++;
}
else{
V[k]=right_array[j];
inv_count+=m-l+1-i;
j++;
k++;
}
}
while(i!=left_array.size()){
V[k]=left_array[i];
i++;
k++;
}
while(j!=right_array.size()){
V[k]=right_array[j];
j++;
k++;
}
return inv_count;
}

int MergeSort(vector<int> &V,int l,int r){
int inv_count=0;
if(l<r){
int mid=l+(r-l)/2;
inv_count+=MergeSort(V,l,mid);
inv_count+= MergeSort(V,mid+1,r);
inv_count+=Merge(V,l,mid,r);
}
return inv_count;
}
int main(void){
int N;
cin>>N;
vector<int> V(N);
for(int i=0;i<N;++i){
cin>>V[i];
}
cout<<MergeSort(V,0,N-1);





return 0;
}
