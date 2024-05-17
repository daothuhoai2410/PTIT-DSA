#include <bits/stdc++.h>
using namespace std;

int n,k,a[40],b[40];


int main(){
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		int cnt=0;
		for(int i=1;i<=k;i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		for(int i=k;i>0;i--)
		{
			if(b[i] < (n-k+i))
			{
				b[i] ++;
				for(int j=i+1;j<=k;j++)
				{
					b[j] = b[j-1] + 1;
				}
				break;
			}
		}
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				if(a[i] == b[j])
				{
					cnt ++;
				    break;
				}
			}
		}
		if(cnt==k)	cout << k << endl;
		else	cout << k-cnt << endl;
	}
}
