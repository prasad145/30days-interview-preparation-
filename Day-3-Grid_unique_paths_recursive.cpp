#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b)
{
	if(a==1 || b==1)
		return 1;
	return solve(a-1,b)+solve(a,b-1); 
}
int32_t main()
{
	int n,m;
	cin>>n>>m;

	cout<<solve(n,m)<<endl;

}