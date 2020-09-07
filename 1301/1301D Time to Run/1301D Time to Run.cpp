#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int m, n, k;
	cin >> m >> n >> k;
	const int total = 4 * m * n - 2 * n - 2 * m;
	if (k > total) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	vector<pair<int, string>> step;

	int t = min((n - 1), k) / 4;
	int r = min((n - 1), k) % 4;
	if (t > 0) step.emplace_back(t, "RRRR");
	if (r > 0) step.emplace_back(1, string(r, 'R'));
	k -= (4 * t + r);

	t = min((n - 1), k) / 4;
	r = min((n - 1), k) % 4;
	if (t > 0) step.emplace_back(t,"LLLL");
	if (r > 0) step.emplace_back(1,string(r, 'L'));
	k -= (4 * t + r);
	if (k > 0) {
		if (m > 1) step.emplace_back(1,"D");
		else step.emplace_back(1,"U");
	}
	k--;

	int row = 1;
	const string u = "RUD";
	while (row < m && k > 0) {
		if (k >= 3 * (n - 1)) {
			if (n - 1 > 0) step.emplace_back(n - 1, u);
			k -= 3 * (n - 1);
		}
		else {
			int rt = k / 3;
			int rr = k % 3;
			if (rt > 0) step.emplace_back(rt, u);
			if (rr > 0) step.emplace_back(1 ,u.substr(0, rr));
			k = 0;
		}

		if (k > 0) {
			t = min((n - 1), k) / 4;
			r = min((n - 1), k) % 4;
			if (t > 0) step.emplace_back(t,"LLLL");
			if (r > 0) step.emplace_back(1,string(r, 'L'));
			k -= (4 * t + r);
		}

		if (k > 0) {
			if (row < m-1) step.emplace_back(1,"D");
			else step.emplace_back(1,"U");
			k--;
		}
		
		row++;
	}

	if (k > 0) {
		t = k / 4;
		r = k % 4;
		if (t > 0) step.emplace_back(t, "UUUU");
		if (r > 0) step.emplace_back(1,string(r, 'U'));
	}
	
	cout << step.size() << endl;
	for (auto& i : step) {
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}
