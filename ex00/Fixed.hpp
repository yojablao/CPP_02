/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:25:03 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/23 19:36:40 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__HPP
#define FIXED__HPP

#include <iostream>
class Fixed
{
    int f_point;
    static const int shift = 8;
    public:
    Fixed();
    Fixed(const Fixed &a);
    Fixed& operator=(const Fixed& o);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    
    
};
#endif