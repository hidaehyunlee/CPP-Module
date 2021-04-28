/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:00 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:50:11 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : hp(0), type("default") {}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {}

Enemy::Enemy(const Enemy& other)
{
	*this = other;
}

Enemy::~Enemy() {}

Enemy& Enemy::operator=(const Enemy& other)
{
	this->hp = other.hp;
	this->type = other.type;
	
	return *this;
}

std::string const Enemy::getType(void) const
{
	return type;
}

int Enemy::getHP(void) const
{
	return hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	hp -= damage;
	if (hp < 0)
		hp = 0;
}
