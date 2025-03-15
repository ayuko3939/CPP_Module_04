/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:35:21 by ohasega           #+#    #+#             */
/*   Updated: 2024/12/21 18:41:15 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
  protected:
	std::string type;

  public:
	AAnimal(std::string type = ""); // this works as default constructors
	AAnimal(const AAnimal &src);
	virtual ~AAnimal();

	AAnimal &operator=(const AAnimal &src);

	const std::string &getType() const;

	virtual void makeSound() const = 0;
};

#endif