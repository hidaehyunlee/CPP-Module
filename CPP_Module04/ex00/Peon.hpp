/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:22 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 16:20:36 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon(void);

public:
    Peon(std::string name);
    Peon(const Peon& peon);
    ~Peon();

    Peon& operator=(const Peon& peon);
    
    void getPolymorphed(void) const;
};

#endif
