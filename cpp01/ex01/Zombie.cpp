#include "Zombie.hpp"

//creating const
Zombie :: Zombie()
{
    std::cout << "Default Constructor Invoked"<<std::endl;
}

//creating deconst
Zombie :: ~Zombie()
{
    // std::cout << "Default Destructor Invoked"<<std::endl;
    std::cout << "the Object has name "<<this->getName()<<" is destroyed"<<std::endl;
}
//print the name of  Zombie :
void Zombie :: announce(void)
{
    std::cout <<getName()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie :: setName(std::string n)
{
    name = n;
}

std::string Zombie :: getName(void){
    
    return (name);
}