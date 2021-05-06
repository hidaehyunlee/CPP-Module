/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:09:02 by daelee            #+#    #+#             */
/*   Updated: 2021/05/06 14:27:25 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include "mutantstack.cpp"

template <typename Iter>
void print(Iter begin, Iter end) {
  while (begin != end) {
    std::cout << "[" << *begin << "] ";
    begin++;
  }
  std::cout << std::endl;
}

int main(void)
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	print(mstack.begin(), mstack.end());

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(100);
	mstack.push(0);

	print(mstack.begin(), mstack.end());
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << s.size() << std::endl;

    std::cout << "------ <char> MutantStack test -----" << std::endl;

    MutantStack<char>	cms;
	
	for(char i='a'; i<='z'; i++)
		cms.push(i);
	for(MutantStack<char>::iterator iter=cms.begin(); iter != cms.end(); iter++)
		std::cout << *iter << " ";
    std::cout << std::endl;

	return 0;
}