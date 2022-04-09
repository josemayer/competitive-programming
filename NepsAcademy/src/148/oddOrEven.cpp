#include <iostream>
using namespace std;

int main() {
	int cino, bino;
	cin >> cino;
	cin >> bino;

	int sum = cino + bino;

	if (sum % 2 == 0)
		cout << "Bino";
	else
		cout << "Cino";

	return 0;
}
