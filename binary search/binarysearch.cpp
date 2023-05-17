#include <iostream>
#include <vector>
using namespace std;
int binary_search(int a[], int n, int key)
{
    int start;
    int end;
    start = 0;
    end = n - 1;
    while (start <= end)
    {

        int mid;
        mid = start-(start - end) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

  
int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }  int key;
    cin >> key;
cout<<binary_search(a,n,key)<<endl;
    return 0;
}