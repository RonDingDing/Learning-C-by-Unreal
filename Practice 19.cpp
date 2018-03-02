#include <iostream>
int stonetolb(int sts);

int main() {
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;
	int aunt = stonetolb(20);
	int aunts = aunt + stonetolb(10);
	cout << "Ferdie weighs " << stonetolb(16) << " pounds." << endl;
	cin.get();
	cin.get();
	cin.get();
	return 0;
}

int stonetolb(int sts) {
	return 14 * sts;
}
