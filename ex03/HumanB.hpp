#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(const std::string& name);
		HumanB(const HumanB&);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon& weapon);
	private:
		Weapon*	weapon;
		std::string name;
	protected:
};

#endif // HUMANB_HPP
