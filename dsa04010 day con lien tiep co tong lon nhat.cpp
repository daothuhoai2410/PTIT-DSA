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
		int max=a[0],s;
		for(int i=0;i<n-1;i++)
		{
			s=0;
			for(int j=i;j<n;j++)
			{
				s += a[j];
				if(max<s) max = s;
			}
		}
		cout << max << endl;
	}
}
