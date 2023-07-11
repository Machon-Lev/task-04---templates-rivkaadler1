#include "Dog.h"

Dog::Dog(int age, int weight, string name) :
	_age(age), _weight(weight), _name(name) {}

int Dog::getAge() const
{
	return _age;
}

int Dog::getWeight() const
{
	return _weight;
}

string Dog::getName() const
{
	return  _name;
}



ostream& operator<< (ostream& os, Dog d)
{
	return os <<"name = "<< d.getName() << " age = " << d.getAge() << ", weight = " << d.getWeight();
}

Dog operator-(const Dog& lhs, const Dog& rhs)
{
	return Dog(lhs.getAge(), (lhs.getWeight() - rhs.getWeight()), lhs.getName());
}

bool operator<(const Dog& lhs, const int rhs)
{
	return lhs.getWeight() < rhs;
}