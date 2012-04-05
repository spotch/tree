#ifndef I_POOL_H_
#define I_POOL_H_

template <typename T>
class IPool
{
public:
	virtual ~IPool() { }

	virtual void SetSize(int size) = 0;

	virtual T* Allocate() = 0;
	virtual void Free(T* object) = 0;
};

#endif // I_POOL_H_
