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
	ll n, m; cin >> n >> m;
	if ((n - 1) % (m + 1)) {
		cout << "Can win"; return 0;
	}
	cout << "Can't win";
}


