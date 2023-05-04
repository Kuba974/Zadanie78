#include <iostream>

using namespace std;

int main()
{
	int licznik1, licznik9, n, cyfra;
	for (int i = 2; i <= 12000; i++) {
		int i2 = i;

		bool pierwsza = true;
		for (int j = 2; j < i / 2 + 1; j++) {
			if (i % j == 0) {
				pierwsza = false;
			}
		}

		if (pierwsza == false) {
			continue;
		}

		if (pierwsza == true) {
			licznik1 = 0;
			licznik2 = 0;
			while (i2 >= 1) {
				cyfra = i2 % 10;
				if (cyfra / 1 == 1 && cyfra % 1 == 0) {
					licznik1++;
				}
				if (cyfra / 9 == 1 && cyfra % 9 == 0) {
					licznik9++;
				}
				i2 /= 10;


			}
			if ((licznik1 == 1 && licznik2 == 0) || (licznik1 == 0 && licznik2 == 1)) {
				cout << i << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}