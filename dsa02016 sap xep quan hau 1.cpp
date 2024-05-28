#include <bits/stdc++.h>
using namespace std;

int n, a[11], xuoi[22], nguoc[22], cnt;

void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(a[j] == 0 && xuoi[i-j+n] == 0 && nguoc[i+j-1] == 0)
		{
			a[j] = 1;
			xuoi[i-j+n] = 1;
			nguoc[i+j-1] = 1;
			if(i==n)	cnt++;
			else	Try(i+1);
			a[j] = 0;
			xuoi[i-j+n] = 0;
			nguoc[i+j-1] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		cnt=0;
		for(int i=1;i<=n;i++)
		{
			a[i] = 0;
			xuoi[i] = 0;
			nguoc[i] = 0;
		}
		Try(1);
		cout << cnt << endl;
	}
}
