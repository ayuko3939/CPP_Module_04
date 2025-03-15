/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:35:21 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/06 11:06:09 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// ===================== Constructor & Destructor =====================

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal constructor was called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "AAnimal copy constructor was called" << std::endl;
	type = src.type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor was called" << std::endl;
}

// ============================= Operator =============================

AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (&src != this)
		type = src.type;
	return (*this);
}

// ============================== Getter ==============================

const std::string &AAnimal::getType() const
{
	return (type);
}

// ========================== Public function =========================

void AAnimal::makeSound() const
{
	std::cout << "AAnimal makeSound was called" << std::endl;
}
