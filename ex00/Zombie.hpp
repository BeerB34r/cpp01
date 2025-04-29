#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
class Zombie {
	public:
		Zombie(std::string name);
		Zombie(const Zombie&);
		~Zombie();

		void	announce(void);
	protected:
	private:
		Zombie();
		std::string	name;
};

#endif // ZOMBIE_HPP

