#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n,k;
		cin >> n >> k;
		long long a[n+1];
		a[1]=1; a[2]=1;
		for(int i=3;i<=n;i++)
		{
			a[i] = a[i-2] + a[i-1];
		}
		while(1)
		{
			if(n==1)
			{
				cout << 0 << endl;
				break;
			}
			else if(n==2)
			{
				cout << 1 << endl;
				break;
			}
			
			if(k > a[n-2])
			{
				k = k-a[n-2];
				n--;
			}
			else
			{
				n=n-2;
			}
		}
	}
}
