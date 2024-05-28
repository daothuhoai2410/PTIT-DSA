#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[1005],l[1005];
	cin >> n;
	int m=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		l[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				l[i] = max(l[i],l[j]+1);
			}
		}
		m = max(l[i],m);
	}
	cout << m;
}
