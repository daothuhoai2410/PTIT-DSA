#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,m; cin >> n >> m;
		int a[n],b[m];
		int c[n+m];
		int f=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			c[f] = a[i];
			f++;
		}
		for(int i=0;i<m;i++)
		{
			cin >> b[i];
			c[f] = b[i];
			f++;
		}
		sort(c,c+f);
		for(int i=0;i<f;i++)
		{
			cout << c[i] << " ";
		}
		cout << endl;
	}
}
