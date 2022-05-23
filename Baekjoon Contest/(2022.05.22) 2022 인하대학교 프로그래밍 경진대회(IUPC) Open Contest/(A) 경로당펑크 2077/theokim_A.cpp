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
//
int n;
int arr[200001];
int dp[200001][2];
int m[200001];
int mn = 1e9 + 5, mx = -1e9 - 5;
int main() {
    fastio;
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    dp[0][0] = arr[0];
    dp[0][1] = arr[0];
    m[0] = 0;
    for (int i = 1; i < n; i++) {
        dp[i][0] = max(arr[i], dp[i - 1][0]);
        if (arr[i] <= dp[i - 1][1]) {
            dp[i][1] = arr[i];
            dp[i][0] = 0;
        }
        else {
            dp[i][1] = dp[i - 1][1];
        }
        m[i] = max(m[i - 1], dp[i][0] - dp[i - 1][1]);
    }
    for (int i = 0; i < n; i++) {
        cout << m[i] << ' ';
    }
}