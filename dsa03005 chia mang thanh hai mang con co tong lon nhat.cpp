#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k; cin >> n >> k;
		int a[n];
		int b=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			b+=a[i];
		}
		sort(a,a+n);
		int t1=0,t2=0;
		if(k<n-k)
		{
			for(int i=0;i<k;i++)
			{
				t1+=a[i];
			}
			t2=b-t1;
		}
		else 
		{
			for(int i=0;i<(n-k);i++)
			{
				t1+=a[i];
			}
			t2=b-t1;
		}
		cout << t2-t1 << endl;
	}
}
