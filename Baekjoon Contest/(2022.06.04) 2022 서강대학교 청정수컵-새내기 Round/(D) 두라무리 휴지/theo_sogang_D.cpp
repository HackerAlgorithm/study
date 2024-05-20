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
	int n; cin >> n; string st1; string st2;
	cin >> st1;
	cin >> st2;
	if (st1[0] != st2[0] || st1[n - 1] != st2[n - 1]) {
		cout << "NO"; return 0;
	}
	char arr[5] = { 'a','e','i','o','u' };
	vector<char>a; vector<char>b;
	for (int i = 1; i < st1.size() - 1; i++) {
		for (int k = 0; k < 5; k++) {
			if (st1[i] == arr[k]) {
				a.push_back(arr[k]);
				st1.erase(st1.begin() + i);
				i--;
				break;
			}
		}
	}
	for (int i = 1; i < st2.size() - 1; i++) {
		for (int k = 0; k < 5; k++) {
			if (st2[i] == arr[k]) {
				b.push_back(arr[k]);
				st2.erase(st2.begin() + i);
				i--;
				break;
			}
		}
	}
	sort(all(a)); sort(all(b));
	if (st1 != st2) {
		cout << "NO"; return 0;
	}
	if (a.size() != b.size()) {
		cout << "NO"; return 0;
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) {
			cout << "NO"; return 0;
		}
	}
	cout << "YES";
}