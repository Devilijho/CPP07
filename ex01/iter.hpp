#pragma once

#include <string>
#include <iostream>
#include <cstddef>
#include <cstring>

template <typename T1, typename T2>
void iter(T1* addr, const size_t lenght, T2 f)
{
	if (!addr || !f)
		return ;
	for (size_t i = 0; i < lenght; i++)
	{
		f(addr[i]);
	}
}
