/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:04 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:53:44 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
private:
	Enemy(void);
	
protected:
	int hp;
	std::string type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& other);
	virtual ~Enemy();

	Enemy& operator=(const Enemy& other);

	std::string const getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int damage);
};

#endif
