#include <bits/stdc++.h>
using namespace std;

int n, a[15];

void in(int n,int a[])
{
	cout << "[";
	for(int i = 0; i <n; i++)
	{
		cout << a[i] ;
		if(i!=n-1)	cout << " ";
	}
	cout << "]" <<  endl;
}

void Try(int i)
{
	
	if(i==n)	return;
	for(int j = 0;j < n-i ; j++)
	{
		a[j] = a[j] + a[j+1];	
	}
	in(n-i,a);
	Try(i+1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		in(n,a);
		Try(1);
	}
}
