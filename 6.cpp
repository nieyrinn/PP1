#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int upper = 0;
	int lower = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			upper++;
		}
		else {
			lower++;
		}
	}
	cout << lower << " " << upper;
	return 0;
}
