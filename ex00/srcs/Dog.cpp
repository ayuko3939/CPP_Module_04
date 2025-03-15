/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:28 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/12 21:57:32 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ===================== Constructor & Destructor =====================

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor was called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor was called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor was called" << std::endl;
}

// ============================= Operator =============================

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (&src != this)
	{
		Animal::operator=(src);
		// type = src.type;
	}
	return (*this);
}

// ========================== Public function =========================

void Dog::makeSound() const
{
	std::cout << "Dog : bowwow!!" << std::endl;
}
