/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:33:04 by joaoleote         #+#    #+#             */
/*   Updated: 2026/09/24 14:23:59 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T	&min(const T &a, const T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const T	&max(const T &a, const T &b) {
	if (a > b)
		return (a);
	return (b);
}
