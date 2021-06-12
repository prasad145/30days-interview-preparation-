#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	//complexity O(log min(a,b))
	if(a==1 || b==1)
		return 1;
	else if(b==0)
		return a;
	else
		return gcd(b,a%b);  
}
int32_t main()
{
	int n,m;
	cin>>n>>m;
	cout<<gcd(n,m)<<endl;
	return 0;
}
