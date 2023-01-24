#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	int a, b, c; cin >> a >> b >> c;

	auto ans = int{ 0 };
	ans += min(n, a);
	ans += min(n, b);
	ans += min(n, c);

	cout << ans;

	return 0;
}