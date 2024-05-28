#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int b[n];
		set<int> a;
		for(int i=0;i<n;i++){ cin >> b[i];
		                       a.insert(b[i]); }
		sort(b,b+n);
		int i=b[n-1] - b[0]+1;
		cout << i-a.size() << endl;
	}
}
