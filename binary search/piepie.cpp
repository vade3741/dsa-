#include <bits/stdc++.h>
using namespace std;
	const double pi = acos(-1.0);

double pie(vector<double> size, int f)
{
    double start = 0.0000;
   double end = size.back();

    for(int i=0;i<100;i++)
    {
    
    int sum = 0;
    
        double mid = (start+end) /(double) 2;
        
        for (int i = 0; i < size.size() ; i++)
        {
            sum =sum + size[i] / mid;
        }
        
        if (sum < f)
        {
            end = mid;
        }
        else if (sum >=f)
        {
            start = mid;
        }
    
    }
        return start;
    
}
    int main()
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n;
            int f;
            cin >> n;
            cin >> f;
            vector<int> rad;
            vector<double> size;
            for (int i = 0; i < n; i++)
            {
                int num;
                cin>>num;
                rad.push_back(num);
                
                size.push_back(pi * rad[i] * rad[i]);
            
            }
            sort(size.begin(), size.end());
            double c= pie(size, f + 1);
            printf("%.4lf \n",c);
        }
        return 0;
    }