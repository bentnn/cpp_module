#ifndef CPP_MODULE_CHARACTER_HPP
#define CPP_MODULE_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character(std::string name);
	Character(Character const & a);
	~Character();
	Character &operator=(Character const &a);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
private:
	std::string name;
	AMateria *invent[4];
};


#endif
