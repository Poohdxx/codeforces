#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	vector<vector<int64_t>> dp(26, vector<int64_t>(27, 0));

	string s;
	cin >> s;
	for (auto &c : s) {
 		for (int i = 0; i < 26; i++) {
			dp[i][c - 'a'] += dp[i][26];
		}
		dp[c - 'a'][26]++;
	}

	int64_t res = 0;
	for (auto& i : dp) {
		for (auto& j : i) {
			res = max(res, j);
		}
	}

	cout << res << endl;
	return 0;
}
