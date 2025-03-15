/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:35:21 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/12 21:57:26 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ===================== Constructor & Destructor =====================

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor was called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor was called" << std::endl;
	type = src.type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor was called" << std::endl;
}

// ============================= Operator =============================

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (&src != this)
		type = src.type;
	return (*this);
}

// ============================== Getter ==============================

const std::string &Animal::getType() const
{
	return (type);
}

// ========================== Public function =========================

void Animal::makeSound() const
{
	std::cout << "Animal makeSound was called" << std::endl;
}
