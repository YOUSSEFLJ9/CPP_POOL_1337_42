/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:44:46 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/27 13:12:48 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef UTIL_HPP
# define UTIL_HPP

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
#endif
