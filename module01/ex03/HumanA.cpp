# include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {}

HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon &weapon)
{
    this->_weapon = weapon;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}