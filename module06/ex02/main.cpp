//
// Created by Johnny Zaev on 30.06.2022.
//

#include <iostream>

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Not enough arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string str = static_cast<std::string>(argv[1]);
	return 0;
}