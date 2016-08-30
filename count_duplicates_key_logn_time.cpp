#include<iostream>
using namespace std;

int _floor_key_binary_search(int *arr,const int N,const int _key){
int l=0;
int r=N-1;
int mid;
while(r-l>1){
mid=l+(r-l)/2;    
if(arr[mid]<=_key){
    l=mid;
}
else {
    r=mid;
}
}
return l;
}

int _ceil_key_binary_search(int *arr,const int N,const int _key){
int l=0;
int r=N-1;
int mid;
while(r-l>1){
    mid=l+(r-l)/2;
if(arr[mid]>=_key){
    r=mid;
}
else{
    l=mid;
}
}
return r;
}

int _count_duplicate_occurances(int *arr,const int N,const int _key){
    if(N==0 || arr[0]>_key || arr[N-1]<_key){
        return 0;
    }
    int _left_index=_ceil_key_binary_search(arr,N,_key);
    int _right_index=_floor_key_binary_search(arr,N,_key);
    if(arr[_left_index]==_key && arr[_right_index]==_key){
      return _right_index - _left_index +1;  
    } 
    else{
        return 0;
    }
}

int main(void){
int arr[]={1,2,44,77,77,85,85,85,97,125};
int N=sizeof(arr)/sizeof(arr[0]);
cout<<_count_duplicate_occurances(arr,N,77);
    
return 0;    
}
