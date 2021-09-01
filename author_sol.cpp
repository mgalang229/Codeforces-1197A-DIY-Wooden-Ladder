#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the sequence in non-decreasing order and find the minimum value between:
		// a[n - 2] - 1 = no. of valid ladder steps
		// n - 2 = no. of remaining steps after using two base planks (if remaining steps are less than base)
		sort(a.begin(), a.end());
		cout << min(a[n - 2] - 1, n - 2) << '\n';
	}
	return 0;
}
