#include <bits/stdc++.h>
using namespace std;

int n, k, a[15], b[15], ok, cnt;

void sinh()
{
	for(int i=k;i>=1;i--)
	{
		if(a[i] < (n-k+i))
		{
			a[i]++;
			for(int j=i+1;j<=k;j++)
			{
				a[j] = a[j-1] +1;
			}
			break;
		}
		else if(i==1) ok=0;
	}
}

bool check()
{
	for(int i=1;i<=k;i++)
	{
		if(a[i] != b[i]) return false;
	}
	return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i=1;i<=k;i++)
		{
			cin >> b[i];
		}
		for(int i=1;i<=k;i++)
		{
			a[i] = i;
		}
		ok = 1;
		cnt =0;
		while(ok)
		{
			cnt++;
			if(check())
			{
				cout << cnt << endl;
			}
			sinh();
		}
	}
}
