#include "Array.hpp"

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	std::cout << "___________________________ Creating array and array wrapper class and filling them... ____________________________________" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		mirror[i] = i;
		numbers[i] = i;
	}
	{
		std::cout << "___________________________ Trying copy constructor and assignment operator... ____________________________________" << std::endl;
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << "tmp: " << tmp[i] << " test: " << test[i] << " numbers: " << numbers[i] << std::endl;
			if (tmp[i] != numbers[i])
			{
				std::cerr << "tmp and numbers didn't save the same value!!" << std::endl;
				return 1;
			}
			if (tmp[i] != test[i])
			{
				std::cerr << "tmp and test didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "Copy constructor and assignment operator work, success" << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		std::cout << "Trying to access invalid index in array (-2)" << std::endl;
		numbers[-2] = 0;
		std::cout << "ERROR" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Trying to access invalid index in array (MAX_VAL)" << std::endl;
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	std::cout << "SUCCESS" << std::endl;
	return 0;
}
