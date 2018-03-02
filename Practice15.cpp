#include <iostream>
#include <string>

using namespace std;

int main() {
	string temps[5];
	temps[0] = "aaa";
	temps[1] = "bbb";
	temps[2] = "ccc";
	 
	temps[4] = "eee";
	
	for (int i = 0; i <= 4; i++) {
		cout << temps[i] <<  endl;
	}
	system("pause");
}