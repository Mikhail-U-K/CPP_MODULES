#ifndef CPP_0_ARRAY_HPP
#define CPP_0_ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T		*array;
	uint	len;
public:
	Array() {array = new T(nullptr);};
	explicit Array(uint n) : len(n) {
		try {
			if (n <= 0)
				throw std::bad_array_new_length();
			array = new T[n]();
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	~Array() {delete[] array;}
	Array& operator= (const Array &_array) {
		if (this == &_array)
			return (*this);
//		if (len)
//		{
//			delete[] array;
//			len = 0;
//		}
		array = new T[_array.len]();
		len = _array.len;
		for (uint i = 0; i < len; ++i)
			array[i] = _array.array[i];
		return (*this);
	}
	Array(const Array &copy) {
		if (&copy != this)
			*this = copy;
	}
	T& operator[] (const uint &index) {
		try {
			if (index > len || index < 0)
				throw std::out_of_range("No such element");
			return (array[index]);
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		return (array[0]);
	}
	uint	size() const {return (len);};
};

#endif
