#include <bits/stdc++.h>
using namespace std;

int n, a[]={1,2,5,10,20,50,100,200,500,1000}, dem;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		dem=0;
		cin >> n;
		if(n>0)
		{
			for(int i=9;i>=0;i-- )
			{
 				while(a[i] <= n)
				{
					n=n-a[i];
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}
