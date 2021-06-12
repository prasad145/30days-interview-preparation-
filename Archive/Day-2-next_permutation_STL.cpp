#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool ans=next_permutation(s.begin(),s.end());
	if(ans)
		cout<<s<<endl;
	else
		cout<<"Not Possible"<<endl;
	return 0;
}