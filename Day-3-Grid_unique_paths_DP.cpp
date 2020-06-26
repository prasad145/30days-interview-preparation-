#include<bits/stdc++.h>
using namespace std;
//finding grid unique paths using dynamic programming approach (efficient approach)
//move form (0,0) - (n,m) by moving only right and down
int solve(int a,int b)
{
	int dp[a][b];
	for(int i=0;i<a;i++)
	{
		dp[i][0]=1;
	}
	for(int j=0;j<b;j++)
	{
		dp[0][j]=1;
	}
	for(int i=1;i<a;i++)
	{
		for(int j=1;j<b;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];//only right and down moves are allowed
		}
	}
	return dp[a-1][b-1];
}
int main()
{
	int n,m;
	cin>>n>>m;

	cout<<solve(n,m)<<endl;
	return 0;
}