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
struct interval
	{
		int start,end;
	};
bool compare(interval a,interval b)
{
	return a.start<b.start;
}
solve(interval arr[],int n)
{
	sort(arr,arr+n,compare);
	int j=0;
	for(int i=1;i<n;i++)
	{
		if(arr[j].end >= arr[i].start)
		{
			arr[j].end=max(arr[j].end,arr[i].end);
			arr[j].start=min(arr[j].start,arr[i].start);
		}
		else
		{
			arr[j+1]=arr[i]; //write method (even its wrong in GeeksForGeeks XD)
			j++;
		}	
	}
	for(int i=0;i<=j;i++)
	{
		cout<<"["<<arr[i].start<<","<<arr[i].end<<"]"<<endl;
	}
}
int main()
{

	//
	boost;
	int n1;
	cin>>n1;
	interval arr[n1];
	//interval arr[]={{1,3}, {2,4}, {5,7}, {6,8}};
	for(int i=0;i<n1;i++)
	{
		cin>>arr[i].start>>arr[i].end;
	}
	//int n1=sizeof(arr)/sizeof(arr[0]);
	solve(arr,n1);	

	return 0;
}
