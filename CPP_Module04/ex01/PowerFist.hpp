/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:31 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:51:32 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(const PowerFist& other);
	virtual ~PowerFist();

	PowerFist& operator=(const PowerFist& other);

	virtual void attack(void) const;
};

#endif
