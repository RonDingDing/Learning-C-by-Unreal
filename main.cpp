#include "Mammal.h"
#include "Cat.h"
#include <iostream>

int main() {
	Mammal mammal;	 	
	mammal.~Mammal(); //ע��������ʽ���ú���������ɾ��ʵ��mammal��
	Cat cat;
	cat.talk();
	std::cout << cat.paw<< std::endl;

	getchar();
};