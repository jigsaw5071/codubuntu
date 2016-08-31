#include<iostream>
using namespace std;

void __swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void _optimized_bubble_sort(int *arr,const int N){
    for(int i=0;i<N-1;++i){
        bool swap=false;
        for(int j=0;j<N-i-1;++j){
        if(arr[j]>arr[j+1]){
            __swap(&arr[j],&arr[j+1]);
            swap=true;
        }    
        }
        if(swap==false){
            break;
        }
    }
    
}
int main(void){
int arr[]={64, 34, 25, 12, 22, 11, 90};
int N=sizeof(arr)/sizeof(arr[0]);
_optimized_bubble_sort(arr,N);
for(int i=0;i<N;++i){
    cout<<arr[i]<<" ";
}
return 0;    
}
