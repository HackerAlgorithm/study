#include <bits/stdc++.h>
using namespace std;

#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define ROF(i,a,b) for(int i=(a);i>=(b);i--)
#define ll long long int
#define pii pair<int, int>
#define PQ priority_queue
#define LEN(v) int(v.size())
#define ALL(v) v.begin(),v.end()
#define INF int(2e9)
#define LINF ll(1e18)

bool Compare(string s1, string s2) {
	string ns1 = s1, ns2 = s2;
	sort(ALL(ns1));
	sort(ALL(ns2));
	if (ns1 != ns2) {
		return false;
	}

	int len = LEN(s1);
	if (s1[0] != s2[0] || s1[len - 1] != s2[len - 1]) {
		return false;
	}

	ns1 = "", ns2 = "";
	FOR(i, 0, len - 1) {
		if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') continue;
		ns1 += s1[i];
	}
	FOR(i, 0, len - 1) {
		if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u') continue;
		ns2 += s2[i];
	}
	if (ns1 != ns2) {
		return false;
	}

	return true;
}

int main() {
	FASTIO;
	int N;
	string s1, s2;
	cin >> N;
	cin >> s1;
	cin >> s2;

	cout << (Compare(s1, s2) ? "YES" : "NO");

	return 0;
}