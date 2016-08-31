#include<iostream>
using namespace std;
//Selection Sort Algorithm
//Time complexity O(n*n)
//Space Complexity O(1)

void __swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}

void _selection_sort(int *arr, const int N){
    for(int i=0;i<=N-2;++i){
        int _min_index=i;
        for(int j=i+1;j<N;++j){
            if(arr[j]<arr[_min_index]){
                _min_index=j;
            }
        }
        __swap(&arr[i],&arr[_min_index]);
    }
}
int main(void){
int arr[]={64, 25, 12, 22, 11};
int N=sizeof(arr)/sizeof(arr[0]);
_selection_sort(arr,N);
for(int i=0;i<N;++i){
    cout<<arr[i]<<" ";
}
cout<<endl;
    
return 0;    
}
