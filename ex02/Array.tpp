/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:52:52 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/22 19:15:28 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _size ( 0 ), _array( nullptr )
{
	if ( VERBOSE )
		std::cout << "Constructor called" << std::endl;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size( n ), _array( new T[n] )
{
	if ( VERBOSE )
		std::cout << "Constructor called with size: " << n << std::endl;
}

template <typename T>
Array<T>::Array( Array<T> const &src) : _size( src.size() )
{
	if ( VERBOSE )
		std::cout << "Copy called" << std::endl;
	_array = NULL;
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=( Array<T> const &src)
{
	if ( VERBOSE )
		std::cout << "Assign called" << std::endl;
	if ( _size > 0 )
		delete[] _array;
	_size = src._size;
	_array = new T[_size];
	size_t i = 0;
	while ( i < _size )
	{
		_array[i] = src._array[i];
		i++;
	}
	return *this ;
}

template <typename T>
Array<T>::~Array()
{
	if ( VERBOSE )
		std::cout << "Destructor called" << std::endl;
	if ( _size > 0 )
		delete[] _array;
}

template <typename T>
T & ::Array<T>::operator[]( size_t index )
{
	if ( index < _size )
		return _array[ index ];
	else
		throw std::exception();
}

template <typename T>
size_t	Array<T>::size() const
{
	return _size ;
}

#endif
