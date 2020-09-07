#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int m;
	cin >> m;
	for (int k = 0; k < m; k++) {
		int n;
		string x;
		cin >> n >> x;
		string a = "1", b = "1";
		int mx = -1;
		for (int c = 1; c < n; c++) {
			if (x[c] == '0') {
				a.push_back('0');
				b.push_back('0');
			}
			else if (x[c] == '1') {
				if (mx == -1) {
					a.push_back('0');
					b.push_back('1');
					mx = 1;
				}
				else if (mx == 0) {
					a.push_back('0');
					b.push_back('1');
				}
				else {
					a.push_back('1');
					b.push_back('0');
				}
			}
			else {
				if (mx == -1) {
					a.push_back('1');
					b.push_back('1');
				}
				else if (mx == 0) {
					a.push_back('0');
					b.push_back('2');
				}
				else {
					a.push_back('2');
					b.push_back('0');
				}
			}
		}
		cout << a << endl;
		cout << b << endl;
	}
	return 0;
}
