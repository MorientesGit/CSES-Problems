#include<bits/stdc++.h>
using namespace std;

/*
	Complexity: O(nlogn)
	n: Number of children
*/

int main() {
	int n, x, data;
	vector<int> weights;

	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> data;
		weights.push_back(data);
	}

	sort(weights.begin(), weights.end());

	int gondolas = 0;
	int i = 0;
	int j = weights.size()-1;

	while (i < j) {
		if (weights[i] + weights[j] <= x) {
			gondolas++;
			i++;
			j--;
		}
		else {
			if (weights[j] <= x) gondolas++;
			j--;
		}
	}

	if (i == j && weights[i] <= x) gondolas++;

	cout << gondolas;
}