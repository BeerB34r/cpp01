#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
class Zombie {
	public:
		Zombie(std::string name);
		Zombie();
		Zombie(const Zombie&);
		~Zombie();

		void	announce(void);
		void	christen(std::string name);
	protected:
	private:
		std::string	name;
};

#endif // ZOMBIE_HPP

