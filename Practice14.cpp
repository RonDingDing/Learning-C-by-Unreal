 
#include <iostream>
using namespace std;

class Player {
	string name;
	int hp;
public:
	Player() { cout << "Player born" << endl; };
	void fine() { cout << "Player ing." << endl; };
	~Player() { cout << "Player died." << endl; };

};

int main() {
	Player *player = new Player();
	delete player;
	player->fine();
	system("pause");

}