#include <iostream>

int fib(int number){
	if (number == 1)
		return 0;
	if (number == 0)
		return 1;
	return fib(number - 1) + fib(number - 2);
}

int main () {
	int i = 0;
	while (i < 10){
		std::cout << fib(i) << std::endl;
		i++;
	}
	return 0;
}
