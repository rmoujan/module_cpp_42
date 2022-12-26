/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_const.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:10:34 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/26 15:36:53 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
class Test{
    private:
    int n;
    public:
    Test(int v)
    {
        n = v;
        cout<<" const is called "<<std::endl;
    }
    const int getn()
    {
         n = 77;
        return (n);
    }   
};

int main()
{
    Test t(10);
    cout<<t.getn()<<endl;
 t.getn() = 44;    //test_const.cpp:35:11: error: expression is not assignable ==>neswl laila 3lih but wth refrence is correct
    cout<<t.getn()<<endl;
    
}