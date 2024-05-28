#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int s[n];
		stack<int> a;
		int F[n];
		for(int i=0;i<n;i++)
		{
			cin >> s[i];
			F[i] = 1;
		}
		for(int i=0;i<n;i++)
		{
			if(!a.empty() && s[a.top()] <= s[i])
			{
				while(!a.empty() && s[a.top()] <= s[i])
				{
					F[i] += F[a.top()];
					a.pop();
				}
				a.push(i);
			}
			else
			{
				a.push(i);
			}
		}
		for(int i=0;i<n;i++)
		{
			cout << F[i] << " ";
		}
		cout << endl;
	}
}

