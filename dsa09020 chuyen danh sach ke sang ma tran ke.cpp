#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	cin.ignore();
	int a[n+1][n+1] = {0};
	for(int i=1;i<=n;i++)
	{
		string s, token;
		getline(cin,s);
		stringstream ss(s);
		while(ss >> token)
		{
			int k=0;
			for(int j=0;j<token.size();j++)
			{
				k = k*10 + token[j] -48;
			}
			a[i][k] = 1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
