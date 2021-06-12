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
	//Easy method 
	//merge two sorted arrays with extra space
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		v v3;
		int n,m;

		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
			v3.pb(a[i]);
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			
			v3.pb(b[i]);
		}
		sort(v3.begin(),v3.end());
		for(int i=0;i<n+m;i++)
		{
			cout<<v3[i]<<" ";
			if(i==n-1) cout<<endl;
		}
		


	}

	return 0;
}
