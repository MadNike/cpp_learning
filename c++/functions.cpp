#include <iostream>
#include <string>
#include <cstdlib>

std::string get_name(){
	std::string name;
	std::cout << "Input your name: ";
	std::cin >> name;
	return name;
}

void print_name(std::string name){
	std::cout << name << std::endl;
}

int main(){
	system("chcp 1251>nul");
	print_name(get_name());
	system("pause>nul");
	return 0;
}
