#include<iostream>
using namespace std;

int _fixed_point_binary_search(int *arr,const int N){
    int l=0;
    int r=N-1;
    int mid;
    while(l<=r){
    mid=l+(r-l)/2;
    if(arr[mid]==mid){
        return mid;
    }
    else if(arr[mid]>mid){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
    }
    return -1;
}

int main(void){
int arr[]={-10, -1, 0, 4, 10, 11, 30, 50, 100};
int N=sizeof(arr)/sizeof(arr[0]);
cout<<"The Fixed point in the array is: "<<endl;
int _index=_fixed_point_binary_search(arr,N);
if(_index==-1){
    cout<<"Not available";
}
else{
    cout<<arr[_index];
}
    
return 0;    
}
