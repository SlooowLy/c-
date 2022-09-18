# ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    Weapon *weapon;
    std::string name;
    public :
        HumanB (std::string name_);
        void    setWeapon(Weapon &weapon_);
        void    attack();
};

# endif