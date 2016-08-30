#include<iostream>
using namespace std;

int _peak_element_binary_search(int *arr,const int N){
int l=0;
int r=N-1;
int mid;
while(l<=r){
mid=l+(r-l)/2;
if(mid==0 || mid==N-1){
    return mid;
}
else if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
    return mid;
}
else if(arr[mid]<arr[mid-1]){
    r=mid;
}
else{
    l=mid;
}
}
return -1;
    
}

int main(void){
int arr[]={9,8,7,6};
int N=sizeof(arr)/sizeof(arr[0]);
int peak_index=_peak_element_binary_search(arr,N);
if(peak_index==-1){
    cout<<"Something went wrong!";
}
else{
cout<<arr[peak_index]<<endl;    
}

    
return 0;    
}
