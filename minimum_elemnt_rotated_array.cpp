#include<iostream>
using namespace std;

int _minimum_rotated_binary_search(int *arr,int N){
if(arr[0]<arr[N-1]){
    return arr[0]; // this is the strict check as the middle elements can have duplicates
}   
int l=0;
int r=N-1;
while(l<=r){
if(l==r){
    return l;
}
int mid=l+(r-l)/2;
if(arr[mid]<arr[r]){
r=mid;
}
else{
  l=mid+1;
}
    
}
return -1;
    
}

int main(void){
int arr[]={10,9,8,7,6,1,2,3,4,5};
int N=sizeof(arr)/sizeof(arr[0]);
cout<<arr[_minimum_rotated_binary_search(arr,N)];
    
return 0;    
}
