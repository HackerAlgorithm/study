#include <bits/stdc++.h>
using namespace std;

int n;
string str;
char arr[14] = { 'q','w','e','r','t','a','s','d','f','g','z','x','c','v' };

int main() {
	cin >> n >> str;
	for (int i = 0; i < 14; i++) {
		if (arr[i] == str[n - 1]) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}