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
signed main()
{
	boost;
	int n;
	cin>>n;
	char str[(int)MAX];
	int i=0;
	while(n>0)
	{
		int rem=n%26;
		if(rem==0)
		{
			str[i++]='Z';
			n=(n/26)-1;
		}
		else
		{
			str[i++]=(rem-1)+'A';
			n=n/26;
		}
	}
	str[i]='\0';
	reverse(str,str+strlen(str));
	cout<<str<<endl;

	return 0;
}
