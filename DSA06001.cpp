#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	int n;
	while(t--)
	{
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n/2;i++)
		{
			cout << a[n-i-1] << " " << a[i] << " ";
		}
		if(n%2==1)	cout << a[n/2] ;
		cout << endl;
	}
}
