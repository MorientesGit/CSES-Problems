#include<bits/stdc++.h>
using namespace std;

/*
	Complexity:  O(nlogn)
	Denotes n like the size of the input 
*/

int main() {
	int n, data;
	vector<int> v;

	cin >> n;
	while (n--) {
		cin >> data;
		v.push_back(data);
	}

	int solution = 1;
	sort(v.begin(), v.end());

	for (int i = 1; i < v.size(); i++) {
		if (v[i] != v[i - 1]) solution++;
	}

	cout << solution;
}