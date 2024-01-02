#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int c = pow(a, 2) + pow(b, 2);
	double d = sqrt(c);
	cout << setprecision(4) << d;
}
