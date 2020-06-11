#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<int>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq priority_queue<ll>
#define q queue<ll>
#define pb push_back
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	//merge two sorted arrays without extra space
	//easy but tricky
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m; //sizes of array
		int a[n],b[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
//tricky part
		for(int i=m-1;i>=0;i--)
		{
			int j,last=a[n-1];
			for(j=n-2;j>=0 && a[j]>b[i];j--)
			{
				a[j+1]=a[j];
			}
			if(j!=n-2 || last>b[i])
			{
				a[j+1]=b[i];
				b[i]=last;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<m;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
