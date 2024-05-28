#include <bits/stdc++.h>
using namespace std;

int n, a[16][16],x[16],used[16],s=0,cmin=INT_MAX, tmp=INT_MAX;

void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(used[j]==0)
		{
			x[i]=j;
			used[j]=1;
			s += a[x[i-1]][x[i]];
			if(i==n)
			{
				tmp = min(tmp, s + a[x[n]][1]);
			}
			else if(s + (n-i+1)*cmin < tmp)
			{
				Try(i+1);
			}
			used[j] = 0;
			s -= a[x[i-1]][x[i]];
		}
	}
}

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> a[i][j];
			if(a[i][j] != 0)
			{
				cmin = min(cmin,a[i][j]);
			}
		}
		used[i]=0;
	}
	x[1]=1;
	used[1]=1;
	Try(2);
	cout << tmp;
}
