/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:14 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/12 21:57:41 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl << std::endl;

	const WrongAnimal* w = new WrongCat();

	std::cout << std::endl;

	std::cout << w->getType() << " " << std::endl;
	w->makeSound();

	std::cout << std::endl;

	delete w;

	std::cout << std::endl;

	Dog a;
	Dog b;
	Dog c(a);
	
	b = a;

	return 0;
}
