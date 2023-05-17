// Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0,
//  but if the array is sorted in reverse order, the inversion count is the maximum. 

// Given an array a[]. The task is to find the inversion count of a[]. Where two elements a[i] and a[j] 
// form an inversion if a[i] > a[j] and i < j.

// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;
 
int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}
 //this is a brute force approach of o(n^2) time complexity
int  merge(int *arr,int start,int end){
int mid =(start+end)/2;
int i=start;
int j=mid+1;
int k=start;
int temp[100000];
int count=0;
while(i<=mid&&j<=end){
    if(arr[i]>arr[j]){
                temp[k]=arr[i];
                k++;
                i++;
    }
    else{
        temp[k]=arr[j];
        j++;
        k++;
        //mid-i-1 cause array is sorted agar sabse chote element ke sath inversion hai to usse 
        // bade ke sath to hoga he inversion
        count+=mid-i-1;
    }
}
while(i<=mid){
    temp[k]=arr[i];
    k++;
    i++;
}
while(j<=end){
    temp[k]=arr[j];
    j++;
    k++;
}
for(int i=start;i<=end;i++){
    arr[i]=temp[i];
}
return count;
}
 int __inversioncount(int *arr,int start,int end){
if(start>=end){
    return 0;
    }
    int mid=(start+end)/2;
 int x=   __inversioncount(arr,0,mid);
       int y=    __inversioncount(arr,mid+1,end);
           int z=merge(arr,start,end);
 return x+y+z;
 }
// Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << " Number of inversions are "
         << getInvCount(arr, n);
         int d=__inversioncount(arr,0,n-1);
         cout<<d<<endl;
    return 0;
}