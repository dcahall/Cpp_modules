/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:28:02 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 17:43:02 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int argc, char **argv){
	if (argc != 4)
		return (1);
	Replacer instance(argv[1], argv[2], argv[3]);
	instance.overWriteChanges();
}