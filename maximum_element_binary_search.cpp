#include<iostream>
using namespace std;

int _maximum_element_increasing_decreasing(int *arr,const int N){
    int l=0;
    int r=N-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(mid==0 || mid==N-1){
            return -1;
        }
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid]>=arr[mid-1] && arr[mid]<arr[mid+1]){
            l=mid+1;
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]>=arr[mid+1]){
            r=mid-1;
        }
        else {
            return -1;
        }
        
    }
    return -1;
}

int main(void){
int arr[]={8, 10, 20, 80, 100, 200, 400, 700,3,2,1};
int N=sizeof(arr)/sizeof(arr[0]);
cout<<"The largest element in the peak is: "<<endl;
int _maximum_element=_maximum_element_increasing_decreasing(arr,N);
if(_maximum_element==-1){
    cout<<"Not Possible"<<endl;
}
else{
    cout<<_maximum_element<<endl;
}
    
return 0;    
}
