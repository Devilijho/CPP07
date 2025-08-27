#pragma once

#include <string>
#include <iostream>

template<typename T, typename T2>

void iter(T* addr, size_t lenght, T2 f)
{
	for (size_t i = 0; i < lenght; i++)
	{
		f(addr[i]);
	}
}
