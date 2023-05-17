#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int > &v){
     int start = 0;
    int end = v.size() - 1;
    while (start < end)
    {
        //case to check if array get rotated or not
        if(v[end]>=v[start]){
            return v[start];
        }
        int mid = start - (start - end) / 2;
       if (end < start)
        return -1;
    if (end == start)
        return start;
        if (v[mid] >=v[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
  return start;

}
int rotation_search(vector<int >&v,int key){
    int start=0;
    int end=v.size()-1;
    //  int mid= pivot(v);
    while(start<=end){
  int mid=start-(start-end)/2;
        if(v[mid]==key){
            return mid;
        }
        else if(v[mid]<=v[end]){
            if(key>=v[mid]&&key<=v[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }else{
            if(v[start]<=key &&v[mid]>=key){
                end=mid-1;
            }else{start=mid+1;
            }
        }
    }return 0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }int key;
    cin>>key;
  int c=rotation_search(v,key);
cout<<c;
  
    return 0;
}