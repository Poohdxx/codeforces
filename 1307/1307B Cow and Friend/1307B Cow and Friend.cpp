#include <iostream>
#include <algorithm>

using namespace std;

int64_t solve(const int& n, const int64_t& x) {
 	int64_t m = 0;
	bool match = false;
	for (int i = 0; i < n; i++) {
		int64_t f;
		cin >> f;
		if (f == x) {
			match = true;
		}
		m = max(m, f);
	}
	if (match) return 1;
	if (m > x) return 2;
	return x / m + !!(x % m);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int n;
		int64_t x;
		cin >> n >> x;
		cout << solve(n, x) << endl;		
	}
	return 0;
}

