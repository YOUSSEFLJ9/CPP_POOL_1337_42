/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utul.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:33:09 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/04 17:35:18 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




template <typename Iter>
void myPrint(Iter begin, Iter end)
{
 for (auto iter { begin }; iter != end; ++iter) { cout << *iter << " "; }
}
