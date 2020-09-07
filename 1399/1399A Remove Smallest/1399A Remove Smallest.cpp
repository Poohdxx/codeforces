#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int t = 0; t < n; t++) {
		int m;
		cin >> m;
		vector<int> v(m);
		for (int i = 0; i < m; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		bool test = true;
		for (int i = 1; i < m; i++) {
			if (v[i] - v[i - 1] > 1) {
				test = false;
				break;
			}
		}
		if (test) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
