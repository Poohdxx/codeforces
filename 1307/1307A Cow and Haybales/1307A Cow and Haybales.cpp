#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, d;
		cin >> n >> d;
		int res = 0;
		for (int j = 0; j < n; j++) {
			int p;
			cin >> p;
			if (j == 0) {
				res += p;
				continue;
			}
			int a = d / j;
			if (a >= p) {
				res += p;
				d -= p * j;
			}
			else {
				res += a;
				d = 0;
			}
		}
		cout << res << endl;
	}
	return 0;
}

