#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &v,int l,int r,int key){
while(r>=l){
int mid = l+(r-l)/2;
if (v[mid]==key){
    return mid;
}
if(v[l]<v[mid]){
if(key>=v[l] && key<v[mid]){
r=mid-1;
}
else{
    l=mid+1;
}
}
else{
if(key<v[r] && key>v[mid]){
l=mid+1;
}
else{
    r=mid-1;
}
}

}
return -1;
}
void rotate(vector<int> &v,int k){
reverse(v.end()-k,v.end());
reverse(v.begin(),v.begin()+k);
reverse(v.begin(),v.end());
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
          cin>>n;
          vector<int> v;
          for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
          }

          sort(v.begin(),v.end());
        int k;
        cin>>k;
          rotate(v,k);
          int key;
          cin>>key;
          cout<<binary_search(v,0,n-1,key)<<endl;
       

    }
    
      return 0;
}