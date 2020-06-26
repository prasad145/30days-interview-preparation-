#include<bits/stdc++.h>
using namespace std;
int main()
{
	//longest contiguous subsequence 
	// need to sort so nlogn time complexity
	int n,cnt=0,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(i>0 && a[i]==a[i-1]+1)
		{
			cnt++;
		}
		else
		{
			cnt=1;
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}
