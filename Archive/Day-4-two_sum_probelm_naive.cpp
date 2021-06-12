#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,sum;
	cin>>n>>sum;
	vector<int> v;
	vector<pair<int,int>> vp;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]+v[j]==sum)
			{

				vp.push_back(make_pair(v[i],v[j]));
			}
		}
	}
	cout<<vp.size()<<endl;
	return 0;

}