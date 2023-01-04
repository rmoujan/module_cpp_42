/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test+.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:00:12 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 19:07:07 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


class Test{
    public:
    int var;

    Test()
    {
        cout<<"default const"<<endl;
        var = 10;
    }
    Test operator+(Test t);
};

Test Test ::operator+(Test t)
{
    Test obj;
    obj.var = this->var + t.var;
    cout << &obj<<std::endl;
    return obj;
}

int main()
{

    Test obj1;
    Test obj2;
    Test obj3 = obj1 + obj2; //==>obj1.operator+(obj2);
    cout<<&obj3<<endl;
    return (0);
}