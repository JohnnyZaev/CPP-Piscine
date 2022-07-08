//
// Created by Johnny Zaev on 30.06.2022.
//

#include <iostream>

struct Data
{
	int i;
	std::string str;
	float f;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{

	return EXIT_SUCCESS;
}