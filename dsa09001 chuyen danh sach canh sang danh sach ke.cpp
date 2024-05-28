#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int d, c; cin >> d >> c;
		vector< vector<int> > a(d+1);
		for(int i=1; i<=c; i++)
		{
			int  u, v;
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		for(int i=1;i<a.size();i++)
		{
			cout << i << ": ";
			for(int j=0;j<a[i].size();j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}
