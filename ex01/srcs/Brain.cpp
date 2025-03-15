/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:22:47 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/12 22:00:10 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ===================== Constructor & Destructor =====================

Brain::Brain()
{
	std::cout << "Brain constructor was called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor was called" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor was called" << std::endl;
}

// ============================= Operator =============================

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (&src != this)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = src.ideas[i];
	}
	return (*this);
}
