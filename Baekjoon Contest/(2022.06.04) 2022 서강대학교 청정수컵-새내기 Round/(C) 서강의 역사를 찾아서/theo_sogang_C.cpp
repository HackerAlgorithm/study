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
	int n, m; cin >> n >> m;
	int a[1001] = {}, b[1001] = {};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int mx = -1e9;
	for (int i = 0; i < max(n, m); i++) {
		mx = max(b[i] - a[i], mx);
	}
	cout << (mx < 0 ? 0 : mx);
}


