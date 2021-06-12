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
	//set zereos using 2D vector(vector of vector)
	boost;
	vector<v> v1;
	int n,m,a;
	cin>>n>>m;

	for(int i=0;i<n;i++)
	{
		v v2;
		for(int j=0;j<m;j++)
		{
			cin>>a;
			v2.pb(a);
		}
		v1.pb(v2);
	}
	vector<int> row(n,0),col(m,0);
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			if(v1[i][j]==1)
			{
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			if(row[i]==1||col[j]==1)
			{
				v1[i][j]=1;
			}
		}
	}
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	return 0;

}
