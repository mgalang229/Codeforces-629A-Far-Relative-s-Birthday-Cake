#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	char a[n][n];
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> a[i][j];
	int cnt=0;
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			if(a[i][j]=='C') {
				//check entire row for possible pairs
				//constant 'i', so we can traverse the other columns of that row
				//the iterator has '+1' to represent the distribution of numbers
				for(int k=j+1; k<n; ++k)
					if(a[i][k]=='C')
						cnt++;
				//check entire column for possible pairs
				//constant 'j', so we can traverse the other rows of that column
				//the iterator has '+1' to represent the distribution of numbers
				for(int k=i+1; k<n; ++k)
					if(a[k][j]=='C')
						cnt++;
			}
	cout << cnt << "\n";
}
