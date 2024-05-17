#include <bits/stdc++.h>
using namespace std;

int n, k, a[20], ok, dem;

void sinh()
{
	for(int i=n;i>0;i--)
	{
		if(a[i]==0)
		{
			a[i]=1;
			break;
		}
		else
		{
			a[i]=0;
		}
		if(i==1) ok=0;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i=1;i<=n;i++)
		{
			a[i]=0;
		}
		ok =1;
		while(ok)
		{
			dem =0;
			for(int i=1;i<=n;i++)
			{
				if(a[i]==1) dem ++;
			}
			if(dem ==k)
			{
				for(int i=1;i<=n;i++)
				{
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
	}
}
