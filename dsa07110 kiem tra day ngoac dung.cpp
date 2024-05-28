#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	stack<char> a;
	while(t--)
	{
		int ok=1;
		string s;
		cin >> s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				a.push(s[i]); 
			}
			else
			{
				if(s[i] == ')')
				{
					if(a.top() == '(')	a.pop();
					else {
						ok=0;
						break;
					}
				}
				else if(s[i] == ']')
				{
					if(a.top() == '[')	a.pop();
					else {
						ok=0;
						break;
					}
				}
				else
				{
					if(a.top() == '{')	a.pop();
					else {
						ok=0;
						break;
					}
				}
			}
		}
		if(ok==1)	cout << "YES\n";
		else	cout << "NO\n";
	}
}
