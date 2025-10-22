#include <iostream>
using namespace std;

int main() {
	int skor;
	
	cout << "Masukkan skor: ";
	cin >> skor;
	
	if (skor < 50) {
		cout << "Peti Perunggu";
	}
	else if (skor >= 50 && skor <= 99) {
		cout << "Peti Perak";
	}
	else if (skor >= 100 && skor <= 199) {
		cout << "Peti Emas";
	}
	else if (skor >= 200) {
		cout << "Peti Mitos";
	}
	
	return 0;
}
