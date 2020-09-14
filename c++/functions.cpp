#include <iostream>
#include <string>


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
	print_name(get_name());
	return 0;
}
