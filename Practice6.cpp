#include <iostream>
#include <string>

using namespace std;

int main() {
	char character = 'A';
	string s = "Hello";
	int integer = 1;
	printf("integer %d, character %c\n", integer, character);
	printf("string %s\n", s);  
	printf("string %s\n", s.c_str()); //��ӡ���ַ�������ô�鷳
	system("pause");

};
