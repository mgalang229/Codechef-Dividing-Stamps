#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// use long long to input n to avoid overflow
	long long n;
	cin >> n;
	// use long long to calculate the total sum to avoid overflow because
	// it would result to an error
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		sum += c;
	}
	cout << (sum == (n * (n + 1)) / 2 ? "YES" : "NO") << '\n';
	return 0;
}
