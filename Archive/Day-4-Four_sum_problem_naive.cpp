#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,sum;
	cin>>n>>sum;
	vector<int> v;
	//finding four sum with the time complexity of n^4
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<v.size()-3;i++)
	{
		for(int j=i+1;j<v.size()-2;j++)
		{
			for(int k=j+1;k<v.size()-1;k++)
			{
				for(int l=k+1;l<v.size();l++)
				{
					if((v[i]+v[j]+v[k]+v[l])==sum)
					{
						cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "<<v[l]<<endl;
					}
				}
			}
		}
	}
	
	return 0;

}