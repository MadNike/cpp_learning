#include <iostream>
#include <string>
#include <set>


int is_isogram(std::string str){
	std::set<char> s;
	for (int i=0; i < str.size(); i++){
		s.insert(str[i]);
	}
	if (s.size() == str.length()) return true;
	else return false;
}

int main () {
	
	std::cout << is_isogram("jopas");
	return 0;
}

