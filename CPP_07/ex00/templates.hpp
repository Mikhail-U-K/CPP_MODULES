#ifndef CPP_0_TEMPLATES_HPP
#define CPP_0_TEMPLATES_HPP

template<typename T>
void	swap(T &first_var, T &second_var)
{
	T	tmp;

	tmp = first_var;
	first_var = second_var;
	second_var = tmp;
}

template<typename T> T	&max(T &first_var, T &second_var) {return (first_var > second_var ? first_var : second_var);}
template<typename T> T	&min(T &first_var, T &second_var) {return (first_var < second_var ? first_var : second_var);}

#endif
