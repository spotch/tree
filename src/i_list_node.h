#ifndef I_LIST_NODE_H_
#define I_LIST_NODE_H_

class IListNode
{
public:
	virtual ~IListNode() { }

	virtual IListNode* GetPrevious() = 0;
	virtual IListNode* GetNext() = 0;

	virtual void SetPrevious(IListNode* pNode) = 0;
	virtual void SetNext(IListNode* pNode) = 0;
};

#endif // I_LIST_NODE_H_
