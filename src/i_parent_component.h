#ifndef I_PARENT_COMPONENT_H_
#define I_PARENT_COMPONENT_H_

class INode;

class IParentComponent
{
public:
	virtual ~IParentComponent() { }

	virtual INode* GetParent() = 0;
	virtual void SetParent(INode* pNode) = 0;
};

#endif // I_PARENT_COMPONENT_H_
