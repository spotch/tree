#ifndef POOL_HPP_
#define POOL_HPP_

template <typename T>
Pool<T>::Pool()
{
}

template <typename T>
Pool<T>::~Pool()
{
}

template <typename T>
void Pool<T>::SetSize(int size)
{
}

template <typename T>
T* Pool<T>::Allocate()
{
}

template <typename T>
void Pool<T>::Free(T* object)
{
}

#endif // POOL_HPP_
