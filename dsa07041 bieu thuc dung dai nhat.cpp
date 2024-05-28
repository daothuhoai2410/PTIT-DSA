#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int cnt=0;
		stack<char> a;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '(')
			{
				a.push(s[i]);
			}
			else
			{
				if( !a.empty() && a.top() == '(')
				{
					cnt += 2;
					a.pop();
				}
				else
				{
					a.push(s[i]);
				}
			}
		}
		cout << cnt << endl;
	}
}
