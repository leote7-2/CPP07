/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:29:51 by joaoleote         #+#    #+#             */
/*   Updated: 2026/05/06 15:25:25 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"
#include <iostream>

int main() {
    std::cout << "=== TESTE 1: ARRAY VAZIO ===" << std::endl;
    Array<int> a;

    std::cout << "size: " << a.size() << std::endl;

    try {
        a[0] = 10;
    } catch (std::exception &e) {
        std::cout << "OK: excecao capturada (array vazio)" << std::endl;
    }

    std::cout << "\n=== TESTE 2: ARRAY COM TAMANHO ===" << std::endl;
    Array<int> b(5);

    for (unsigned int i = 0; i < b.size(); i++)
        b[i] = i * 10;

    for (unsigned int i = 0; i < b.size(); i++)
        std::cout << "b[" << i << "] = " << b[i] << std::endl;

    std::cout << "\n=== TESTE 3: COPY (DEEP COPY) ===" << std::endl;
    Array<int> c = b;

    c[0] = 999;

    std::cout << "b[0] = " << b[0] << " (deve ser 0)" << std::endl;
    std::cout << "c[0] = " << c[0] << " (deve ser 999)" << std::endl;

    std::cout << "\n=== TESTE 4: OPERATOR= ===" << std::endl;
    Array<int> d;
    d = b;

    d[1] = 777;

    std::cout << "b[1] = " << b[1] << " (inalterado)" << std::endl;
    std::cout << "d[1] = " << d[1] << std::endl;

    std::cout << "\n=== TESTE 5: OUT OF BOUNDS ===" << std::endl;
    try {
        std::cout << b[100] << std::endl;
    } catch (std::exception &e) {
        std::cout << "OK: excecao out of bounds" << std::endl;
    }

    std::cout << "\n=== TESTE 6: CONST ARRAY ===" << std::endl;
    const Array<int> e(3);

    std::cout << "size: " << e.size() << std::endl;

    try {
        std::cout << e[0] << std::endl;
    } catch (std::exception &e) {
        std::cout << "erro inesperado" << std::endl;
    }

    return 0;
}
