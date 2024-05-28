#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int d,c,u,v,q,x,y,ok;
		cin >> d >> c;
		vector<vector<int>> a(d+1);
		
		for(int i=1;i<=c;i++)
		{
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		
		cin >> q;
		while(q--)
		{
			vector<bool> check(d+1,1);
			stack<int> s;
			cin >> x >> y;
			ok=0;
			s.push(x);
			check[x] = 0;
			while(!s.empty())
			{
				x = s.top();
				if(x == y)
				{
					cout << "YES" << endl;
					ok=1;
					break;
				}
				s.pop();
				for(int i=0;i<a[x].size();i++)
				{
					int v = a[x][i];
					if(check[v] == 1)
					{
						check[v] = 0;
						s.push(x);
						s.push(v);
						break;
					}
				}
			}
			if(ok==0)	cout << "NO" << endl;
		}
	}
}
