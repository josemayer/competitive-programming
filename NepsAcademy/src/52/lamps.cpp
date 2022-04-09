#include <iostream>
using namespace std;

int lampSwitch(int state) {
	if (state == 0)
		return 1;
	else
		return 0;
}

int main() {
	int lampA = 0;
	int lampB = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int interrupter;
		cin >> interrupter;

		if (interrupter == 1) {
			lampA = lampSwitch(lampA);
		} else if (interrupter == 2) {
			lampA = lampSwitch(lampA);
			lampB = lampSwitch(lampB);
		}
	}
	cout << lampA << endl;
	cout << lampB << endl;

	return 0;
}
