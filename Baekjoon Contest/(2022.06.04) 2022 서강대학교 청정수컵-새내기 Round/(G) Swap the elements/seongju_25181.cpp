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

vector<int> cnt(100001, 0);

bool compare(pii a, pii b) {
	return a.second < b.second;
}

int main() {
	FASTIO;
	int N;
	cin >> N;
	vector<pii> A(N);
	FOR(i, 0, N - 1) {
		cin >> A[i].first;
		A[i].second = i;
		cnt[A[i].first]++;
	}

	bool flag = true;
	FOR(i, 1, 100000) {
		if (cnt[i] * 2 > N) {
			flag = false;
			break;
		}
	}
	if (!flag) {
		cout << -1;
		return 0;
	}

	sort(ALL(A));
	FOR(i, 0, (N - 1) / 2) {
		int tmp = A[i].first;
		A[i].first = A[i + N / 2].first;
		A[i + N / 2].first = tmp;
	}
	sort(ALL(A), compare);

	FOR(i, 0, N - 1) {
		cout << A[i].first << " ";
	}

	return 0;
}