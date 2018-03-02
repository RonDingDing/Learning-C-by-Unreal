#include <iostream>
#include <cmath>
using namespace std;

/*
int main() {
	cout << "How big?" << endl;
	int size;
	cin >> size;
	int *array = (int*)malloc(size * sizeof(int));
	for (int index = 0; index < size; index++) {
		array[index] = index * 2;
		cout << array[index] << endl;
	}
	free(array);
	system("pause");

}
*/
int main() {
	double area;
	cout << "Enter the floor area.";
	cin >> area;
	double side  = sqrt(area);
	cout << side << endl;
	cin.get();	cin.get(); 
	return 0;
}
