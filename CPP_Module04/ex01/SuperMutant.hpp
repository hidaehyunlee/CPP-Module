/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:50 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:51:53 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(const SuperMutant& other);
	virtual ~SuperMutant();

	SuperMutant& operator=(const SuperMutant& other);

	virtual void takeDamage(int damage);
};

#endif
