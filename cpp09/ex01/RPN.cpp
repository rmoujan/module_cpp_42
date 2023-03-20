#include "RPN.hpp"

RPN :: RPN() {
	std::cout << "Default constructor of RPN has been invoked " << std::endl;
}

RPN :: RPN(const RPN &obj) {
	std::cout << "Copy constructor of RPN has been invoked " << std::endl;
	*this = obj;
}

RPN &RPN :: operator=(const RPN &obj) {

	std::cout << "Copy assignment operator of RPN has been invoked " << std::endl;
	return (*this);
}

RPN :: ~RPN() {
	std::cout << "Destructor of RPN has been invoked " << std::endl;
}

int valid_chars(char c)
{
    if (c == ' ')
        return (1); 
    if (c == '+' || c == '*' || c == '/' || c == '-'  || isdigit(c))
        return (2);
    return (0);
}

void ft_errno()
{
    std::cout<<"ERROR : PLEASE ENTER VALID DATA "<<std::endl;
    exit(0);
}

int parse_data(std::string data)
{
    if (data[0] == ' ')
        ft_errno();
    for(int i = 0; i < (data.length() - 1); i++)
    {
        std::cout<<data[i]<<std::endl;
        if (!valid_chars(data[i]))
        {
            ft_errno();
        }
        if (valid_chars(data[i]) == 1)
        {
            if ( valid_chars(data[i + 1]) != 2)
                ft_errno();
        }
        if (valid_chars(data[i]) == 2)
        {
            if ( valid_chars(data[i + 1]) != 1)
                ft_errno();
        }
    }
    return (1);
}

void RPN :: calcul(std:: string data)
{
    std::stack<int> numbers;
    parse_data(data);
}