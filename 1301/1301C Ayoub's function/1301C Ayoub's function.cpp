#include <iostream>
#include <cstdint>

using namespace std;

int64_t get(int64_t l) {
	return l * (l + 1) / 2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int64_t m, n;
		cin >> m >> n;
		int64_t x = (m - n) / (n + 1);
		int64_t y = (m - n) % (n + 1);
		int64_t res = get(m) - get(x + 1) * y - get(x) * (n + 1 - y);
		cout << res << endl;
	}
	return 0;
}
