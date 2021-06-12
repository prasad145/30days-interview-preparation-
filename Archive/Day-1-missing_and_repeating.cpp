#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
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
v solve(const v &a)
{
	ll l=a.size();
	ll sumN=((l)*(l+1))/2;
	ll sumNN=((l)*(l+1)*((2*l)+1))/6;
	for(int i=0;i<a.size();i++)
	{
		sumN-=(ll)a[i];
		sumNN-=(ll)a[i]*(ll)a[i];
	}
	ll missing=(sumN + (sumNN/sumN))/2;
	ll repeating=missing - sumN;
	v v2;
	v2.pb(missing);
	v2.pb(repeating);
	return v2;

}
int main()
{
	//Find the repeating and the missing
	//solved by Making two equations using sum and sum of squares
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,a1; //(ll - long long  )
		cin>>n;
		v v1; //(v-vector)
		for(ll i=0;i<n;i++)
		{
			cin>>a1;
			v1.pb(a1);
		}
		v ans=solve(v1);
		for(int x:ans)
		{
			cout<<x<< " ";
		}
		cout<<endl;

	}

	return 0;
}
