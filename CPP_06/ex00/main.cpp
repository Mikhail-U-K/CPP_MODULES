#include <iostream>
#include <cmath>

template <typename T, typename T2, typename T3, typename T4>
void	print_args(const T &ch , const T2 &i, const T3 &f, const T4 &d, const std::string &orig_str)
{
	std::cout << "char: ";
	if (sizeof(T) == sizeof(char))
		std::cout << "." << std::endl;
	std::cout << ch << std::endl;
	if (sizeof(T) == sizeof(char))
		std::cout << "." << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << orig_str;
	if (sizeof(T2) == sizeof(float))
		std::cout << "f";
	std::cout << std::endl;
	std::cout << "double " << d << orig_str << std::endl;
}

int		type(const std::string &str)
{
	unsigned int	i(0);
	unsigned int	is_float(0);
	bool			point(false);

	if (str.length() == 1 && !isdigit(str[0]))
		return (0);//for char
	for(; str[i]; ++i)
	{
		if (str[i] == '.' && !point)
			point = true;
		else if (!isdigit(str[i]) && str[i] == 'f')
			is_float = 1;
		else if (!isdigit(str[i]))
			break;
	}
	if (is_float)
		return (2);
	else if (point)
		return (3);//for double
	else
		return (1);//for int
}

template <typename Ref_type, typename Cast_1, typename Cast_2, typename Cast_3>
void	Casts(Ref_type &type1, Cast_1 &type_2, Cast_2 &type_3, Cast_3 &type_4)
{
	type_2 = static_cast<Cast_1>(type1);
	type_3 = static_cast<Cast_2>(type1);
	type_4 = static_cast<Cast_3>(type1);
}

int main(int argc, char **argv)
{
	unsigned	ch;
	int			i;
	float		f;
	double		d;
	int			var_type;
	std::string	smth = "";

	if (argc != 2) {
		std::cout << "Wrong number of arguments!" << std::cout;
		return (0);
	}
	std::string str = argv[1];
	if (str == "nanf" || str == "+inff" || str == "-inff" || str == "+inf" || str == "-inf" || str == "nan")
		print_args("impossible", "impossible", f = stof(str), d = stod(str), smth);
	else if (isdigit(str[0]) || ((str[0] == '-' || str[0] == '+') && isdigit(str[1])) || str.length() == 1) {
		var_type = type(str);
		if (var_type == 0) {
			ch = static_cast<unsigned char>(str[0]);
			Casts(ch, i, d, f);
		} else if (var_type == 1)
			Casts(i = stoi(str), d, f, ch);
		else if (var_type == 2)
			Casts(f = stof(str), i, d, ch);
		else
			Casts(d = stod(str), i, f, ch);
		if (!(d - round(d)))
			smth = ".0";
		if (i < 32 || i > 126)
			print_args("Non displayable", i, f, d, smth);
		else
			print_args(ch, i, f, d, smth);
	}
	else
		print_args("impossible","impossible","impossible","impossible", smth);
	return (0);
}
