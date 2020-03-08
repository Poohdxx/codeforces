#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int x;
		int sum = 0;
		int zero = 0;
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (x == 0) zero++;
			sum += x;
		}
		int res = zero;
		sum += zero;
		if (sum == 0) res++;
		cout << res << endl;
	}
	return 0;
}