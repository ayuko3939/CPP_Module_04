/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:35:21 by ohasega           #+#    #+#             */
/*   Updated: 2024/12/21 18:41:40 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
  protected:
	std::string type;

  public:
	Animal(std::string type = ""); // this works as default constructors
	Animal(const Animal &src);
	virtual ~Animal();

	Animal &operator=(const Animal &src);

	const std::string &getType() const;

	virtual void makeSound() const;
};

#endif