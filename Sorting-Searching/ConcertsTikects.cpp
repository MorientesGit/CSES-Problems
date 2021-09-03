#include<bits/stdc++.h>
using namespace std;

/*
	Complexity: O(nlogn + mlogm)
	n: Number of tickets
	m: Number of customers
*/

int main() {
	int n, m, data;

	cin >> n >> m;
	set<pair<int, int>> tickets;
	for (int i = 0; i < n; i++) {
		cin >> data;
		tickets.insert({ data,i });
	}

	vector<int> customers(m);
	for (int i = 0; i < m; i++) cin >> customers[i];

	for (int i = 0; i < m; i++) {
		auto it = tickets.lower_bound({ customers[i] + 1,0 });
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		}
		else {
			it--;
			cout << (*it).first << "\n";
			tickets.erase(it);
		}
	}
}