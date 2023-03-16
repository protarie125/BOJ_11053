#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto a = vi(n);
	auto d = vi(n, 0);
	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		cin >> a[i];

		auto mxd = int{ 0 };
		for (auto j = 0; j < i; ++j) {
			if (a[j] < a[i]) {
				if (mxd < d[j]) {
					mxd = d[j];
				}
			}
		}

		d[i] = mxd + 1;
		if (ans < d[i]) {
			ans = d[i];
		}
	}

	cout << ans;

	return 0;
}