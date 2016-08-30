#include<iostream>
using namespace std;

int recursive_binary_search(int *arr,int l,int r,int _lookup_value){
  if(r>=l){    
  int mid=l+(r-l)/2;
  if(arr[mid]==_lookup_value)
  {
      return mid;
  }
  else if(arr[mid]>_lookup_value){
      return recursive_binary_search(arr,l,mid-1,_lookup_value);
  }
  else{
      return recursive_binary_search(arr,mid+1,r,_lookup_value);
  }
  }
  return -1;
    
}

int iterative_binary_search(int *arr,int N,int _lookup_value){
    int l=0;
    int r=N-1;
    while(r>=l){
    int mid=l+(r-l)/2;
    if(arr[mid]==_lookup_value){
        return mid;
    }
    else if(arr[mid]>_lookup_value){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
        
    }
return -1;    
}

int main(void){
    int a[]={1,24,75,147,247,1048};
    int N=sizeof(a)/sizeof(a[0]);
    cout<<recursive_binary_search(a,0,N-1,715)<<endl;
    cout<<iterative_binary_search(a,N,247);
    
    
    
return 0;    
}
