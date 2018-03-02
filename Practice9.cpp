#include <iostream>
using namespace std;
enum Food {
	Fish, Bread, Apple, Orange
};

int main() {
	Food food = Fish;
	switch (food) {
	case Fish:
		cout << "Here fishy." << endl; break;
	case Bread:
		cout << "Delicious bread." << endl; break;
	}
	system("pause");
	return 0;
};
