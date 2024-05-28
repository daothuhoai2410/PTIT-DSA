#include <bits/stdc++.h>
using namespace std;

int n,k,a[15],x[15], ok;

void in()
{
	int s=0;
	vector<int> c;
	for(int i=1;i<=n;i++)
	{
		if(x[i]==1)
		{
			s+=a[i];
			c.push_back(a[i]);
		}
	}
	if(s==k)
	{
		ok=1;
		cout << "[";
		for(int i=0;i<c.size();i++)
		{
			cout << c[i];
			if(i!=c.size()-1)	cout << " ";
		}
		cout << "] ";
	}
}

void Try(int i)
{
	for(int j=1;j>=0;j--)
	{
		x[i]=j;
		if(i==n)	in();
		else Try(i+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		ok=0;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		Try(1);
		if(ok==0)	cout << -1;
		cout << endl;
	}
}
