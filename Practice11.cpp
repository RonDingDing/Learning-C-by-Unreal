#include <iostream>
using namespace std;

enum Mount { Horse = 1, Mare, Sheep, Chocobo };

int main() {
	int mount;
	cout << "Choose your mount: " << endl;
	cout << Horse << " Horse" << endl;
	cout << Mare << " Mare" << endl;
	cout << Sheep << " Sheep" << endl;
	cout << Chocobo << " Chocobo" << endl;
	cout << "Enter a number from 1 to 5 to choose a mount. " << endl;
	cin >> mount;
	switch (mount) {
	case Chocobo:
		cout << "Chocobo" << endl; break;
	case Sheep:
		cout << "Sheep" << endl; break;
	case Horse:
		cout << "Horse" << endl; break;
	case Mare:
		cout << "Mare" << endl; break;
	default:
		cout << "Invalid mount" << endl; break;

	}

	system("pause");
};