/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:57 by ohasega           #+#    #+#             */
/*   Updated: 2024/12/21 18:42:35 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
  protected:
	std::string type;

  public:
	WrongAnimal(std::string type = ""); // this works as default constructors
	WrongAnimal(const WrongAnimal &src);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &src);

	const std::string &getType() const;

	void makeSound() const;
};

#endif