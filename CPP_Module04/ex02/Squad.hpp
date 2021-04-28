/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 00:23:03 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 03:10:05 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine** units;

public:
	Squad(void);
	Squad(const Squad& other);
	~Squad();

	Squad& operator=(const Squad& other);

	int getCount() const;
	ISpaceMarine* getUnit(int idx) const;
	int push(ISpaceMarine* marine);
};

#endif
