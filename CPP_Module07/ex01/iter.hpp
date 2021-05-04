/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:15:15 by daelee            #+#    #+#             */
/*   Updated: 2021/05/04 17:20:27 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
}

template <typename T>
void iter(T *arr, int len, void(*func)(T const &ref))
{
	if (arr == NULL || len == 0 || func == NULL)
		return ;
	
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif
