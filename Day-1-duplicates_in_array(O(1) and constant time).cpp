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
//#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	//Given an array of n elements which contains elements from 0 to n-1, 
	//with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

	boost;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[abs(a[i])]>=0)
			{
				a[abs(a[i])]=-a[abs(a[i])];
			}
			else
			{
				cout<<abs(a[i])<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
