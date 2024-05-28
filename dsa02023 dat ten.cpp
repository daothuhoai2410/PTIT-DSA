#include <bits/stdc++.h>
using namespace std;

int n, k, m,cnt,x[35];
string a[35],b[35];
set<string> s;

void in()
{
	for(int i=1;i<=k;i++)
	{
		cout << b[x[i]] << " ";
	}
	cout << endl;
}

void Try(int i)
{
	for(int j = x[i-1] + 1 ;j<=m-k+i;j++)
	{
		x[i] = j;
		if(i==k) in();
		else Try(i+1);
	}
}

int main()
{
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		x[i] = i;
		cin >> a[i];
		s.insert(a[i]);
	}
	m = s.size();
	cnt=1;
	for(auto x:s)
	{
		b[cnt++] = x;
	}
	Try(1);
}
