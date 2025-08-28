#pragma once

#include <cstddef>
#include <ctime>
#include <time.h>
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750

template <typename Type> class Array
{
	public:
		Type *array;
		Array()
		{
			array = NULL;
			array_size = 0;
		}
		Array(size_t n)
		{
			array = new Type[n];
			array_size = n;
			for (size_t pos = 0; pos < n; pos++)
				array[pos] = Type();
		}
		Array(const Array &other)
		{
			array = new Type[other.array_size];
			array_size = other.array_size;
			for (size_t pos = 0; pos < array_size; pos++)
				array[pos] = other[pos];
		}
		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				if (this->array != NULL)
					delete[] this->array;
				this->array = new Type[other.array_size];
				this->array_size = other.array_size;
				for (size_t pos = 0; pos < other.array_size; pos++)
					array[pos] = other[pos];
			}
			return (*this);
		}
		~Array()
		{
			if (this->array != NULL)
			{
				delete[] this->array;
			}
		}
		Type	&operator[](size_t pos)
		{
			if (pos >= array_size)
			{
				throw std::exception();
			}
			return array[pos];
		}
		Type	&operator[](size_t pos) const
		{
			if (pos >= array_size)
			{
				throw std::exception();
			}
			return array[pos];
		}
		size_t size()
		{
			return (array_size);
		}
		private:
			size_t	array_size;
};
