/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:57 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/06 09:49:52 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ===================== Constructor & Destructor =====================

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	if (&src != this)
		*this = src;
	std::cout << "WrongAnimal copy constructor was called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor was called" << std::endl;
}

// ============================= Operator =============================

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (&src != this)
		type = src.type;
	return (*this);
}

// ============================== Getter ==============================

const std::string &WrongAnimal::getType() const
{
	return (type);
}

// ========================== Public function =========================

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound was called" << std::endl;
}
