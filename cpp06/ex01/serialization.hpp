/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:03 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/21 16:40:06 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include <iostream>

struct  Data{
    std::string name;
    int         age;
};

Data* deserialize(uintptr_t raw);
uintptr_t   serialize(Data* ptr);

#endif