#include <bits/stdc++.h>
using namespace std;

int n, a[1005],ok,m;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		m=0;
		for(int i=n;i>1;i--)
		{
			if(a[i]>a[i-1])
			{
				swap(a[i-1],a[n]);
				m=i;
				int l=m,r=n;
	        	while(l<r)
		        {
		        	swap(a[l],a[r]);
		        	l++;r--;
		        }
				break;
			}
		}
		
		if(m==0){
			for(int i=1;i<=n;i++)
			{
				cout << i << " ";
			}
		}
		else{
			for(int i=1;i<=n;i++)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}
