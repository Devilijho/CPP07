#include "iter.hpp"
#include <cstring>

void nuf(int &n)
{
	n++;
}

void fun(char &c)
{
	(c)++;
}

int main()
{
	{
		std::string str = "gnk@";
		char *ptr = &str[0];
		std::cout << ptr << std::endl;
		::iter(ptr, strlen(ptr), &fun);
		std::cout << ptr << std::endl;
	}
	{
		int n[5] = {1, 3, 5, 7 ,9};
		for (int i = 0; i < 5; i++)
			std::cout << n[i];
		::iter(n, 5, &nuf);
		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << n[i];
	}
}
