#include <iostream>
//int main()
//{
//	using namespace std;
//	char ch; // declare a char variable
//	cout << "Enter a character: " << endl;
//	cin >> ch;
//	cout << "Hola! ";
//	cout << "Thank you for the " << ch << " character." << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}



#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M'; // assign ASCII code for M to ch
	int i = ch; // store same code in an int
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch = ch + 1; // change character code in ch
	i = ch; // save new character code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;
	// using the cout.put() member function to display a char
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	// using cout.put() to display a char constant
	 
	cout << endl << "Done" << endl;
	cin.get();
	cin.get();

	return 0;
}