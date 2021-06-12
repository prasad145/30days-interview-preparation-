#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	int a[n];
	unordered_set<int> us;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		us.insert(a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(us.find(a[i]-1)==us.end())
		{
			int j=a[i];
			while(us.find(j)!=us.end())
			{
				j++;
			}
			ans=max(ans,j-a[i]);
		}	
	}
	cout<<ans<<endl;
	return 0;

}