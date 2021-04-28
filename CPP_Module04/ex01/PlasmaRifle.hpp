/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:20 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:51:16 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle& other);
	virtual ~PlasmaRifle();

	PlasmaRifle& operator=(const PlasmaRifle& other);

	virtual void attack(void) const;
};

#endif
