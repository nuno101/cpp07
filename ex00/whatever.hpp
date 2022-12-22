/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:50:07 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/22 17:58:43 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &p1, T &p2)
{
	T	temp;

	temp = p1;
	p1 = p2;
	p2 = temp;
}

template <typename T>
T	min(T &p1, T &p2)
{
	if ( p1 < p2 )
		return p1;
	else
		return p2;
}

template <typename T>
T	max(T &p1, T &p2)
{
	if ( p1 > p2 )
		return p1;
	else
		return p2;
}

#endif
