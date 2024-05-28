#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int cnt=0;
		stack<pair<char,int>> a;
		string s;
		cin >> s;
		vector<int> F(s.size(),0);
		for(int i=0;i<s.size();i++)
		{
			if( !a.empty() && s[i] == ')' && a.top().first == '(' )
			{
				F[i] = F[i-1];
				if(a.top().second != 0)
					F[i] += F[a.top().second - 1];
				F[i] +=2;
				a.pop();
			}
			else
			{
				a.push({s[i],i}); 
			}
		}
		for(int i=0;i<s.size();i++)
		{
			cnt = max(cnt,F[i]);
		}
		cout << cnt << endl;
	}
}
