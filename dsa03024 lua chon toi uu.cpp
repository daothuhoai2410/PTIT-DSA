#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		pair<int,int> a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i].second >> a[i].first;
		}
		
		sort(a,a+n);
		int dem=1;
		int k=a[0].first;
		for(int i=1;i<n;i++)
		{
			if(a[i].second >= k)
			{
				dem++;
				k=a[i].first;
			}
		}
		cout << dem << endl;
	}
}
