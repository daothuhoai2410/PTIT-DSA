#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int d,c,x,y,u,v,ok=0;
		cin >> d >> c >> x >> y;
		vector<vector<int>> a(d+1);
		vector<bool> check(d+1,1);
		queue<pair<int,string>> s;
		string st;
		for(int i=1;i<=c;i++)
		{
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		s.push({x,to_string(x) + " "});
		check[x] = 0;
		while(!s.empty())
		{
			x = s.front().first;
			st = s.front().second;
			if(x == y)
			{
				cout << st << endl;
				ok=1;
				break;
			}
			s.pop();
			for(int i=0;i<a[x].size();i++)
			{
				v = a[x][i];
				if(check[v] == 1)
				{
					check[v] = 0;
					s.push({v,st + to_string(v) + " "});
				}
			}
		}
		if(ok==0)	cout << -1 << endl;
	}
}
