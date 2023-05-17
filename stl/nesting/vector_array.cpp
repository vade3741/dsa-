#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int> &v){
    for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}
}
int main()
{
    int n;
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        int N;
          cin>>N;
          for(int j=0;j<N;j++){
            int num;
            cin>>num;
            v[i].push_back(num);
          }
    }for(int i=0;i<n;i++){
        printvec(v[i]);
    }
      return 0;
}