/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:31:18 by daelee            #+#    #+#             */
/*   Updated: 2021/05/04 22:31:19 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
int &easyfind(T &container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);

	if (iter == container.end())
		throw std::runtime_error("Not found!");

	return *iter;
}

#endif
