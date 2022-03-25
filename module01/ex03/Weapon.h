#ifndef CPP_PISCINE_WEAPON_H
#define CPP_PISCINE_WEAPON_H

#include <iostream>

class Weapon {
private:
    std::string _type;

public:
    const std::string &getType();
    void        setType(std::string type);
};


#endif //CPP_PISCINE_WEAPON_H
