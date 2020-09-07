#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string solve(int64_t m, int64_t k) {
	int64_t i = (sqrt(1 + 8 * k) - 1) / 2;
	if (i * (i + 1) / 2 < k) i++;

	int64_t j = (i - 1) * i / 2;
	int64_t second = k - j - 1;
	return string(m - i - 1, 'a') + "b" + string(i - second - 1, 'a') + "b" + string(second, 'a');
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m, k;
		cin >> m >> k;
		cout << solve(m, k) << endl;
	}
	return 0;
}

