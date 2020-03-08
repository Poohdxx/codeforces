#include <iostream>
#include <vector>
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
		vector<int> v;
		int x;
		for (int j = 0; j < 2 * n; j++) {
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout << v[n] - v[n - 1] << endl;
	}
	return 0;
}
