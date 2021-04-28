/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 00:22:58 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 02:27:01 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : count(0), units(NULL) {}

Squad::Squad(const Squad& other)
{
	count = other.count;
	units = new ISpaceMarine*[count];

	for (int i = 0; i < count; i++)
	{
		units[i] = other.getUnit(i)->clone();
	}
}

Squad::~Squad()
{
	for (int i = 0; i < count; i++)
	{
		delete units[i];
	}
	if (count > 0)
	{
		delete[] units;
	}
}

Squad& Squad::operator=(const Squad& other)
{
	for (int i = 0; i < count; i++)
	{
		delete units[i];
	}
	if (count > 0)
	{
		delete[] units;
	}

	count = other.count;
	units = new ISpaceMarine*[count];
	for (int i = 0; i < count; i++)
	{
		units[i] = other.getUnit(i)->clone();
	}
	return *this;
}

int Squad::getCount() const
{
	return count;
}

ISpaceMarine* Squad::getUnit(int idx) const
{
	if (0 <= idx && idx < count)
		return units[idx];
	else
		return NULL;
}

int Squad::push(ISpaceMarine* marine)
{
	if (marine == NULL)
		return count;

	for (int i = 0; i < count; i++)
	{
		if (marine == units[i]) // 이미 있는 unit이 들어오면 아무 처리를 하지않고 반환됨
			return count;
	}

	ISpaceMarine** new_units = new ISpaceMarine*[count + 1];

	for(int i = 0; i < count; i++)
	{
		new_units[i] = units[i]; // 기존 유닛 복사
	}
	new_units[count] = marine; // 제일 마지막에 새 유닛 추가

	if (count > 0)
		delete[] units; // 기존 유닛 파괴

	units = new_units; // 새 유닛 생성
	count++;
	
	return count;
}
