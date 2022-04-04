#include "Harl.h"
#include <thread>

int main(void)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl harl;

	while (true)
	{
		harl.complain(levels[rand() % 4]);
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(3));
	}
}