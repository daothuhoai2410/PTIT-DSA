#include <bits/stdc++.h>
using namespace std;

int n, b[10], a[10], ok;

void sinh()
{
	int i=n-1;
	while(i>=1 && b[i] > b[i+1]) i--;
	if(i==0) ok=0;
	else
	{
		int j=n;
		while(b[i]>b[j]) j--;
		swap(b[i],b[j]);
		int l=i+1,r=n;
		while(l<r)
		{
			swap(b[l],b[r]);
			l++;r--;
		}
	}
}

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		b[i] = i;
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	ok = 1;
	while(ok)
	{
		for(int i=1;i<=n;i++)
		{
			cout << a[b[i]] << " ";
		}
		cout << endl;
		sinh();
	}
}
