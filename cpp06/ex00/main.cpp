/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:34:09 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/21 13:01:16 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "String.hpp"

int main(int argc, char **argv){
    if (argc != 2)
    {
        std::cout << "Wrong numbers of argument\n";
        return 0;
    }
    char    a;
    double  b;
    float   c;
    int     d;

    String  instance(argv[1]);

    a = static_cast<char>(instance);
    b = static_cast<double>(instance);
    c = static_cast<float>(instance);
    d = static_cast<int>(instance);

    return 0;
}