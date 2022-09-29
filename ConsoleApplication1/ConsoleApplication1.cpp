#include <iostream>;
using namespace std;

int main() {
	int a, b, res;
	char op;
	cin >> a >> b >> op;
	bool f = true;
	switch (op) {
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default: cout << "Unknown operation";
		f = false;
	}
	if (f) cout << "Result is: " << res;

	

	return 0;
};