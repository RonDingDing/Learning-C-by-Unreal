#include <iostream>

using namespace std;
void main() {
	int x = 22;
	int *px;
	px = &x;

	//ע��*px��px������
	cout << *px << ", " << px << endl;
	system("pause");
};