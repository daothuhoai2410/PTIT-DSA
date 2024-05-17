#include <bits/stdc++.h>
using namespace std;

int n,k,a[16],ok;

void khoitao()
{
	for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
}

void sinh()
{
	for(int i=k;i>0;i--)
	{
		if(a[i] < (n-k+i))
		{
			a[i]++;
			for(int j=i+1;j<=k;j++)
			{
				a[j] = a[j-1] +1;
			}
			break;
		}
		if(i==1) ok=0;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		khoitao();
		ok=1;
		while(ok)
		{
			for(int i=1;i<=k;i++)
			{
				printf("%c",a[i]+64);
			}
			cout << endl;
			sinh();
		}
	}
}
