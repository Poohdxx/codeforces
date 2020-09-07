#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a < b) cout << b - a << endl;
		else if (a % b == 0) cout << 0 << endl;
		else {
			int r = a / b;
			cout << b * (r + 1) - a << endl;
		}
	}
	return 0;
}
