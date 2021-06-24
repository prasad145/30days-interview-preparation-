#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        int r = 0;
        int j = m - 1;
        while(r < j)
        {
            swap(a[i][r], a[i][j]);
            r++;
            j--;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    return 0;
}
