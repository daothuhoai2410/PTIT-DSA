#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int min1=a[0],min2;
		int ok=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]!=min1)
			{
				min2=a[i];
				ok=1;
				break;
			}
		}
		if(ok==1)
		{
			cout << min1 << " " << min2 << endl;
		}
		else
		{
			cout << "-1" << endl; 
		}
	}
}
