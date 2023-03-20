
#include "RPN.hpp"
int main(int argc, char *argv[])
{

    if (argc > 1)
    {
        if (argv[1][0] != '"')
        {
            std::cout<<"ERROR : put your input inside double quotes  "<<std::endl;
            exit(0);
        }
        RPN obj;
        obj.calcul(argv[1]);
    }
    std::cout <<" PLEASE ENTER AN INPUT "<<std::endl;
    return (0);
}