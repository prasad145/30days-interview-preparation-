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
int solve(int a[],int m )
{
	int max_so_far=INT_MIN,max_ending_here=0;
	for(int i=0;i<m;i++)
	{
		max_ending_here+=a[i];
		if(max_ending_here<0)
		{
			max_ending_here=0;
		}
		else
		{
			if(max_so_far<max_ending_here)
			{
				max_so_far=max_ending_here;
			}
		}
		
	}
	return max_so_far;
}
int main()
{
	
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=solve(a,n);
		cout<<ans<<endl;
	}
	return 0;
}

