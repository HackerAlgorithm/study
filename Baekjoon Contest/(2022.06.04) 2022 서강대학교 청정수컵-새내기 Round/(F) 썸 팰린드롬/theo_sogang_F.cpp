#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define endl "\n"
#define pii pair<int,int>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define fs first
#define sc second
#define ll long long
#define np(v) while(next_permutation(v.begin(),v.end()))
using namespace std;


int main() {
	int n;
	cin >> n;
	if (n <= 9) {
		cout << 1; return 0;
	}
	if (n <= 18) {
		if (n %= 2) {
			cout << 3; return 0;
		}
		cout << 2; return 0;
	}
	int tmp = n / 18;
	int t = n % 18;
	if (!t) {
		cout << tmp * 2; return 0;
	}
	if (t <= 9) {
		cout << tmp * 2 + 1; return 0;
	}
	if (t %= 2) {
		cout << tmp * 2 + 3; return 0;
	}
	cout << tmp * 2 + 2;

}


