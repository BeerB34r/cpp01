#include <iostream>
#include <fstream>
#include <sstream>

void	find_and_replace(std::string& string, std::string to_replace, std::string replacement) {
	if (to_replace == replacement) return ;

	for (std::string::size_type i = 0; string.substr(i).find(to_replace) != std::string::npos; ) {
		i += string.substr(i).find(to_replace);
		string.erase(i, to_replace.length()).insert(i, replacement);
		i += replacement.length();
	}
}

void	sed(std::string file, std::string to_replace, std::string replacement) {
	std::ifstream	infile(file);
	std::ofstream	outfile(file + ".replace");
	std::stringstream	content;
	std::string		string;

	if (!infile) throw std::invalid_argument("error opening " + file);
	if (!outfile) throw std::invalid_argument("error opening " + file + ".replace");
	content << infile.rdbuf();
	string = content.str();
	find_and_replace(string, to_replace, replacement);
	outfile << string;
}

int	main(int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "invalid argument count" << std::endl;
		std::cerr << "usage: " << av[0] << " [filename] [to_replace] [replacement]" << std::endl;
		return 1;
	}
	try {
		sed(av[1], av[2], av[3]);
	} catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}
}
