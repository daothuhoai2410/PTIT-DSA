#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k,a[40],b[40],ok=0;
		cin >> n >> k;
		for(int i=1;i<=k;i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		for(int i=k;i>0;i--)
		{
			if(a[i] < n-k+i)
			{
				a[i]++;
				ok=1;
				for(int j=i+1;j<=k;j++)
				{
					a[j]=a[j-1]+1;
				}
				break;
			}
		}
		if(ok==1)
		{
			int cnt=0;
			for(int i=1;i<=k;i++)
			{
				for(int j=1;j<=k;j++)
				{
					if(b[i] == a[j])
					{
						cnt++;
					}
				}
			}
			cout << k-cnt << endl;
		}
		else
		{
			cout << k << endl;
		}
	}
}
