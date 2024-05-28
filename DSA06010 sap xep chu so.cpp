#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		set<int> s;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			while(a[i]>0)
			{
				int b=a[i]%10;
				s.insert(b);
				a[i] = a[i]/10;
			}
		}
		for(int x:s)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}
