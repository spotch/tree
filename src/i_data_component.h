#ifndef I_DATA_COMPONENT_H_
#define I_DATA_COMPONENT_H_

class IDataComponent
{
public:
	virtual ~IDataComponent() { }

	virtual int GetData() = 0;
	virtual void SetData(int data) = 0;
};

#endif // I_INT_COMPONENT_H_
