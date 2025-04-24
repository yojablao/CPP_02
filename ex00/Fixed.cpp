/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:07:45 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/23 19:40:16 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "default constructor called" << std::endl;
    f_point = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &value)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->f_point = value.f_point;
}

Fixed & Fixed ::operator=(const Fixed& o)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &o)
        this->f_point = o.f_point;
    return(*this);
}
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->f_point);
}
void Fixed::setRawBits(int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->f_point = raw;
}