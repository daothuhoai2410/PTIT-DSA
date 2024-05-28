#include <bits/stdc++.h>
using namespace std;

int min(int a)
{
	int k=0;
	int dem=1;
	while(a>0)
	{
		int m=a%10;
		if(m==6) 
		{
			m=5;
		}
		k = m*dem+k;
		dem = dem*10;
		a=a/10;
	}
	return k;
}

int max(int a)
{
	int k=0;
	int dem=1;
	while(a>0)
	{
		int m=a%10;
		if(m==5) 
		{
			m=6;
		}
		k = m*dem+k;
		dem = dem*10;
		a=a/10;
	}
	return k;
}

int a,b;

int main()
{
	cin >> a >> b;
	cout << min(a) + min(b) << " " << max(a) + max(b) ;
}
