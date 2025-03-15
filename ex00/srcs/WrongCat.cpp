/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:49 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/12 21:57:56 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ===================== Constructor & Destructor =====================

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "Cat copy constructor was called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor was called" << std::endl;
}

// ============================= Operator =============================

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (&src != this)
	{
		WrongAnimal::operator=(src);
		// type = src.type;
	}
	return (*this);
}

// ========================== Public function =========================

void WrongCat::makeSound() const
{
	std::cout << "WrongCat : meow!!" << std::endl;
}
