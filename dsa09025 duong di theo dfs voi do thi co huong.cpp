#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int d,c,x,y,u,v;
		cin >> d >> c >> x >> y;
		vector<vector<int>> a(d+1);
		vector<bool> check(d+1,1);
		stack<pair<int,string>> s;
		string st;
		int ok=0;
		for(int i=1;i<=c;i++)
		{
			cin >> u >> v;
			a[u].push_back(v);
		}
		s.push({x,to_string(x) + " "});
		check[x] = 0;
		while(!s.empty())
		{
			x = s.top().first;
			st = s.top().second;
			if(x == y)
			{
				ok=1;
				cout << st << endl;
				break;
			}
			s.pop();
			for(int i=0;i<a[x].size();i++)
			{
				int v = a[x][i];
				if(check[v] == 1)
				{
					check[v] = 0;
					s.push({x,st});
					s.push({v, st + to_string(v) + " "});
					break;
				}
			}
		}
		if(ok == 0)	cout << -1 << endl;
	}
}
