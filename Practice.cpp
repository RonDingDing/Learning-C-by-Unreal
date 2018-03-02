#include <iostream>
#include <string>
using namespace std;

struct Vector {
	float x, y, z;
};

struct Player {
	string name;
	int hp;
	Vector position;
};


int main() {
	Vector v;
	v.x = 20, v.y = 30, v.z = 40;
	cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;
	 

	Player me;
	me.name = "William";
	me.hp = 100;
	me.position.x = me.position.y = me.position.z = 0;
	cout << "me.position.x: " << me.position.x << endl;
	
	//如下，多个指针可以同时指向一个变量，然后修改原变量的值。
	Player* ptrMe;
	ptrMe = &me;
	ptrMe->hp -= 33;
	ptrMe->name = "John";
	cout << "ptrMe.hp: " << me.hp << ", " << "ptrMe.name: " << me.name << endl;
	

	Player* ptr2Me;
	ptr2Me = &me;
	ptr2Me->hp -= 33;
	ptrMe->hp += 100;
	
	cout << "ptr2Me.hp: " << me.hp << ", " << "ptr2Me.name: " << me.name << endl;
	system("pause");
};