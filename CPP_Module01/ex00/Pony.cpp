/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:25:59 by daelee            #+#    #+#             */
/*   Updated: 2021/04/19 18:17:32 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string str)
{
    memoryLocation_ = str;
    std::cout << "Create " << memoryLocation_ << " pony!" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Destroy " << memoryLocation_ << " pony!" << std::endl;
}