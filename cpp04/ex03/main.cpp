/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:20:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/24 14:51:04 by rmoujan          ###   ########.fr       */
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
// int main()
// {
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
// IMateriaSource * test = new MateriaSource();
    
//     AMateria    *obj1 = new Cure();
//     AMateria     *obj2 = new Cure();
//     AMateria     *obj3 = new Ice();
//     AMateria     *obj4 = new Ice();
//     AMateria     *obj5 = new Cure();
//     // AMateria *value = test->createMateria("hh");
//     test->learnMateria(obj1);
//     AMateria *value = test->createMateria("cure");
//     std::cout <<"name is "<<value->getType()<<std::endl;
//     // AMateria *value1 = test->createMateria("ice");
//     test->learnMateria(obj4);
//     AMateria *value1 = test->createMateria("ice");
//     std::cout <<"name is "<<value1->getType()<<std::endl;
//     AMateria *value2 = test->createMateria("dd");
//     test->learnMateria(obj2);
//     test->learnMateria(obj3);
    
//     test->learnMateria(obj5);
//     test->output_inventory();
    
// }
//MAIN D AYOUB 3ANDI KAY SEGFAULTI FIHA

// int main()
// {
//   AMateria *obj1 = new Cure();
//   AMateria *obj2 = new Ice();
//   AMateria *obj3  = new Cure();
//   AMateria *obj4 = new Ice();
  

//   Character *test = new Character("Reshe");

//   test->equip(obj1);
//   test->equip(obj2);
//   test->equip(obj3);
//   test->equip(obj4);
//   test->unequip(0);
//   std::cout <<"OUTPUT TEST "<<std::endl;
//   test->output_inventory();
//   Character *save = new Character("Rimma");
//   *save = *test;
//   std::cout <<"OUTPUT SAVE "<<std::endl;
//   save->output_inventory();
//   // test->output_inventory();
//   Character *ss = new Character("liina");
//   *ss = *save;
//   // test->output_inventory();
//   // save->output_inventory();
//   std::cout <<"OUTPUT SS "<<std::endl;
//   ss->output_inventory();

//   delete test;
//   delete save;
//   delete ss;


  
//   // Character *save = new Character("Reshe");
//   // Character *test = new Character("rimmma");
//   // //calling copy assignement operator of char
//   // *test = *save;
//   // delete save;
//   // delete test;
// }


// int main()
// {
//   AMateria *obj1 = new Cure();
//   AMateria *obj2 = new Ice();
//   AMateria *obj3  = new Cure();
//   AMateria *obj4 = new Ice();

//   IMateriaSource *test = new MateriaSource();
//   test->learnMateria(obj1);
//   test->learnMateria(obj1);
//   test->learnMateria(obj1);
//   test->learnMateria(obj1);
//   delete test;
//   delete obj1;
// }

int main(void) {

  AMateria* ice = new Ice;
  AMateria* cure = new Cure;
  IMateriaSource *src = new MateriaSource();

  src->learnMateria(ice);
  src->learnMateria(cure);
  delete ice;
  delete cure;
  src->output_inventory();

  ICharacter *mark = new Character("mark");
  ICharacter *bob = new Character("bob");

  auto ddd = src->createMateria("ice");
  mark->equip(ddd);
  // mark->equip(ddd);
  // mark->equip(ddd);

  std::cout << "Name: " << mark->getName() << std::endl;
  std::cout << "Name: " << bob->getName() << std::endl;

  std::cout << "----------" << std::endl;

  mark->use(0, *bob);
  mark->use(1, *bob);
  mark->use(3, *bob);

  std::cout << "----------" << std::endl;
  
  *(mark) = *(bob);

  std::cout << "Name: " << mark->getName() << std::endl;
  std::cout << "Name: " << bob->getName() << std::endl;

  // std::cout << "----------" << std::endl;

  delete src;
  delete mark;//hena kay segfauulti
  delete bob;
}