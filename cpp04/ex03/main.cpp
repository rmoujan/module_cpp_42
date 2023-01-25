/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:20:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/25 10:10:53 by rmoujan          ###   ########.fr       */
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
//   AMateria *obj1  = new Cure();
//   AMateria *obj2  = new Cure();
  
//   AMateria *obj3  = new Ice();
//   AMateria *obj4  = new Ice();
//   AMateria *obj5  = new Ice();
//   std::cout<<"-------------------------------------------------------"<<std::endl;
//   MateriaSource *test = new MateriaSource();
  
  
//   test->learnMateria(obj2);
//   test->learnMateria(obj3);
//   test->learnMateria(obj4);
//   test->learnMateria(obj1);
//   test->learnMateria(obj5);

//   test->output_inventory();
//   std::cout<<"-------------------------------------------------------"<<std::endl;
//   MateriaSource *save = new MateriaSource();
//   *save = *test;
//   save->output_inventory();
//   std::cout<<"-------------------------------------------------------"<<std::endl;

//   AMateria *copy = save->createMateria("ice");
  
//   std::cout <<" TYPE IS  "<<copy->getType()<<std::endl;
//   delete test;
//   delete copy;
//   delete save;
//   char *m={'a', 'b', 'c', 'd'};
//   std::cout << "TEST is "<<m[6];
//   // delete save;
//   // delete obj1;
//   // delete obj2;
//   // delete obj3;
//   // delete obj4;

// }

// int main()
// {
//   AMateria *obj1 = new Cure();
//   AMateria *obj2= new Ice();
//   AMateria *obj3 = new Cure();
//   AMateria *obj4 = new Ice();

//   ICharacter *test = new Character("Reshe");
//   test->equip(obj1);
//   test->equip(obj2);
//   test->equip(obj3);
//   test->equip(obj4);
//   // ICharacter *test = new Character("Reshe");
//   test->output_inventory();
//   ICharacter *save = new Character("Remma");
//   *save = *test;
//   save->output_inventory();
// }


// NOOTE :: fash kandiiir Ichaacter kaypointe 3la character f raahh makybghish ycalle lcopy ass deyal character fash kan ssig 2 pointers mn chara !!!!




int main()
{
  
  AMateria *obj1  = new Cure();
  AMateria *obj2  = new Cure();
  
  AMateria *obj3  = new Ice();
  AMateria *obj4  = new Ice();
  AMateria *obj5  = new Ice();
   std::cout<<"-------------------------------------------------------"<<std::endl;
  Character *test = new Character("Reshe");
  
 
  obj1->use(*test);
  obj3->use(*test);
  std::cout<<"-------------------------------------------------------"<<std::endl;
  
  test->equip(obj2);
  test->equip(obj3);
  test->equip(obj4);
  test->equip(obj1);
  test->equip(obj5);
  
  test->unequip(0);
  // test->unequip(2);
  std::cout <<"@@@--------------"<<std::endl;
  test->use(0, *test);
  test->output_inventory();
   test->equip(obj5);
     std::cout <<"8888--------------"<<std::endl;
     test->output_inventory();
  // test->unequip(0);
  // test->unequip(1);
  // test->unequip(2);
  // test->unequip(3);
  // test->output_inventory();
  // test->equip(obj2);
  // test->equip(obj3);
  // test->equip(obj4);
  // test->equip(obj1);
  // test->equip(obj5);
  // test->output_inventory();
  // std::cout<<"-------------------------------------------------------"<<std::endl;
  // std::cout <<"++++++"<<std::endl;
  // test->unequip(0);
  // test->unequip(1);
  // test->unequip(2);
  // test->unequip(3);
  // std::cout <<"++++++"<<std::endl;
  // test->output_inventory();
  // std::cout <<"@@@@@"<<std::endl;
  // test->unequip(0);
  // test->unequip(1);
  // test->unequip(2);
  // test->unequip(3);
  // test->output_inventory();
  // Character *save = new Character("RIMA");
  
  // *save = *test;
  // save->output_inventory();

  // test->equip(obj2);
  // test->equip(obj3);
  // test->equip(obj4);
  // test->equip(obj1);
  // test->equip(obj5);

  // std::cout <<"12345679    "<<std::endl;
  // test->output_inventory();
  // *save = *test;
  // std::cout <<"12345679 -------------   "<<std::endl;
  // save->output_inventory();
  // test->unequip(0);
  // test->unequip(1);
  // test->unequip(2);
  // test->unequip(3);
  // test->output_inventory();
  // *save =*test;
  // std::cout <<"SECOND REMOOVE "<<std::endl;
  // save->output_inventory();
  //   save->equip(obj2);
  // save->equip(obj3);
  // save->equip(obj4);
  // save->equip(obj1);
  // save->equip(obj5);
  //   std::cout <<"SECOND REMOOVE "<<std::endl;
  // save->output_inventory();
  // // std::cout <<"0000000"<<std::endl;
  // // test->output_inventory();
  // // ICharacter *save = new Character();
  // // *save = *test;
  // // std::cout <<"dfhjbvdhsbfvhjbjbdf "<<std::endl;
  // // save->output_inventory();

  
  delete test;
  // delete save;
  // delete obj1;
  // delete obj2;
  // delete obj3;
  // delete obj4;

}

// // int main()
// // {
// //   AMateria *obj1 = new Cure();
// //   AMateria *obj2= new Ice();
// //   AMateria *obj3 = new Cure();
// //   AMateria *obj4 = new Ice();

// //   ICharacter *test = new Character("Reshe");
// //   test->equip(obj1);
// //   test->equip(obj2);
// //   test->equip(obj3);
// //   test->equip(obj4);
// //   // ICharacter *test = new Character("Reshe");
// //   test->output_inventory();
// //   ICharacter *save = new Character("Remma");
// //   *save = *test;
// //   save->output_inventory();
// // }


// // NOOTE :: fash kandiiir Ichaacter kaypointe 3la character f raahh makybghish ycalle lcopy ass deyal character fash kan ssig 2 pointers mn chara !!!!