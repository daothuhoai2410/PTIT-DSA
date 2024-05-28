#include <bits/stdc++.h>
using namespace std;

int n,a[15][15];
vector<string> c;

void Try(int i,int j,string s)
{
	
	if(i==n && j==n)
	{
		c.push_back(s);
		return;
	}
	if(i<n && a[i+1][j] == 1)
	{
		a[i][j] = 0;
		Try(i+1,j,s+"D");
		a[i][j]=1;
	}
	if(j<n && a[i][j+1] == 1)
	{
		a[i][j] = 0;
		Try(i,j+1,s+"R");
		a[i][j]=1;
	}
	if(i>0 && a[i-1][j] == 1)
	{
		a[i][j] = 0;
		Try(i - 1, j, s + "U");
		a[i][j]=1;
	}
	if(j>0 && a[i][j-1] == 1)
	{
		a[i][j] = 0;
		Try(i ,j - 1, s + "L");
		a[i][j]=1;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		c.clear();
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >> a[i][j];
			}
		}
		if(a[1][1] == 1)
		{
			a[1][1] = 0;
			Try(1,1,"");
		}
		if(c.size()==0)
		{
			cout << -1 << endl;
		}
		else
		{
			sort(c.begin(),c.end());
			for(int i=0;i<c.size();i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
		}
	}
}

