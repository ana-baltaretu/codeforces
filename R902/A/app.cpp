#include <iostream>
using namespace std;

int main()
{
	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n-1; i++) {
			cin >> a;
			sum += a;
		}
		cout << -sum << endl;
	}
}
