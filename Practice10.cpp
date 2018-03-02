#include <iostream>
using namespace std;

int main() {
	enum Vegetable { Potato, Cabage, Broccoli, Zucchini };
	enum Vegetables { Potatos, Cabages, Broccolis, Zucchinis};
	
	Vegetable b = Potato;
	Vegetables a = Potatos;
	cout << ( a == b) << endl;
	system("pause");


};