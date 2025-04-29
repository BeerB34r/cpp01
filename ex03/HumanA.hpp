#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(const std::string& name, Weapon& weapon);
		HumanA(const HumanA&);
		~HumanA();

		void	attack();
	private:
		Weapon&	weapon;
		std::string name;
	protected:
};

#endif // HUMANA_HPP
