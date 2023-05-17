#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = 0;
    int p;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        j = j ^ p;
    }
    cout << j << endl;

    return 0;
}