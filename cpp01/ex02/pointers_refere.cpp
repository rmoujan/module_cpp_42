/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers_refere.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:17:15 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/16 18:42:37 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
 
int main()
{
    // int i = 10; // simple or ordinary variable.
    // int* p = &i; // single pointer
    // int** pt = &p; // double pointer
    // int*** ptr = &pt; // triple pointer
    // // All the above pointers differ in the value they store
    // // or point to.
    // cout << "i = " << i << "\t"
    //      << "p = " << p << "\t"
    //      << "pt = " << pt << "\t"
    //      << "ptr = " << ptr << '\n';
    // int a = 5; // simple or ordinary variable
    // int& S = a;

    // cout << "a = " << a << "\t"
    //      << "S = " << S << "\t";

    //  cout << "\na = " << &a << "\t"
    //      << "S = " << &S << "\t";
    // All the above references do not differ in their
    // values as they all refer to the same variable.
    //donk li que ref kaywli howa str la mn na7iyat addres la mn na7iyat 3lash kay ppointi la mn na7iyat value
    char *str = "koko";
    char*& ref = str;
    cout <<"str is "<<str<<" and ref is "<<ref<<endl;
    cout <<"@ str is "<<&str<<" and @ ref is "<<&ref<<endl;
    cout <<"@ str is "<<static_cast<void*>(str)<<" and @ ref is "<<static_cast<void*>(ref)<<endl;
}