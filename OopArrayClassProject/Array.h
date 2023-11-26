#pragma once

template <class T, size_t size>
class Array
{
	T array[size]{};
public:
	T* getArray();
	T& operator[](int index);
	size_t Size();
};


template<class T, size_t size>
T* Array<T, size>::getArray()
{
	return this->array;
}

template<class T, size_t size>
T& Array<T, size>::operator[](int index)
{
	return array[index];
}

template<class T, size_t size>
size_t Array<T, size>::Size()
{
	return size;
}
