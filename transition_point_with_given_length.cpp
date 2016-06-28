int transitionPoint(int arr[],int n)
{
int i=0;
int j=n-1;
if(i==j){
    return -1;
}
else if(arr[i]!=0 || arr[j]!=1){
    return -1;
}
else{
    int mid=-1;
    while(i<=j){
    mid=i+(j-i)/2;
    if(arr[mid]==1){
        if(arr[mid-1]==0){
            return mid;
        }
        j=mid-1;
    }
    else{
        if(arr[mid+1]==1){
            return mid+1;
        }
        i=mid+1;
    }
    }
    
}
}
