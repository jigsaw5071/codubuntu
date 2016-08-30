#include<iostream>
using namespace std;

int _floor_key_array(int *arr,const int N,const int key){
    if(N<=0 || key<arr[0]){
        return -1;
    }
  int l=0;
  int r=N-1;
  int mid;
  while(r-l>1){
      mid=l+(r-l)/2;
      if(arr[mid]<=key){
          l=mid;
      }
      else{
          r=mid;
      }
  }
  return l;
} 

int _ceil_key_array(int *arr,const int N,const int _key){
    if(N<=0 || _key>arr[N-1]){return -1;}
    int l=0;
    int r=N-1;
    int mid=0;
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

int main(void){
int arr[]={1,24,47,458,478,4750};
int N=sizeof(arr)/sizeof(arr[0]);
int result=_floor_key_array(arr,N,460);
cout<<"The floor value inside the array is :"<<endl;
if(result==-1){
    cout<<"Not Possible";
}
else{
    cout<<arr[result];
}
cout<<endl;
cout<<"The ceil value inside the array is : "<<endl;
int ceil_result=_ceil_key_array(arr,N,11452);
if(ceil_result==-1){
    cout<<"Not Possible";
}
else{
    cout<<arr[ceil_result];
}
return 0;    
}
