/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:34:32 by daelee            #+#    #+#             */
/*   Updated: 2021/05/02 13:35:18 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
public:
    virtual ~Base(){};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void)
{
    srand(clock());

    int num = rand() % 3;

    if (num == 0)
        return dynamic_cast<Base*>(new A);
    else if (num == 1)
        return dynamic_cast<Base*>(new B);
    else
        return dynamic_cast<Base*>(new C);
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
    if (dynamic_cast<A *>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(&p))
        std::cout << "C" << std::endl;
}

int main()
{
    std::cout << "========= Random Generate Test ==========" << std::endl;
    
    Base *p = generate();
    
    identify_from_pointer(p);
    identify_from_reference(*p);

    delete p;

    std::cout << "================ All Test ===============" << std::endl;
    
    A *a_ptr = new A;
    A &a_ref = *a_ptr;
    identify_from_pointer(dynamic_cast<Base *>(a_ptr));
    identify_from_reference(dynamic_cast<Base &>(a_ref));
    delete a_ptr;

    B *b_ptr = new B;
    B &b_ref = *b_ptr;
    identify_from_pointer(dynamic_cast<Base *>(b_ptr));
    identify_from_reference(dynamic_cast<Base &>(b_ref));
    delete b_ptr;

    C *c_ptr = new C;
    C &c_ref = *c_ptr;
    identify_from_pointer(dynamic_cast<Base *>(c_ptr));
    identify_from_reference(dynamic_cast<Base &>(c_ref));
    delete c_ptr;


    return 0;
}