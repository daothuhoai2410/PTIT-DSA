#include <bits/stdc++.h>
using namespace std;

int n,k, a[20],ok;

void sinh()
{
	for(int i=k;i>0;i--)
	{
		if(a[i] < (n-k+i) )
			{
				a[i]++;
				for(int j=i+1;j<=k;j++)
				{
					a[j]=a[j-1]+1;
				}
				break;
			}
		else if(i==1)	ok =0;
	}
}

int main(){
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i=1;i<=k;i++)
		{
			a[i]=i;
		}
		ok=1;
		while(ok)
		{
			for(int i=1;i<=k;i++)
			{
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
