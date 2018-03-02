#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Name? " << endl;
	string name;
	cin >> name;
	cout << "Age?" << endl;
	int age;
	cin >> age;
	cout << "Hello " << name << "\nI see you have attained " << age << " years. Congratulations. " << endl;
	system("pause");
};
