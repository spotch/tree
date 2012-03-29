#ifndef PARENT_COMPONENT_H_
#define PARENT_COMPONENT_H_

#include "i_parent_component.h"

class INode;

class ParentComponent : public IParentComponent
{
public:
	ParentComponent();
	~ParentComponent();

	INode* GetParent();
	void SetParent(INode* pNode);

private:
	INode* m_parent;
};

#endif // PARENT_COMPONENT_H_
