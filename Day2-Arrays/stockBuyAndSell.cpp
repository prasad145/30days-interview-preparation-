#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int maxi = INT_MAX, res = 0;
    for(int i = 0; i < n; i++)
    {
        maxi = min(maxi, a[i]);
        res = max(res, a[i] - maxi);
    }
    
    cout << res << '\n';
}
