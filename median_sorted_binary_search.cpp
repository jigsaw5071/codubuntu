#include<iostream>
using namespace std;

int __median(int *arr,const int N){
    return (N & 1)?arr[N/2]:(arr[N/2]+arr[N/2-1])/2;
}

int __max(const int a ,const int b){
    return (a>b)?a:b;
}

int __min(const int a ,const int b){
    return a<b?a:b;
}


int _median_sorted_binary_search(int *arr1,int *arr2,const int N){
if(N==0){
    return -1;
}    
if(N==1){
    return (arr1[0]+arr2[0])/2;
}
if(N==2){
    return (__max(arr1[0],arr2[0])+__min(arr1[1],arr2[1]))/2;
}
int _m1=__median(arr1,N);
int _m2=__median(arr2,N);
if(_m1==_m2){
    return _m1;
}
else if(_m2>_m1){
return (N & 1)?_median_sorted_binary_search(arr1+N/2,arr2,N-N/2):_median_sorted_binary_search(arr1+N/2-1,arr2,N-N/2+1);    
}
else{
    return (N & 1)?_median_sorted_binary_search(arr2+N/2,arr1,N-N/2):_median_sorted_binary_search(arr2+N/2-1,arr1,N-N/2+1);
}

}

int main(void){
int arr1[] = {1, 2, 3, 4,5};
int arr2[] = {6, 7, 8, 9,10};    
int N=sizeof(arr1)/sizeof(arr1[0]);
int median=_median_sorted_binary_search(arr1,arr2,N);
cout<<"The median fo the two arrays is :"<<endl;
if(median==-1){
    cout<<"Not Possible"<<endl;
}
else{
    cout<<median<<endl;
}
    
return 0;    
}
