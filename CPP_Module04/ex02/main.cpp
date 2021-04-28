/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 00:22:54 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 02:24:50 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void squad_test()
{
	Squad sq;
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;

	std::cout << std::endl;

	std::cout << "Add null unit to squad" << std::endl;
	sq.push(NULL);
	std::cout << "> num of units : " << sq.getCount() << std::endl;

	std::cout << "Add unit 'bob' to squad" << std::endl;
	sq.push(bob);
	std::cout << "> num of units : " << sq.getCount() << std::endl;

	std::cout << "Add SAME unit 'bob' to squad" << std::endl;
	sq.push(bob);
	std::cout << "> num of units : " << sq.getCount() << std::endl;

	std::cout << "Add unit 'jim' to squad" << std::endl;
	sq.push(jim);
	std::cout << "> num of units : " << sq.getCount() << std::endl;

	std::cout << std::endl;
}

void default_test()
{
	ISpaceMarine *bob = new TacticalMarine;	   // Tactical Marine ready for battle!
	ISpaceMarine *jim = new AssaultTerminator; // * teleports from space *

	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();	 // TacticalMarinePLOT!(bob) -> AssaultTerminator(jim)
		cur->rangedAttack(); // TacticalMarine(bob) -> AssaultTerminator(jim)
		cur->meleeAttack();	 // TacticalMarine(bob) ->  AssaultTerminator(jim)
	}
	delete vlc; // AssaultTerminator(jim) -> TacticalMarine(bob)
}

int main(void)
{
	std::cout << "======== default test ========" << std::endl;
	default_test();

	std::cout << std::endl;

	std::cout << "========= squad test =========" << std::endl;
	squad_test();

	return 0;
}
