/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:33:16 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/22 18:46:19 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class	Array
{
	private:
		size_t	_size;
		T		*array;
	public:
		Array<T>();
		Array<T>( unsigned int n );
		Array<T>( const Array<T> &src );
		Array<T> &operator=( const Array<T> &src );
		~Array<T>();
		T &operator[](size_t index)
		size_t	size() const;
}

#endif
