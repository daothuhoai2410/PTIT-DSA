#include <bits/stdc++.h>
using namespace std;

int n, m , a[ 1005 ][ 1005 ],c[ 1005 ][ 1005 ];
int main()
{
	int t; cin >> t;
	while(t--)
	{ 
		cin >> m >> n; 
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >> a[i][j];
				c[i][j] = -1;
			}
		}
		c[1][1] = 0;
		queue<pair<int,int>> s;
		s.push( {1,1} );
		while(!s.empty())
		{
			pair<int,int> tmp = s.front();
			s.pop();
			int i = tmp.first;
			int j = tmp.second;
			// a[i][j+a[i][j]]
			if(i >= 1 && i <= m && (j+a[i][j]) >= 1 && (j+a[i][j]) <= n && c[i][j+a[i][j]] == -1)
			{
				s.push( {i , j + a[  i][ j ]} );
				c[ i ][ j + a[ i ][ j ]] = c[ i ][ j ] + 1;
			}
			
			//a[i+a[i][j]][j]
			if(j >= 1 && j <= n && (i+a[i][j]) >= 1 && (i+a[i][j]) <= m && c[i+a[i][j]][j] == -1)
			{
				s.push( {i + a[ i ][ j ] , j} );
				c[ i + a[ i ][ j ]][ j ] = c[ i ][ j ] + 1;
			}
			
			if(c[ m ][  n] != -1) break;
		}
		cout << c[ m ][ n ] << endl;
	}
}
