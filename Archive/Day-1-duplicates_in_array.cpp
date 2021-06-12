#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<int>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<int,int>
#define um unordered_map<int,int>
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
	//finding dulicates in an array using map STL
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
		v v1;
		um m1;
		um::iterator it;
		forn(i,n)
		{
			cin>>a;
			v1.pb(a);
			m1[a]++;

		}
		for(it=m1.begin();it!=m1.end();it++)
		{
			if(it->second > 1)
			{
				cout<<it->first<<" ";
			}
		}
		cout<<endl;




	}

	return 0;
}
