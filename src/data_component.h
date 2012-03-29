#ifndef DATA_COMPONENT_H_
#define DATA_COMPONENT_H_

#include "i_data_component.h"

class DataComponent : public IDataComponent
{
public:
	DataComponent();
	~DataComponent();

	int GetData();
	void SetData(int data);

private:
	int m_data;
};

#endif // DATA_COMPONENT_H_
