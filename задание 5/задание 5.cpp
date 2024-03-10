#include <iostream>

int main()
{
		std::cout << "variant: ";
		int var;
		std::cin >> var;
		for (int i = 1; i != 10; ++i) std::cout << var << " x " << i << " = " << var * i << '\n';
		std::cin.ignore();
		std::cin.get();
}
