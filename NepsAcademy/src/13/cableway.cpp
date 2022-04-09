#include <iostream>
using namespace std;

int main() {
	int a, s;
	cin >> a;
	cin >> s;

	int total = a + s;
	if (total > 50)
		cout << "N";
	else
		cout << "S";

	return 0;
}
