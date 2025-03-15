/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:34 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/12 22:02:14 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ===================== Constructor & Destructor =====================

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat constructor was called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
	std::cout << "Cat copy constructor was called" << std::endl;
	brain = new Brain(*(src.brain));
}

Cat::~Cat()
{
	std::cout << "Cat destructor was called" << std::endl;
	delete brain;
}

// ============================= Operator =============================

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (&src != this)
	{
		// AAnimal::operator=(src);
		type = src.type;
		delete brain;
		brain = new Brain(*(src.brain));
	}
	return (*this);
}

// ========================== Public function =========================

void Cat::makeSound() const
{
	std::cout << "Cat : meow!!" << std::endl;
}
