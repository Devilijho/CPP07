#pragma once

#include <cstddef>
#include <ctime>
#include <time.h>
#include <iostream>
#include <cstdlib>

template <typename TypeArray> class Array
{
	public:
		TypeArray *array;
		Array()
		{
			array = NULL;
		}
		Array(size_t n)
		{
			TypeArray new_array[n];
			array = new_array;
		}
		Array(const Array &other)
		{
			(void)other;
		}
		Array *operator=(const Array &other)
		{
			if (this != other)
			{
				this = other;
			}
			return (this);
		}
		TypeArray	*operator[](size_t pos)
		{
			if (pos >= size())
			{
				throw std::exception();
			}
			return array[pos];
		}
		size_t size()
		{
			TypeArray *ptr = array;
			size_t size = 0;
			while (ptr != NULL)
			{
				ptr++;
				size++;
			}
			return (size);
		}
};
