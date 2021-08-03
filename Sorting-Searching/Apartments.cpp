#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k, data;
	vector<int> desires;
	vector<int> apartments;

	cin >> n >> m >> k;
	for(int i = 0; i < n ; i++) {
		cin >> data;
		desires.push_back(data);
	}

	for (int i = 0; i < m; i++) {
		cin >> data;
		apartments.push_back(data);
	}

	int solution = 0;
	int i = 0;
	int j = 0;
	sort(desires.begin(), desires.end());
	sort(apartments.begin(), apartments.end());

	while(i < desires.size() && j < apartments.size()) {
		if (abs(desires[i] - apartments[j]) <= k) {
			solution++; i++; j++;
		}
		else if (desires[i] > apartments[j] + k) j++;
		else i++;
	}

	cout << solution;
}