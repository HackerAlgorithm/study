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

int n, m, k;
int main() {
	cin >> n >> m >> k;
	k -= 3; m += k;
	m %= n;
	if (m == 0) {
		m = n;
	}
	if (m < 0) {
		m = n + m;
	}
	cout << m;
}


