#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;cin >> s;
		stack<string> a;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
			{
				string dau = a.top();
				a.pop();
				string sau = a.top();
				a.pop();
				string tmp = dau + sau + s[i];
				a.push(tmp);
			}
			else
			{
				a.push(string(1,s[i]));
			}
		}
		cout << a.top() << endl;
	}
}
