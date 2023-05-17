#include<iostream>
using namespace std;
void bubble_sort(int *a,int n){
    if(n==1){
        return;
}
if(a[0]>a[1]){
    swap(a[0],a[1]);
}
bubble_sort(a+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
cin>>a[i];
    }
    bubble_sort(a,n);
      return 0;
}