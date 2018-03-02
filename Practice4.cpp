#include <iostream>

using namespace std;
void main() {
	int x = 22;
	int *px;
	px = &x;

	//注意*px和px的区别
	cout << *px << ", " << px << endl;
	system("pause");
};