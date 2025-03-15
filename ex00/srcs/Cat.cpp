/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:34 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/12 21:57:29 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ===================== Constructor & Destructor =====================

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor was called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor was called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor was called" << std::endl;
}

// ============================= Operator =============================

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (&src != this)
	{
		Animal::operator=(src);
		// type = src.type;
	}
	return (*this);
}

// ========================== Public function =========================

void Cat::makeSound() const
{
	std::cout << "Cat : meow!!" << std::endl;
}
