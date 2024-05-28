#include <bits/stdc++.h>
using namespace std;

int dau(char c)
{
	if(c == '^') return 5;
	else if(c == '/' || c == '*') return 4;
	else if(c == '+' || c == '-') return 3;
	return 2;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<char> a;
		string res = "";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' )
			{
				res += s[i];
			}
			else if(s[i] == '(') 
			{
				a.push(s[i]);
			}
			else if(s[i] == ')')
			{
				while(!a.empty() && a.top() != '(')
				{
					res += a.top();
					a.pop();
				}
				if(a.top()=='(')
				{
					a.pop();
				}
			}
			else
			{
				while(!a.empty() && dau(a.top()) >= dau(s[i]))
				{
					res += a.top();
					a.pop();
				}
				a.push(s[i]);
			}
		}
		while(!a.empty() && a.top() != '(')
		{
			res += a.top();
			a.pop();
		}
		cout << res << endl;
	}
}
