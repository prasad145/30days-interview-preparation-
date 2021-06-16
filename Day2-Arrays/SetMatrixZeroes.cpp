#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
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

		int col0 = 1;

		for(int i = 0; i < n; i++)
		{
			if(a[i][0] == 0) //if any first column is zero then change flag
				col0 = 0;
			for(int j = 1; j < m; j++)
			{
				if(a[i][j] == 0)
				{
					a[i][0] = a[0][j] = 0;
				}
			}
		}

		//traversing from end and making changes to original matric inplace
		for(int i = n - 1; i >= 0; i--)
		{
			for(int j = m - 1; j >= 1; j--)
			{
				if(a[i][0] == 0 || a[0][j] == 0)
				{
					a[i][j] = 0;
				} 
			}
			if(col0 == 0)
				a[i][0] = 0;
		}

		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
}