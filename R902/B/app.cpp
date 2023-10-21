#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVectorOfPairs(vector<pair<int, int>> myVector) {
	cout << "[";
	for (const auto& element : myVector) {
		cout << "(" << element.first << ", " << element.second << "), ";
	}
	cout << "]" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, p;
		cin >> n >> p;
		vector<pair<int, int>> inp(n);
		for (int i = 0; i < n; i++) cin >> inp[i].second;
		for (int i = 0; i < n; i++) cin >> inp[i].first;
		sort(inp.begin(), inp.end());
		int total = n-1, ind = 0;
		long long sum = p;
		while (total > 0) {
			int a = inp[ind].second, b = inp[ind].first;
			sum += 1LL * min(a, total) * min(b, p);
			total -= a;
			ind++;
		}
		//printVectorOfPairs(inp);
		cout << sum << endl;
	}
}
