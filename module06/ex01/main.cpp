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
	Data		*ptr = new Data;
	Data		*new_ptr;
	uintptr_t	raw;
	ptr->str = "KEKW";
	ptr->i = 42;
	ptr->f = 42.5f;
	std::cout << "ptr address = " << ptr << std::endl;
	raw = serialize(ptr);
	std::cout << "raw address = " << raw << std::endl;
	new_ptr = deserialize(raw);
	std::cout << "new_ptr address = " << raw << std::endl;
//	new_ptr->i = 25; // if we try to assign another value to new_ptr, value in ptr will be also changed;
//	std::cout << "ptr->str = " << ptr->i << std::endl;
	std::cout << "new_ptr->str = " << new_ptr->str << std::endl;
	std::cout << "new_ptr->i = " << new_ptr->i << std::endl;
	std::cout << "new_ptr->f = " << new_ptr->f << std::endl;
	delete ptr;
	return EXIT_SUCCESS;
}