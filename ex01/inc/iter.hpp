/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:33:04 by joaoleote         #+#    #+#             */
/*   Updated: 2026/05/04 15:24:13 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template <typename T>
void	iter(T *array, const size_t length, void (*f)(T &)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	iter(const T *array, const size_t length, void (*f)(const T &)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}
