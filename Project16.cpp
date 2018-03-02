#include <iostream>
using namespace std;

int main() {
	cout << "How big?" << endl;
	int size;
	cin >> size;
	int *able = new int[size];

	for (int i = 0; i <= size; i++) {
		able[i] = i * 2;
		cout << able[i] << endl;
	}

	delete[] able;
	system("pause");
}