#include<bits/stdc++.h>
using namespace std;

int mergeSort(vector<int> a, int n)
{
	vector<int> temp(n);
	return _mergeSort(a, temp, 0, n - 1);
}

int _mergeSort(vector<int> a, vector<int> temp, int left, int right)
{
	int mid, invCount = 0;
	if(right > left)
	{
		mid = left + ((right - left) / 2);
		invCount += _mergeSort(a, temp, left, mid);
		invCount += _mergeSort(a, temp, mid + 1, right);
		invCount += merge(a, temp, left, mid + 1, right);
	}
}

int merge(vector<int> a, vector<int> temp, int left, int mid, int right)
{
	int i, j, k;
	int invCount = 0;
	i = left;
	j = mid;
	k = left;

	while((i <= mid - 1) && (j <= right))
	{
		if(a[i] <= a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
			invCount += (mid - i);
		}
	}

	while(i <= mid - 1)
	{
		temp[k++] = a[i++];
	}

	while(j <= right)
	{
		temp[k++] = a[j++];
	}

	for(int l = left; l <= right; l++)
	{
		a[l] = temp[l];
	}

	return invCount;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto& x: a)
	{
		cin >> x;
	}

	int ans = mergeSort(a, n);

	cout << ans << "\n";
	return 0;
}