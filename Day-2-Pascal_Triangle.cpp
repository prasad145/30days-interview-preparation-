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
#define MAX 100
int main()
{
	boost;
	int n;cin>>n;
	int v1[n][MAX];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0  || j==i)
			{
				v1[i][j]=1;
			}
			else
			{
				v1[i][j]=v1[i-1][j]+v1[i-1][j-1];
			}

			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;

}
