#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int last = 0;
		int x;
		int maxabs = 0;
		int mx = 0;
		int mn = 1e9;
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (j != 0) {
				if (x == -1) {
					if (last != -1) {
						mx = max(mx, last);
						mn = min(mn, last);
					}
				}
				else {
					if (last == -1) {
						mx = max(mx, x);
						mn = min(mn, x);
					}
					else {
						maxabs = max(maxabs, abs(x - last));
					}
				}
			}
			last = x;
		}
		int k = (mx + mn) / 2;
		maxabs = max(maxabs, (mx - mn + 1) / 2);
		cout << maxabs << " " << k << endl;
	}
	return 0;
}
