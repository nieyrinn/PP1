#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i < s.size(); i++) {
		s[i] = s[i] - '0';
		count += s[i];
	}
		if(count % s[s.size()-1] == 0) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

	return 0;
}
