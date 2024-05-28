#include <bits/stdc++.h>
using namespace std;

int n, k ,a[105],x[105],ok=1,cnt=0;

void sinh()
{
	for(int i=k;i>0;i--)
	{
		if(x[i] < n-k+i)
		{
			x[i]++;
			for(int j=i+1;j<=k;j++)
			{
				x[j] = x[j-1] +1;
			}
			break;
		}
		if(i==1)	ok=0;
	}
}

bool check()
{
	for(int i=1;i<k;i++)
	{
		if(a[x[i]] > a[x[i+1]])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		x[i] = i;
	}
	while(ok)
	{
		if(check())
		{
			cnt++;
		}
		sinh();
	}
	cout << cnt;
}
