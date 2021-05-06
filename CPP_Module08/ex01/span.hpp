/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:11:42 by daelee            #+#    #+#             */
/*   Updated: 2021/05/06 13:34:49 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <climits>

class Span
{
	unsigned int n;
	std::vector<int> vec;
	Span(void);

public:
	Span(unsigned int n);
	Span(const Span& other);
	~Span();

	Span& operator=(const Span& other);

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	int shortestSpan(void) const;
	int longestSpan(void) const;
};

#endif