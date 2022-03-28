#ifndef CPP_PISCINE_HUMANA_H
#define CPP_PISCINE_HUMANA_H

# include "Weapon.h"

class HumanA {
private:
    Weapon &_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon &weapon);
};


#endif //CPP_PISCINE_HUMANA_H
