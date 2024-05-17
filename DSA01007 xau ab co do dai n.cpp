#include <bits/stdc++.h>
using namespace std;

int n, a[15] ,ok;

void khoitao()
{
	for(int i=1;i<=n;i++)
	{
		a[i] = 0;
	}
}

void sinh()
{
	for(int i=n;i>=1;i--)
	{
		if(a[i]==0)
		{
			a[i] = 1;
			break;
		}
		else a[i] = 0;
		if(i==1) ok=0;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		khoitao();
		ok=1;
		while(ok)
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i]==0) cout << 'A';
				else cout << 'B';
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
