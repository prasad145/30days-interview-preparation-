#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<pair<int,int>> v;
		stack<pair<int, int>> intervals;
		while(n--)
		{
			int a, b;
			cin >> a >> b;
			v.push_back({a, b});
		}
		sort(v.begin(),v.end());
		intervals.push(v[0]);

		for(int i = 1; i < v.size(); i++)
		{
			if(intervals.top().second < v[i].first) //no overlap
			{
				intervals.push(v[i]);
			}
			else if(intervals.top().second < v[i].second)
			{
				pair<int, int> new_pair = {intervals.top().first, v[i].second}; 
				intervals.pop();
				intervals.push(new_pair);
			}
		}

		while(!intervals.empty())
		{
			cout << intervals.top().first  << " " <<  intervals.top().second << '\n';
			intervals.pop();
		}
	}
	return 0;
}