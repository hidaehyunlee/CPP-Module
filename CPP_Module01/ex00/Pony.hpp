/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:08:30 by daelee            #+#    #+#             */
/*   Updated: 2021/04/19 18:17:28 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
private:
    std::string memoryLocation_;
    std::string num_;

public:
    Pony(std::string str);
    ~Pony();
    void setNum(std::string str) { num_ = str; }
    std::string getNum() { return (num_); }
};

#endif