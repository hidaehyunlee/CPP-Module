/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:41 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:52:04 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion& other);
	virtual ~RadScorpion();

	RadScorpion& operator=(const RadScorpion& other);
};

#endif
