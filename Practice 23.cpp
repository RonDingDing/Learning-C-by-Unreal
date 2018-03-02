#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct << "inseam = " << inseam << " (octal for 42)" << endl;


	chest = 42; // decimal integer literal
	waist = 0x42; // hexadecimal integer literal
	inseam = 042; // octal integer literal
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
 


	cin.get();
	cin.get();
	return 0;
}