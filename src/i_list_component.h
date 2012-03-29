#ifndef I_LIST_COMPONENT_H_
#define I_LIST_COMPONENT_H_

class INode;

class IListComponent
{
public:
	virtual ~IListComponent() { }

	virtual INode* GetPrevious() = 0;
	virtual INode* GetNext() = 0;

	virtual void SetPrevious(INode* pNode) = 0;
	virtual void SetNext(INode* pNode) = 0;
};

#endif // I_LIST_COMPONENT_H_
