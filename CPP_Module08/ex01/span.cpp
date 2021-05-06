/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:11:34 by daelee            #+#    #+#             */
/*   Updated: 2021/05/06 13:33:39 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span& other) : n(other.n), vec(other.vec) {}

Span::~Span() {}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	n = other.n;
	vec = other.vec;

	return *this;
}

void Span::addNumber(int num)
{
	if (vec.size() == n)
		throw std::runtime_error("Span is already full!");
	
	vec.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator iter = begin;
	
	while (iter != end) {
    	if (vec.size() == n)
			throw std::runtime_error("Span is already full!");
    	
		vec.push_back(*iter);
    	iter++;
	}
}

int Span::shortestSpan(void) const
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Span is empty or contains only one element!");

	std::vector<int> copy = vec;
	std::sort(copy.begin(), copy.end());
	
	int min_diff = INT_MAX;
	int prev = *copy.begin();
	for (std::vector<int>::iterator iter = copy.begin() + 1; iter != copy.end(); iter++)
	{
		min_diff = std::min(min_diff, *iter - prev);
		prev = *iter;
	}

	return min_diff;
}

int Span::longestSpan(void) const
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Span is empty or contains only one element!");

	std::vector<int> copy = vec;
	std::sort(copy.begin(), copy.end());

	return (copy.back() - copy.front());
}