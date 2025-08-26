#pragma once

#include <string>
#include <iostream>

template<typename T>

void iter(T* addr, size_t lenght, void (*f)(T &))
{
	for (size_t i = 0; i < lenght; i++)
	{
		f(addr[i]);
	}
}
