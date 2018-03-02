#include <iostream>
#include "Mammal.h"
using namespace std;


Mammal::Mammal() {
	hp = 100;
	speed = 1.0;
	cout << "A mammal is created." << endl;
};

void Mammal::breathe() {
	cout << "Breathe in, breathe out." << endl;
};

void Mammal::talk() {
	cout << "Mammal talk.. " << endl;
};

void Mammal::walk() {
	cout << "Mammal walk.. " << endl;
};

Mammal::~Mammal(){
	cout << "A mammal is dead." << endl;
};
