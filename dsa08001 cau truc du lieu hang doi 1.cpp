#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<int> a;
		while(n--)
		{
			int m; cin >> m;
			if(m==1)
			{
				cout << a.size() << endl;
			}
			else if(m==2)
			{
				if(a.empty())
				{
					cout << "YES\n";
				}
				else
				{
					cout << "NO\n";
				}
			}
			else if(m==3)
			{
				int i; cin >> i;
				a.push(i);
			}
			else if(m==4)
			{
				if(!a.empty())
				{
					a.pop();
				}
			}
			else
			{
				if(a.empty())
				{
					cout << -1 << endl;
				}
				else
				{
					if(m==5)
					{
						cout << a.front() << endl;
					}
					else
					{
						cout << a.back() << endl;
					}
				}
			}
		}
	}
}
