# ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"


class HumanA
{
    Weapon *weapon;
    std::string name;
    public :
        HumanA (std::string name_, Weapon &weapon);
        void    attack();
};

# endif