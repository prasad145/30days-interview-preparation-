#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum;
	cin>>n>>sum;
	unordered_set<int> us;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp;
	for(int i=0;i<n;i++)
	{
		temp=sum-a[i];
		if(us.find(temp)!=us.end())
			cout<<temp<<" "<<a[i]<<endl;
		us.insert(a[i]);
	}
	return 0;
}
