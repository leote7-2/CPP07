/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:33:04 by joaoleote         #+#    #+#             */
/*   Updated: 2026/05/06 15:15:15 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T*				_data;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();
		Array &operator=(const Array &other);
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int size() const;
};

#include "Array.tpp"
