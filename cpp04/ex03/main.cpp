/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:20:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 17:53:10 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// int main()
// {

//     IMateriaSource * src = new MateriaSource(); 
//     src->learnMateria(new Ice()); 
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob; 
//     delete me;
//     delete src;

//     return (0);
// }
int main()
{
    //Test Amateria :
    // AMateria    *obj1 = new Cure();
    // AMateria     *obj2 = new Cure();
    // AMateria     *obj3 = new Cure();
    // ICharacter *c = new Character("RESHE");
    // // obj1->use(*c);
    // AMateria *obj4  = new Ice();
    // AMateria *obj5 = new Ice();
    // AMateria *obj6 = new Ice();
    // // obj6->use(*c);
    // AMateria *test = obj1->clone();
    // // test->use(*c);
    // AMateria *data[4] = {obj1, obj5, obj2, obj4};
    // for (int i = 0; i < 4; i++)
    // {
    //     data[i]->use(*c);
    // }
    // *************** Test Ichar :  ///
//     ICharacter *test = new Character("Reshe");

//     AMateria    *obj1 = new Cure();
//     AMateria     *obj2 = new Cure();

//     AMateria *obj4  = new Ice();
//     AMateria *obj5 = new Ice();
//     AMateria *obj6 = new Ice();
//     AMateria *obj7 = new Ice();
   
//     test->equip(obj1);
//     test->equip(obj5);
//     test->equip(obj2);
//     test->equip(obj4);
//     test->equip(obj6);
//     test->equip(obj7);
// //    test->output_inventory();
 
// //    test->use(0, *test);
// //    system.out("leaks INTERFACES");
//     ICharacter *test1 = new Character("Reema");
// //    test1->use(0, *test1);
//    test1->equip(obj7);
//    test1->equip(obj1);
//    test = test1;
//     test->use(2, *test);
// //    test1->use(0, *test1);
// //    test1->equip(obj1);
// //    test1->equip(obj4);
// //    test1->use(-1, *test1);

//****** Test MATERIASOURCE ********* ::

    
}