#ifndef POOL_H_
#define POOL_H_

template <typename T>
class Pool
{
public:
	Pool();
	~Pool();

	void SetSize(int size);

	T* Allocate();
	void Free(T* object);
};

#include "pool.hpp"

#endif // POOL_H_
