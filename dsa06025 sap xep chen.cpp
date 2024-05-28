#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int key = a[i];
		int j = i-1;
		while(j>=0 && a[j] > key)
		{
			a[j+1] = a[j];
			j--;
		}
			a[j+1] = key;
		cout << "Buoc " << cnt << ": ";
		cnt++;
		for(int f=0;f<=i;f++) cout << a[f] << " ";
		cout << endl; 
	}
}
