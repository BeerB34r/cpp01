#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
public:
	Harl();
	~Harl();
	static void	complain(std::string level);
	static void	replies(std::string level);
private:
	static const std::string debugMessages[];
	void	debug(void);
	static const std::string infoMessages[];
	void	info(void);
	static const std::string warningMessages[];
	void	warning(void);
	static const std::string errorMessages[];
	void	error(void);
protected:
};

#endif // HARL_HPP
