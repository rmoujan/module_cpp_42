/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ostream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:02:03 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/29 10:15:28 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
//donk operator insertion << for output rah correct even it has a void return type
class Test{
    private :
    int a;
    int b;
    public:
    Test(int x, int y)
    {
        a = x;
        b = y;
    }
    friend ostream& operator<<(ostream &o, Test &obj);
};

    ostream& operator<<(ostream &o, Test &obj)
    {
        o<<"a is "<<obj.a<<" b is "<<obj.b<<endl;
        return o;
    }
    
int main()
{
    Test a(10,20);
    Test b(15,1);
    cout<<a<<b;
}