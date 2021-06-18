#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp; 
}

void reverse(int a[], int i, int j)
{
	while(i < j)
	{
		swap(a, i++, j--);
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if(n == 0 || n <= 1)
		cout << "no permutation" << '\n';

	int i = n - 2;

	while(i >= 0 && a[i] >= a[i + 1])
	{
		i--;
	}

	if(i >= 0)
	{
		int j = n - 1;
		while(a[j] <= a[i])
		{
			j--;
		}
		swap(a, i, j);
	}
	reverse(a, i + 1, n - 1);

	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}