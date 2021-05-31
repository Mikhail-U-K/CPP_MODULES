#include "Pony.hpp"

const std::string &Pony::getHairColor() const {
	return hair_color;
}

void Pony::setHairColor(const std::string &hairColor) {
	hair_color = hairColor;
}

int Pony::getPonyWeight() const {
	return pony_weight;
}

void Pony::setPonyWeight(int ponyWeight) {
	pony_weight = ponyWeight;
}

int Pony::getPonyAge() const {
	return pony_age;
}

void Pony::setPonyAge(int ponyAge) {
	pony_age = ponyAge;
}

Pony::Pony(){
	std::cout << "Pony was created by Pony God!" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony was killed by Pony God(((((((" << std::endl;
}
