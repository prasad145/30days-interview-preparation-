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
		int n;
		cin >> n;
		int a[n];
		for(int  i = 0; i < n; i++)
		{
			cin >> a[i];
		}		
		for(int i = 0; i < n; i++)
		{
			if(a[abs(a[i])] >= 0)
			{
				a[abs(a[i])] = -a[abs(a[i])];
			}
			else
			{
				cout << abs(a[i]) << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}