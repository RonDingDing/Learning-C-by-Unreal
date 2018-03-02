#pragma once
class Mammal{
protected:
	int hp;
	double speed;
public:
	Mammal();
	~Mammal();
	void breathe();
	virtual void talk();
	virtual void walk();
};

