#ifndef CPP_PISCINE_HUMANB_H
#define CPP_PISCINE_HUMANB_H

# include "Weapon.h"

class HumanB {
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon &weapon);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif //CPP_PISCINE_HUMANB_H
