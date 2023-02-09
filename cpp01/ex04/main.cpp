#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

std::string	ft_replace(std::string a, std::string b, std::string c)
{
	std::string	qwe;
	int	i;

	i = a.find(b);
	if (i != -1)
	{
		a.erase(i, b.length());
		a.insert(i, c);
	}
	return (a);
	
}

int	main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	

	std::string	outfile = (std::string)argv[1] + ".replace";
	std::ofstream	ofs(outfile.c_str());


	std::string	a;

	if (argc != 4)
		return (0);
	if (!ifs.is_open() || !ofs.is_open() || !argv[2][0] || !argv[3][0])
		return (0);
	while (getline(ifs,a))
	{
		a = ft_replace(a, argv[2], argv[3]);
		ofs << a << std::endl;
	}
}
