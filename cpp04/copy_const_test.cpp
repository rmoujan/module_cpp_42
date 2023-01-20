/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_const_test.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:08:39 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 11:39:15 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cassert>
#include <iostream>

//Test Shallow Copy ::
#include <cstring> // for strlen()
#include <cassert> // for assert()

class MyString
{
private:
    char* m_data;
    int m_length;

public:
    MyString(const char* source = "" )
    {
        // Find the length of the string
        // Plus one character for a terminator
        m_length = std::strlen(source) + 1;

        // Allocate a buffer equal to this length
        m_data = new char[m_length];

        // Copy the parameter string into our internal buffer
        for (int i= 0 ; i < m_length; ++i)
            m_data[i] = source[i];
    }
    //copy const ::
    MyString(const MyString& source)
{
    m_length = source.m_length ;
    m_data = source.m_data ;
}
    ~MyString() // destructor
    {
        // We need to deallocate our string
        delete[] m_data;
    }

    char* getString() { return m_data; }
    int getLength() { return m_length; }
};

#include <iostream>

int main()
{
    MyString hello("Hello, world!" );
    {
        MyString copy(hello ); // use default copy constructor
    } // copy is a local variable, so it gets destroyed here.  The destructor deletes copy's string, which leaves hello with a dangling pointer

    std::cout << hello.getString() << '\n'; // this will have undefined behavior

    return 0;
}