/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:08:24 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/22 18:28:40 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> 
void	iter( T *array, size_t len, void (*func)(const T &) )
{
	while( len-- > 0 )
	{
		func( array[len] );
	}
}

template <typename T> 
void	show(	const T &el )
{
	std::cout << el << std::endl;
}


#endif
