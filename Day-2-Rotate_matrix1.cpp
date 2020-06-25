#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m; //n=m
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<m;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m/2;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[i][m-1-j];
			a[i][m-1-j]=temp;
		}
	}
	cout<<"after rotation"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;

}