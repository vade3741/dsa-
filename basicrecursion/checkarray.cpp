#include<iostream>
using namespace std;
bool checkarray(int *a,int start,int end){
if(start==end){
    return true;
}
if((end-start)==1){
return a[start]<=a[end];
}
int mid=(start+end)/2;
bool left=checkarray(a,start,mid);
bool right=checkarray(a,mid+1,end);


return left&&right;


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<checkarray(a,0,n)<<endl;

      return 0;
}