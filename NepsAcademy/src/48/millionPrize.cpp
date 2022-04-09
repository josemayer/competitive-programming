#include <iostream>
using namespace std;

int main() {
	int targetAccesses = 10e5;
	int totalAccesses = 0;
	int days = 0;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int dailyAccesses;
		cin >> dailyAccesses;
		
		totalAccesses += dailyAccesses;
		days++;

		if (totalAccesses >= targetAccesses) {
			cout << days;
			return 0;
		}
	}
	cout << "Nao chegou a " << targetAccesses <<  " acessos!";
	return 0;
}
