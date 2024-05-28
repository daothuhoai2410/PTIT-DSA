#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;
		int n1 = s1.size(), n2 = s2.size();
		int F[n1+1][n2+1];
		for(int i=0;i<=n1;i++)
		{
			for(int j=0;j<=n2;j++)
			{
				if(i==0 || j==0)
				{
					F[i][j] = 0;
				}
				else
				{
					if(s2[j-1] == s1[i-1])
					{
						F[i][j] = F[i-1][j-1] + 1;
					}
					else
					{
						F[i][j] = max(F[i][j-1],F[i-1][j]);
					}
				}
			}
		}
		cout << F[n1][n2] << endl; 
	}
}
