#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &V,int l,int m ,int r){
vector<int> left_array(m-l+1);
vector<int> right_array(r-m);
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
if(left_array[i]<right_array[j]){
V[k]=left_array[i];
i++;
k++;
}
else{
V[k]=right_array[j];
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


}
void MergeSort(vector<int> &V,int l,int r){
if(l<r){
int mid=l+(r-l)/2;
MergeSort(V,l,mid);
MergeSort(V,mid+1,r);
Merge(V,l,mid,r);
}
}

int main(void){
int N;
cin>>N;
vector<int> V(N);
for(int i=0;i<N;++i)
{
cin>>V[i];
}
MergeSort(V,0,N-1);
copy(V.begin(),V.end(),ostream_iterator<int> (cout," "));
return 0;
}
