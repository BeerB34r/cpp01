#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(const std::string& type);
		Weapon(const Weapon& other);
		~Weapon();

		const std::string& getType();
		void setType(const std::string& type);
	private:
		std::string type;
	protected:
};

#endif // WEAPON_HPP
