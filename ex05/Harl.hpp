#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
public:
	static void	complain(std::string level);
private:
	enum level { DEBUG, INFO, WARNING, ERROR };
	static level	think(std::string thought);
	static const std::string debugMessages[];
	static void	debug(void);
	static const std::string infoMessages[];
	static void	info(void);
	static const std::string warningMessages[];
	static void	warning(void);
	static const std::string errorMessages[];
	static void	error(void);
protected:
};

#endif // HARL_HPP
