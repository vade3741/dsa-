#include<iostream>
#include<vector>

using namespace std;
int lower_bound(vector<int >&v,int element){
    int start=0;
    int end=v.size()-1;
    int mid;
    
    while(end-start>1){
 mid=(start+end)/2;
 if(v[mid]<element){
 start=mid+1;
 }
    else {
          end=mid;
    }
    }
    if(v[start]>=element){
        return start;
    }if(v[end]>=element){
        return end;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }int element;
     cin>>element;//key that we want lower bound
  
   int lb=lower_bound(v,element);
   cout<<lb<<v[lb]<<endl;
      return 0;
}