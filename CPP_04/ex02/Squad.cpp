#include "Squad.hpp"

Squad::s_squad::s_squad(ISpaceMarine *new_marine, Squad::s_squad *next_marine) {
	squad_member = new_marine;
	next = next_marine;
}

Squad::~Squad() {
	s_squad	*cur;

	while (head)
	{
		cur = head->next;
		delete(head->squad_member);
		delete(head);
		head = cur;
	}
}

Squad::Squad(const Squad &copy) {
	*this = copy;
}

Squad &Squad::operator= (const Squad &squad) {
	s_squad		*cur;
	s_squad		*end;

	cur = squad.head;
	if (this == &squad)
		return (*this);
	Squad::~Squad();
	end = head;
	while (cur)
	{
		if (head)
		{
			while (end->next)
				end = end->next;
			end->next = new s_squad(cur->squad_member->clone(), nullptr);
			end = end->next;
		}
		else
		{
			head = new s_squad(cur->squad_member->clone(), nullptr);
			end = head;
		}
		cur = cur->next;
	}
	return (*this);
}

int Squad::push(ISpaceMarine *marine) {
	s_squad		*cur;
	int			i(0);

	if (head)
	{
		++i;
		cur = head;
		while (cur->next)
		{
			cur = cur->next;
			++i;
		}
		cur->next = new s_squad(marine, nullptr);
	}
	else
	{
		head = new s_squad(marine, nullptr);
		++i;
	}
	return (i);
}

Squad::Squad() {
	head = nullptr;
}

int Squad::getCount() const {
	s_squad *cur;
	int		i;

	cur = head;
	for (i = 0; cur; ++i)
		cur = cur->next;
	return (i);
}

ISpaceMarine *Squad::getUnit(int personal_number) const {
	int		i;
	s_squad	*cur;

	i = getCount();
	cur = head;
	if (personal_number > i || personal_number < 0)
		return (nullptr);
	for (int j = 0; j < personal_number; ++j)
		cur = cur->next;
	return (cur->squad_member);
}
