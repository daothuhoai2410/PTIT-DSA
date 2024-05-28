#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int min = 10000000;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int d = a[i] + a[j];
				if( abs(d)< abs(min))
				{
					min = d;
				}
			}
		}
		cout << min << endl;
	}
}
