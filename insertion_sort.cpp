#include<iostream>
using namespace std;

void _insertion_sort(int *arr,const int N){
    if(N==1){
        return;
    }
    for(int i=1;i<N;++i){
        int __key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>__key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=__key;
        }
        
    }
    
int _binary_search(int *arr,const int _key,int l,int r){
while(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==_key){
        return mid;
    }
    else if(arr[mid]<_key){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
}
return (l>r)?l:r;
}   
    
void __binary_search_insertion_sort(int *arr,int N){
    if(N==1){
        return ;
    }
    for(int i=1;i<N;++i){
        int _key=arr[i];
        int j=i-1;
        int _location_index=_binary_search(arr,_key,0,j);
        while(j>=_location_index){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=_key;
    }
    
}    

int main(void){
int arr[]={12, 11, 13, 5, 6};
int N=sizeof(arr)/sizeof(arr[0]);
_insertion_sort(arr,N);
cout<<"The basic insertion sorted array is :"<<endl;
for(int i=0;i<N;++i){
    cout<<arr[i]<<" ";
}
cout<<endl<<endl;
cout<<"The same array binary sorted is :"<<endl;
int a[] = {37, 23, 0, 17, 12, 72, 31,
              46, 100, 88, 54};
int n=sizeof(a)/sizeof(a[0]);
__binary_search_insertion_sort(a,n);
for(int i=0;i<n;++i){
    cout<<a[i]<<" ";
}
cout<<endl<<endl;



    
return 0;    
}
