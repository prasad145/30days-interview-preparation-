#include<iostream>
#include<algorithm>
using namespace std;
// void swap(int *a, int *b)
// {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n], b[m];

		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for(int j = 0; j < m; j++)
		{
			cin >> b[j];
		}
		int k = 0;
		while(a[n - 1] > b[0])
		{
			if(a[k] > b[0])
			{
				swap(a[k], b[0]);
				sort(b, b + m);
			}
			k++;
		}
		cout << "array A is: ";
		for(int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
		cout << "array B is: ";
		for(int i = 0; i < m; i++)
		{
			cout << b[i] << " ";
		}
	}
	return 0;
}