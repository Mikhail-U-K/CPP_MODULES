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

void	identify_by_ref(Base &p)
{
	std::cout << "(reference) this type is ";
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {
//		std::cerr << "CAST ERROR" << e.what() << std::endl;
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {
//		std::cerr << "CAST ERROR" << e.what() << std::endl;
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {
//		std::cerr << "CAST ERROR" << e.what() << std::endl;
	}
}

int main()
{
	Base	*orig;
	srand(time(0));
	orig = generate();
	identify(orig);
	identify_by_ref(*orig);
	return (0);
}