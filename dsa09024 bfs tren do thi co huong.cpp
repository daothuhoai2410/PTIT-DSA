#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int d,c,x,u,v;
		cin >> d >> c >> x;
		vector<vector<int>> a(d+1);
		vector<bool> check(d+1,1);
		queue<int> s;
		for(int i=1;i<=c;i++)
		{
			cin >> u >> v;
			a[u].push_back(v);
		}
		s.push(x);
		check[x] = 0;
		while(!s.empty())
		{
			x = s.front();
			s.pop();
			cout << x << " ";
			for(int i=0;i<a[x].size();i++)
			{
				v = a[x][i];
				if(check[v] ==1)
				{
					check[v] = 0;
					s.push(v);
				}
			}
		}
		cout << endl;
	}
}
