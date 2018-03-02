#include "Cat.h"
#include <iostream>
using namespace std;

 
Cat::Cat(){
	paw = 4;
	cout << "Cat is born." << endl;
};

void Cat::talk() {
	cout << "Cat talks." << endl;
};


Cat::~Cat(){
	cout << "Cat is dead." << endl;
};
