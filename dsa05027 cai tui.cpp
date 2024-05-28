#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n,v; cin >> n >> v;
		int A[n+1], C[n+1];
		for(int i=1;i<=n;i++)	cin >> A[i];
		for(int i=1;i<=n;i++)	cin >> C[i];
		int F[n+1][v+1];
		memset(F,0,sizeof(F));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=v;j++)
			{
				F[i][j] = F[i-1][j];
				if(j >= A[i])
				{
					F[i][j] = max(F[i][j],F[i - 1][j - A[i]] + C[i]);
				}
			}
		}
		cout << F[n][v] << endl;
	}
}
