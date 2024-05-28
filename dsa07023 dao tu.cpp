#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	stack<string> a;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		while(ss >> token)
		{
			a.push(token);
		}
		while(!a.empty())
		{
			cout << a.top() << " ";
			a.pop();
		}
		cout << endl;
	}
}
