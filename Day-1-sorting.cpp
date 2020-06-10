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
int main()
{
	//Sort an array of 0s, 1s and 2s (without using any soting algorithm)
	//time complexity O(1),no extra space required
	boost;
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt0=0,cnt1=0,cnt2=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0) cnt0++;
			if(a[i]==1) cnt1++;
			if(a[i]==2) cnt2++;
		}
		int i=0;
		while(cnt0>0)
		{
			a[i++]=0;
			cnt0--;
		}
		while(cnt1>0)
		{
			a[i++]=1;
			cnt1--;
		}
		while(cnt2>0)
		{
			a[i++]=2;
			cnt2--;
		}

		for(int i=0;i<n;i++)
		{
			cout<<a[i]<< " ";
		}

		cout<<endl;


	}

	return 0;
}
