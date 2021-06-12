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
#define int unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MAX 1e5+2
using namespace std;
//finding a^x in log n time
int solve(int a,int k)
{
	if(k==0)
		return 1;
	int temp=solve(a,k/2);
	if(k%2==0)
		return temp*temp;
	else
		return a*temp*temp;
}
signed main()
{
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;

		cout<<solve(n,k)<<endl;
	}
	return 0;
}
