#include <bits/stdc++.h>
using namespace std;

int n, a[10], b[10], ok, cnt;

void sinh()
{
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]) i--;
	if(i==0) ok=0;
	else
	{
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r)
		{
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}

bool check()
{
	for(int i=1;i<=n;i++)
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
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cin >> b[i];
		}
		for(int i=1;i<=n;i++)
		{
			a[i] = i;
		}
		ok = 1;
		cnt =0;
		while(ok)
		{
			cnt ++;
			if(check())
			{
				cout << cnt << endl;
			}
			sinh();
			
		}
	}
}
