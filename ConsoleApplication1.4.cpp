#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	a = pow(a, 2);
	b = pow(b, 2);
	int s = a + b;
	int r = a - b;
	int p = a * b;
	int h = a / b;
	cout << s << " " << r << " " << p << " " << h;
	return 0;
}