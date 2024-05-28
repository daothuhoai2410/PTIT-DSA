#include <bits/stdc++.h>
using namespace std;

int n, a[10], b[10];
char c, s[10];

bool check()
{
	for(int i=2;i<n;i++)
	{
		if(a[i] == 1 || a[i] == 5)
		{
			if(a[i-1] != 1 && a[i-1] != 5 && a[i+1] != 1 && a[i+1] != 5 )
			{
				return 0;
			}
		}
	}
	return 1;
}

void in()
{
	if(check()==1)
	{
		for(int i=1;i<=n;i++)
		{
			cout << (char)(a[i] + 'A' -1) ;
		}
		cout << endl;
	}
	
}

void Try(int i)
{
	
	for(int j=1;j<=n;j++)
	{
		if(b[j] == 0)
		{
			a[i] = j;
			b[j] = 1;
			if(i==n)	in();
			else	Try(i+1);
			b[j] = 0;
		}
	}
}

int main()
{
	cin >> c;
	n = c-'0'-16;
	for(int i =1;i<=n;i++)
	{
		b[i] = 0;
	}
	Try(1);
}
