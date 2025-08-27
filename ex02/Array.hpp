#pragma once

#include "Array.tpp"

template <typename T> class Array
{
	public:
		Array();
		Array(size_t n);
		Array(const Array &other);
		Array *operator=(const Array &other);
		T	operator[](size_t pos);
		size_t size();
};
