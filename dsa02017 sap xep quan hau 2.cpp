#include <bits/stdc++.h>
using namespace std;

int a[10][10], c[10], x[10], xuoi[20], nguoc[20];
int S , s;

void in()
{
	s=0;
	for(int i=1;i<=8;i++)
	{
		s += a[i][c[i]];
	}
	S = max(S,s);
}

void Try(int i)
{
	for(int j=1;j<=8;j++)
	{
		if(x[j] == 0 && xuoi[i-j+8] == 0 && nguoc[i+j] == 0)
		{
			c[i] = j;
			x[j] = 1;
			xuoi[i-j+8] = 1;
			nguoc[i+j] = 1;
			if(i==8)	in();
			else	Try(i+1);
			x[j] = 0;
			xuoi[i-j+8] = 0;
			nguoc[i+j] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
	    S =0;
		for(int i=0;i<20;i++)
		{
			x[i] = 0;
			xuoi[i] = 0;
			nguoc[i] = 0;
		}
		for(int i=1;i<=8;i++)
		{
			for(int j=1;j<=8;j++)
			{
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << S << endl;
	}
}
