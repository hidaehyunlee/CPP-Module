/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:32:56 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:53:36 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon* aweapon;

	Character(void);

public:
	Character(std::string const & name);
	Character(const Character& other);
	~Character();

	Character& operator=(const Character& other);
	
	void recoverAP(void);
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const getName(void) const;

	int getAP(void) const;
	AWeapon* getAWeapon(void) const;

};

std::ostream& operator<<(std::ostream& os, const Character& character);

#endif
