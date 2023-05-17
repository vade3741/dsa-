#include<iostream>
using namespace std;
int merge(int arr[],int temp[],int left,int mid ,int right){
int i,j,k;
int count=0;
i=left;
j=mid;
k=right;
while((i<=mid-1)&& (j<-right)){
    if(arr[i]<=arr[j]){
        temp[k++]=arr[j++];

    }else{
        temp[k++]=arr[i++];
    }
    }while(j<=right){
         temp[k++]=arr[j++];
    }
for(i=left;i<=right;i++){
arr[i]=temp[i];
}return count;



}
int _mergesort(int arr[], int temp[],int left,int right){
int mid,count=0;
if(right>left){
    mid=(right+left)/2;
    count +=_mergesort(arr,temp,left,mid);
     count +=_mergesort(arr,temp,mid+1,right);
     count +=merge(arr,temp,left,mid+1,right);
}
return count;
}

int mergesort(int arr[],int array_size){
    int temp[array_size];
    return _mergesort(arr,temp,0,array_size-1);
}




int main()
{ int arr[]={1,20,6,4,5};
int n=sizeof(arr)/sizeof(int);
int ans=mergesort(arr,n);
cout<<"Number of inversions are"<<ans;
      return 0;
}