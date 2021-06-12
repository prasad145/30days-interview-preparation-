#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,sum;
	cin>>n>>sum;
	vector<int> v;
	//finding four sum with the time complexity of n^3
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-3;i++)
	{
		for(int j=i+1;j<v.size()-2;j++)
		{
			int l=j+1,r=v.size()-1;
			while(l<r)
			{
				if(v[i]+v[j]+v[l]+v[r]==sum)
				{
					cout<<v[i]<<" "<<v[j]<<" "<<v[l]<<" "<<v[r]<<endl;
					l++,r--;
				}
				else if(v[i]+v[j]+v[l]+v[r]<sum)
				{
					l++;
				}
				else
				{
					r--;
				}
			}
		}
	}
	return 0;
}