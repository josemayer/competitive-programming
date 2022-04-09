#include <iostream>
using namespace std;

int main() {
	float score1, score2;
	cin >> score1;
	cin >> score2;

	int avg = (score1 + score2) / 2;

	if (avg >= 7) {
		cout << "Aprovado";
	} else if (avg < 7 && avg >= 4) {
		cout << "Recuperacao";
	} else {
		cout << "Reprovado";
	}

	return 0;
}
