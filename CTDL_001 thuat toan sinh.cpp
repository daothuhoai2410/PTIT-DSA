#include <bits/stdc++.h>
using namespace std;

int n, a[20], ok;

void sinh()
{
	for(int i=n;i>0;i--)
	{
		if(a[i] == 0)
		{
			a[i] = 1;
			break;
		}
		else 
		{
			a[i] =0;
		}
		if(i==1)	ok=0;
	}
}

bool check()
{
	int l=1, r=n;
	while(l<r)
	{
		if(a[l] != a[r])
		{
			return false;
		}
		l++; r--;
	}
	return true;
}

int main(){
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		a[i] =0;
	}
	ok=1;
	while(ok)
	{
		if(check())
		{
			for(int i=1;i<=n;i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
}
