/*#include <iostream>;
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
};*/

#include <iostream>;
using namespace std;



/*int main() {
	int a;
	cout << "Enter integer value: ";
	cin >> a;
	if (a > 0) {
		cout << "a is positiv" << endl;
	}
	else {
		if (a == 0) {
			cout << "a is 0" << endl;
		}
		else {
			cout << "a is negative" << endl;
		}
	}


	return 0;
} */

//int main() {
//	int x, a, b;
//	cout << "enter a: ";
//	cin >> a;
//	cout << "enter b: ";
//	cin >> b;
//	cout << "enter integer value x: ";
//	cin >> x;
//	if ((x > a) && (x < b)) {
//		cout << "x is in (a;b)" << endl;
//	}
//	else {
//		cout << "x is not in (a;b)" << endl;
//	}
//
//}

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
		cout << sum;
	}
}