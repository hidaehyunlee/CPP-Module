/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:15:07 by daelee            #+#    #+#             */
/*   Updated: 2021/05/04 17:02:11 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T& min(T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T& max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif
