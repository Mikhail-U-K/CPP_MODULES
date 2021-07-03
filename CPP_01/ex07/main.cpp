#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

static std::string replace_str(std::string string, const std::string& s1, const std::string& s2) {

	std::size_t rep_pos = string.find(s1);

	for (int i = 1; rep_pos != std::string::npos; ++i)
	{
		string.replace(rep_pos, s1.size(), s2);
		rep_pos = string.find(s1.c_str(),rep_pos + s1.size(), s1.size());
	}
	return (string);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream file_name_input(argv[1]);
		if (file_name_input.is_open())
		{
			std::stringstream	file_name_output;
			std::string			string;
			file_name_output << argv[1] << ".replace";
			std::ofstream		result_file(file_name_output.str().c_str());
			if (result_file.is_open())
			{
				while (std::getline(file_name_input, string))
					result_file << replace_str(string, argv[2], argv[3]) << std::endl;
				result_file.close();
				file_name_input.close();
			}
			else
				std::cout << "Can't create file!" << std::endl;
		}
		else
			std::cout << "Can't open the file" << std::endl;
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
