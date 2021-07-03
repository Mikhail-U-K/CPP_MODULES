#include <iostream>
#include <ctime>
#include <cstdlib>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate()
{
	A *a = new A;
	B *b = new B;
	C *c = new C;

	int	randm = (rand() % 3) + 1;
	if (randm == 1)
		return (a);
	else if (randm == 2)
		return (b);
	return (c);
}

void	identify(Base *p)
{
	std::cout << "this type is ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

int main()
{
	Base	*orig = new Base;
	srand(time(0));
	orig = generate();
	identify(orig);
	return (0);
}