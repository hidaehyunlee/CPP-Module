/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 03:03:31 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 11:19:02 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();  // 소스 빈 인벤토리 4개 생성
	src->learnMateria(new Ice());			    // 소스 inventory[0] Ice로 채움
	src->learnMateria(new Cure());			    // 소스 inventory[1] Cure로 채움

	ICharacter *me = new Character("me"); 	    // me 캐릭터 빈 인벤토리 4개 생성

	AMateria* tmp; 							    // tmp무기 생성, type/xp 0
	tmp = src->createMateria("ice");			// 소스 인벤토리에서 ice 타입 찾아 리턴
	me->equip(tmp);								// me 캐릭터 inventory[0] Ice로 채움
	tmp = src->createMateria("cure");
	me->equip(tmp); 							// me 캐릭터 inventory[1] Cure로 채움

	ICharacter *bob = new Character("bob"); 	// bob 캐릭터 빈 인벤토리 4개 생성

	me->use(0, *bob); // Ice 객체의 use를 bob에게 사용 -> shoots an ice bolt
	me->use(1, *bob); // Cure 객체
	
	delete bob; // 캐릭터 인벤토리 delete
	delete me; 
	delete src; // 소스 인벤토리 delete
	
	return 0;
}