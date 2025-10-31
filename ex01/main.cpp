#include "iter.hpp"

void nuf(int &n)
{
	n++;
}

void fun(char &c)
{
	(c)++;
}

void times_two(int &i)
{
	i *= 2;
}

int main()
{
	{
		std::cout << "______TEST ON STRING______" << std::endl;
		std::string str = "gnk@";
		char *ptr = &str[0];
		std::cout << "string before iter-> " << ptr << std::endl;
		::iter(ptr, strlen(ptr), &fun);
		std::cout << "string after iter-> "  << ptr << std::endl;
	}
	{
		std::cout << "______TEST ON INTs______" << std::endl;
		int n[5] = {1, 3, 5, 7 ,9};
		std::cout << "int array before iter-> ";
		for (int i = 0; i < 5; i++)
			std::cout << n[i] << " ";
		::iter(n, 5, &nuf);
		std::cout << std::endl;
		std::cout << "int array after iter-> ";
		for (int i = 0; i < 5; i++)
			std::cout << n[i]<< " ";
		::iter(n, 5, times_two);
		std::cout << std::endl;
		std::cout << "int array after iter-> ";
		for (int i = 0; i < 5; i++)
			std::cout << n[i] << " ";
		std::cout << std::endl;
}
}
