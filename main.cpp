#include "Mammal.h"
#include "Cat.h"
#include <iostream>

int main() {
	Mammal mammal;	 	
	mammal.~Mammal(); //注意这样显式调用函数并不会删除实例mammal。
	Cat cat;
	cat.talk();
	std::cout << cat.paw<< std::endl;

	getchar();
};