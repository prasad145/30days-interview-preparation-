#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v64 vector<ll>
#define v32 vector<int>
#define vv32 vector<vector<int>>
#define s set<ll>
#define ms multiset<int>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq64 priority_queue<ll>
#define pq32 priority_queue<ll>
#define q dequeue<ll>
#define pb push_back
#define forab(i,a,b) for(ll i=a;i<b;i++) 
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MAX 1e5+2
using namespace std;
int solve(int a[],int n)
{
	int profit=0,spent=0;
	if(n==1)
		return 0;
	int i=0;
	while(i<n)
	{
		//finding local minima
		while(i<n-1 && a[i+1]<=a[i])
		{
			i++;
		}
		if(i==n)
			return 0;
		spent+=a[i];
		int Buy=i++; //store index value and increment
		
		while(i<n && a[i]>=a[i-1])
		{
			i++;
		}
		int sell=i-1;
		profit+=(a[sell]);
		cout<<"Buy at: "<<Buy<<" "<<"Sell at: "<<sell<<endl;
		

	}	

	cout<<profit-spent<<endl;
	
}
signed main()
{
	boost;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	solve(a,n);
	return 0;
}
