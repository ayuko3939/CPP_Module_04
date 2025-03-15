/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:14 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 22:16:47 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
// 	// const Animal* j = new Dog();
// 	// const Animal* i = new Cat();

// 	// delete j;//should not create a leak
// 	// delete i;

// 	const int dataNum = 4;
// 	Animal *animals[dataNum];

// 	animals[0] = new Dog();
// 	animals[1] = new Cat();
// 	animals[2] = new Dog();
// 	animals[3] = new Cat();

// 	std::cout << std::endl << "------------------------------" << std::endl << std::endl;

// 	for (int i = 0; i < dataNum; i++)
// 		delete animals[i];
	
// 	return 0;
// }

// int main()
// {
//     const Animal    *meta[6];

//     for (int i = 0; i < 6; i++)
//     {
//         if (i < 3)
//         {
//             meta[i] = new Dog();
//             if (meta[i] == NULL)
//                 return(1);
//         }
//         else
//         {
//             meta[i] = new Cat();
//             if (meta[i] == NULL)
//                 return(1);
//         }
//     }

//     std::cout << std::endl;
//     for (int i = 0; i < 6; i++)
//         delete(meta[i]);

//     std::cout << std::endl;

//     // //ディープコピー確認
//     Dog *a = new Dog();
//     // // Cat *a = new Cat();
//     // a->setIdea(0, "私は犬です");

//     Dog b = new Dog(a);
//     // // Cat b = new Cat(a);
//     // a->getIdea(0);
//     // a->getIdea(10);
//     // a->getIdea(1000);
//     // b->getIdea(0);
//     // b->getIdea(10);
//     // b->getIdea(1000);

//     // std::cout << std::endl;

//     delete(a);
//     delete(b);

//     return (0);
// }

