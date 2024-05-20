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

int n, m, t;
int k;
int tmp = 0;
int main() {
    fastio;
    vector<int>a; vector<int>b;
    cin >> t;
    while (t--) {
        a.clear(); b.clear();
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> k;
            a.push_back(k);
        }
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> k; b.push_back(k);
        }
        sort(all(a));
        sort(all(b));
        if (a[n - 1] >= b[m - 1]) {
            cout << "Alice" << endl;
        }
        else if (a[n - 1] <= b[m - 1]) {
            cout << "Bob" << endl;
        }
        if (a[n - 1] <= b[m - 1]) {
            cout << "Bob" << endl;
        }
        else if (a[n - 1] >= b[m - 1]) {
            cout << "Alice" << endl;
        }



    }
}