#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string a, b, c;
		cin >> a >> b >> c;
		int n = a.size();
		bool pass = true;
		for (int j = 0; j < n; j++) {
			if (c[j] != a[j] && c[j] != b[j]) {
				pass = false;
				break;
			}
		}
		if (pass) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
