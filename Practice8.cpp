#include <iostream>
using namespace std;
int x = 4, y = 5;
bool isHungry = true;

void main(){
	cout << "Is x equal to y? " << (x == y) << endl;
	if (isHungry) {
		cout << "Preparing snacks." << endl;
		cout << "Eating .. " << endl;	
	}
	else cout << "I'm not hungry" << endl;	
	cout << (x || y) << endl;
	cout << "Sitting on the couch.. " << endl;
	system("pause");
};	