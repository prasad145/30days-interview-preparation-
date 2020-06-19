#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<char,ll>
#define ms multiset<int> 
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
	//inversion of array using STL multiset 
	boost;
	int n,a;
	cin>>n;
	v v1;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v1.pb(a);
	}
	ms ms1;
	ms :: iterator it;
	int ans=0;
	ms1.insert(v1[0]);
	for(int i=1;i<v1.size();i++)
	{
		ms1.insert(v1[i]);
		it=ms1.upper_bound(v1[i]);
		ans+=distance(it,ms1.end());
	}
	/*///////////////////////////////////////////////////////////////////////////
	brute force method
	int cnt=0;
	for(int i=0;i<v1.size()-1;i++)
	{
	 	for(int j=i+1;j<v1.size();j++)
	 	{
			if(v1[j]<v1[i])
			{
				cnt++:
			}
	 	}
	}
	cout<cnt<<endl;
	*/////////////////////////////////////////////////////////////////////////////*/

	cout<<ans<<endl;
	return 0;
}
