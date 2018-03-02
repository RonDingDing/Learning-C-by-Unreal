#pragma once
#include "Mammal.h"
class Cat :public Mammal{
 
public:
	int paw;
	Cat();
	void virtual talk();
	~Cat();
};

