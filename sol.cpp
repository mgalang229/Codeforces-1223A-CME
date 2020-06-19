#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n;
	cin >> n;
	int cnt = 0;
	if(n % 2 != 0) {
		while(n % 2 != 0) {
			n++;
			cnt++;
		}
	}
	else if(n == 2) cnt = 2;
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
