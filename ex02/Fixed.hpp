/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:25:03 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/27 16:50:41 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__HPP
#define FIXED__HPP

#include <iostream>
#include <cmath>
class Fixed
{
    int f_point;
    static const int shift = 8;
public:
    Fixed();
    Fixed(const int a);
    Fixed(const float a);
    Fixed(const Fixed &a);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator=(const Fixed& o);
    bool operator>(const Fixed& a)const;
    bool operator<(const Fixed& a)const;
    bool operator>=(const Fixed& a)const;
    bool operator<=(const Fixed& a)const;
    bool operator!=(const Fixed& a)const;
    bool operator==(const Fixed& a)const;
    Fixed operator+(const Fixed&a)const ;
    Fixed operator-(const Fixed&a)const ;
    Fixed operator*(const Fixed&a)const ;
    Fixed operator/(const Fixed&a)const ;
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator--(int);
    Fixed operator++(int);
    static Fixed& min(Fixed& f, Fixed& s);
    static Fixed& max(Fixed& f, Fixed& s);
    static const Fixed& min(const Fixed& f, const Fixed& s) ;
    static const Fixed& max(const Fixed& f, const Fixed& s) ;
};
std::ostream    &operator<<(std::ostream& out,const Fixed& obj);
#endif