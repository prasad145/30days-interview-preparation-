#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	int a[n][m];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || j == i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j]  + a[i - 1][j - 1];
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n';
}