#include <bits/stdc++.h>
using namespace std;

int n, k, a[25], b[11]; 
set<int> s;
int ok, c;

void sinh()
{
	for(int i=k;i>0;i--)
	{
		if(b[i] < (c-k+i-1) )
			{
				b[i]++;
				for(int j=i+1;j<=k;j++)
				{
					b[j]=b[j-1]+1;
				}
				break;
			}
		else if(i==1)	ok =0;
	}
}

int main()
{
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		int x; cin >> x;
		s.insert(x); 
	}
	c=1;
	for(auto i:s)
	{
		a[c++]=i;
	}
	
	for(int i=1;i<=k;i++)
	{
		b[i] = i;
	}
	
	ok=1;
	while(ok)
	{
		for(int i=1;i<=k;i++)
		{
			cout << a[b[i]] << " ";
		}
		cout << endl;
		sinh();
	}
}
