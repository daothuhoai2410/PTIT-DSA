#include <bits/stdc++.h>
using namespace std;

int n, k, a[6], x[6], cnt=0, ok;

void in()
{
	int s=0;
	vector<int> c;
	for(int i=0;i<n;i++)
	{
		if(x[i]==1)
		{
			s += a[i];
			c.push_back(a[i]);
		}
	}
	if(s==k)
	{
		cnt++;
		for(int i=0;i<c.size();i++)
		{
			cout << c[i] << " ";
		}
		cout << endl;
	}
}

void sinh()
{
	for(int i=n-1;i>=0;i--)
	{
		if(x[i]==0)
		{
			x[i] = 1;
			break;
		}
		else
		{
			x[i] = 0;
		}
		if(i==0)	ok=0;
	}
}

int main()
{
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		x[i] = 0;
	}
	ok=1;
	while(ok)
	{
		in();
		sinh();
	}
	cout << cnt;	
}
