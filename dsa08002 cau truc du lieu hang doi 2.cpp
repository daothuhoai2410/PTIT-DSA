#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	queue<string> a;
	cin.ignore();
	while(t--)
	{
		string s; getline(cin,s);
		if(s[1] == 'U')
		{
			string k="";
			for(int i=5;i<s.size();i++)
			{
				k += s[i];
			}
			a.push(k);
		}
		else if(s[1] == 'O')
		{
			if(!a.empty())	a.pop();
		}
		else
		{
			if(!a.empty())
			{
				cout << a.front() << endl;
			}
			else
			{
				cout << "NONE\n";
			}
		}
	}
}
