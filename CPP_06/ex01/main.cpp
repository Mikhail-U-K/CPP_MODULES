#include <iostream>

typedef struct s_data {
	std::string	pupa;
	int			i;
	std::string lupa;
}				Data;

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
//	Data	*data = new Data;
//
//	raw = serialize(data);
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data	*data = new Data;
	uintptr_t			raw;

//	data->i = 1;
//	data->lupa = "lupa";
//	data->pupa = "pupa";
	raw = serialize(data);
	std::cout << data << std::endl;
//	std::cout << raw << std::endl;
	std::cout << "0x" << std::hex << raw << std::endl;
	std::cout << deserialize(raw) << std::endl;
	std::cout << data->i << data->lupa << data->pupa << std::endl;
	return (0);
}