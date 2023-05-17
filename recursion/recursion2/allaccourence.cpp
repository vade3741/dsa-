#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//returns the index of first occurence of the key
int firstocc(int *a,int n,int key){
if(n==0){
    return -1;
}
if(a[0]==key){
    return 0;
}
int i=firstocc(a+1,n-1,key);
return i+1;

}
int lastocc(int *a,int n,int key){
if(n==0){
    return -1;
}
int i=lastocc(a+1,n-1,key);
if(i==-1){
if(a[0]==key){
    return 0;
}
else{
    return -1;
}
}
return i+1;

}
//another way of writing linearsearch
int linearsearch(int *a,int i,int n,int key){
    if(i==n){
        return -1;
    }//stopping condition of a for looop
    if(a[i]==key){
        return i;
    }//if condition of a for loop
    //incrementing of i in for loop  
    return linearsearch(a,i+1,n,key);
}
void alloccurence(int *a,int i,int n,int key){
    if(i==n){
        return;
    }//stopping condition of a for looop
    if(a[i]==key){
        cout<<i<<" , ";
    }//if condition of a for loop
    //incrementing of i in for loop  
    return alloccurence(a,i+1,n,key);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int key;
    cin>>key;
    int c=firstocc(arr,n,key);
     cout<<c<<endl;
     int d=linearsearch(arr,0,n,key);
     cout<<d<<endl;
     int e=lastocc(arr,n,key);
     cout<<e<<endl;
     alloccurence(arr,0,n,key);
    
      return 0;
}