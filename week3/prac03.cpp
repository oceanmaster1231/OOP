#include <iostream>

int main() {
	char target[] = "Kang DaJung";
	long b[043];
	int a = 18;
	int i = 78;
	int *c = new int[802];
	const char * copy = "is no no";
	char name = 'a';

	std::cout << (int*)&name << std::endl;
	std::cout << &target << std::endl;
	std::cout << (int*)&name - (int*)&target << std::endl;
	std::cout << (int*)&name+i << std::endl;
}	
