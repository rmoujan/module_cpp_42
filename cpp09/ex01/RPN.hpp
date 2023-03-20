#include <iostream>
#include <stack>


#ifndef RPN_HPP
#define RPN_HPP


class RPN{
    public:
    RPN();
	RPN(const RPN &obj);
	RPN &operator=(const RPN &obj);
	~RPN();
    void calcul(std:: string data);
};


#endif