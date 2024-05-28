#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		deque<string> a;
		for(int i=1;i<=n;)
		{
			if(a.empty())
			{
				a.push_front((to_string)(1));
				cout << a.back() << " ";
				i++;
			}
			else
			{
				string s = a.back();
				a.pop_back();
				a.push_front(s+'0');
				cout << s+'0' << " ";
				i++;
				if(i<=n)
				{
					a.push_front(s+'1');
					cout << s+'1' << " ";
					i++;	
				}
			}
		}
		cout << endl;
	}
}
