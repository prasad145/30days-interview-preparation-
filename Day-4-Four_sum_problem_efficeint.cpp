#include<bits/stdc++.h>
using namespace std;
//four sum using hash table n^2 (unordered map) 
int solve(int a[],int n,int sum)
{
	unordered_map<int,pair<int,int>> m;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			m[(a[i]+a[j])]={i,j};
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int x=a[i]+a[j];
			if(m.find(sum-x)!=m.end())
			{
				pair<int,int> p=m[sum-x];
				if(p.first !=i && p.second!=j && p.second!=i && p.first!=j)
				{
					cout<<a[i]<<" "<<a[j]<<" "<<a[p.first]<<" "<<a[p.second]<<endl;
					exit(0);
				}
			}
		}
	}
}

int32_t main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	int sum;cin>>sum;
	cout<<solve(a,n,sum)<<endl;
	return 0;
}
