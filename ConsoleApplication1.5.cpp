#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	int s = a + b;
	int r = a - b;
	int p = a * b;
	int h = a / b;
	cout << s << " " << r << " " << p << " " << h;
	return 0;
}
