/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:32:47 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:53:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_WEAPON_HPP
# define A_WEAPON_HPP

# include <string>

class AWeapon
{
private:
	AWeapon(void);

protected:
	std::string	name;
	int apcost;
	int damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon();

	AWeapon& operator=(const AWeapon& other);

	std::string const getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;
};

#endif
