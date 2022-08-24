#include "main.h"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     std::cout << std::endl;
    //     std::cout << std::endl;

    //     ICharacter* me = new Character("me");

    //     AMateria* tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     std::cout << std::endl;

    //     ICharacter* bob = new Character("bob");

    //     me->use(0, *bob);
    //     me->use(1, *bob);
    //     std::cout << std::endl;

    //     delete bob;
    //     delete me;
    //     delete src;
    // }



    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     std::cout << std::endl;
    //     std::cout << std::endl;

    //     ICharacter* me = new Character("me");

    //     AMateria* tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     std::cout << std::endl;

    //     ICharacter* bob = new Character("bob");

    //     me->use(0, *bob);
    //     me->use(1, *bob);
    //     me->use(2, *bob);
    //     me->use(3, *bob);
    //     std::cout << std::endl;

    //     delete bob;
    //     delete me;
    //     delete src;
    // }



    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     std::cout << std::endl;
    //     std::cout << std::endl;

    //     ICharacter* me = new Character("me");

    //     AMateria* tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     std::cout << std::endl;

    //     ICharacter* bob = new Character("bob");

    //     me->use(0, *bob);
    //     me->use(1, *bob);
    //     me->use(2, *bob);
    //     me->use(3, *bob);
    //     me->use(4, *bob);
    //     std::cout << std::endl;

    //     delete bob;
    //     delete me;
    //     delete src;
    // }



    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     std::cout << std::endl;
    //     std::cout << std::endl;

    //     ICharacter* me = new Character("me");

    //     AMateria* tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     std::cout << std::endl;

    //     ICharacter* bob = new Character("bob");

    //     me->use(-1, *bob);
    //     std::cout << std::endl;

    //     delete bob;
    //     delete me;
    //     delete src;
    // }



    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     std::cout << std::endl;
    //     std::cout << std::endl;

    //     ICharacter* me = new Character("me");

    //     AMateria* tmp;
    //     AMateria* tmp_delete;
    //     tmp = src->createMateria("ice");
    //     tmp_delete = tmp;
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     std::cout << std::endl;

    //     ICharacter* bob = new Character("bob");

    //     me->unequip(0);
    //     delete tmp_delete;
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);
    //     std::cout << std::endl;
    //     delete bob;
    //     delete me;
    //     delete src;
    // }

    // {
    //     Ice ice = Ice();
    //     AMateria *iceClone = ice.clone();
    //     std::cout << "Type clone's is " << iceClone->getType() << std::endl;
    //     std::cout << std::endl;
    //     delete iceClone;
    // }
    return 0;
}
