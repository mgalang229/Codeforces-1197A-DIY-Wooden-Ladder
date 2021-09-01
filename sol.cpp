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
		// sort the sequence in non-decreasing order and count the number of steps
		// that can be put into the ladder and keep in mind the maximum base of the ladder
		// which is the second to the last element (the last element will be the other base)
		sort(a.begin(), a.end());
		int cnt = 0;
		for (int i = 0; i < n - 2; i++) {
			if (cnt + 1 < a[n - 2]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
