#include <iostream>
using namespace std;

int main() {
	int n;
	int brokenGlasses = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int cans, glasses;
		cin >> cans;
		cin >> glasses;

		if (cans > glasses)
			brokenGlasses += glasses;
	}
	cout << brokenGlasses;
	return 0;
}
