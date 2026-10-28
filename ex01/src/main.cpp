/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:29:51 by joaoleote         #+#    #+#             */
/*   Updated: 2026/05/04 15:43:30 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

#include <iostream>

template <typename T>
void print(const T &x)
{
	std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
	x++;
}

int main()
{
	int	arr[] = {1, 2, 3, 4};

	std::cout << "Print normal:" << std::endl;
	iter(arr, 4, print<int>);

	std::cout << "\nIncrement:" << std::endl;
	iter(arr, 4, increment<int>);
	iter(arr, 4, print<int>);

	const int	arr2[] = {10, 20, 30};

	std::cout << "\nPrint const:" << std::endl;
	iter(arr2, 3, print<int>);

	return 0;
}
