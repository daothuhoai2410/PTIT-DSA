#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--)
	{
		int n,m; cin >> n >> m;
		int a[n],b[m];
		set<int> c,d;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			c.insert(a[i]);
		}
		for(int i=0;i<m;i++)
		{
			cin >> b[i];
			c.insert(b[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])	d.insert(a[i]);
			}
		}
		for(auto x:c)	cout << x << " ";
		cout << endl;
		for(auto x:d)	cout << x << " ";
		cout << endl;
	}
}
