#ifndef CPP_0_PONY_HPP
#define CPP_0_PONY_HPP

#include <iostream>

class Pony {
private:
	std::string	hair_color;
	int			pony_weight;
	int			pony_age;
public:
	/*getters and setters*/
	const std::string &getHairColor() const;
	void setHairColor(const std::string &hairColor);

	int getPonyWeight() const;
	void setPonyWeight(int ponyWeight);

	int getPonyAge() const;
	void setPonyAge(int ponyAge);

	Pony();
	~Pony();
};


#endif
