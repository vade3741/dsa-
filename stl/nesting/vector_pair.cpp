#include <iostream>
#include <vector>
#include<string>
using namespace std;
void printvec(vector<pair<int, string>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<pair<int, string>> v = {{1, "abc"}, {3, "dedf"}, {5, "sar"}};
    for (int i = 0; i < n; i++)
    {
        int x;
        string y;
        cin >> x;
        cin >> y;

        v.push_back({x, y});//how to push a string in a vector
    }printvec(v);
    return 0;
}