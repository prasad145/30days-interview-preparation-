#include<iostream>
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
		int ones = 0, zeroes = 0, twoes = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] == 1)
			{
				ones++;
			}
			else if(a[i] == 0)
			{
				zeroes++;
			}
			else
			{
				twoes++;
			}
		}

		int i = 0;
		while(zeroes--)
		{
			a[i++] = 0;
		}
		while(ones--)
		{
			a[i++] = 1;
		}
		while(twoes--)
		{
			a[i++] = 2;
		}

		for(int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}	
		cout << "\n";
	}
	return 0;
}