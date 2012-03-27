
#ifndef I_CHILDREN_LIST_H_
#define I_CHILDREN_LIST_H_

class INode;

class IChildrenList
{
public:
	virtual ~IChildrenList() { }

	virtual void Add(INode* pNode) = 0;

	virtual INode* Find(INode* pNode) = 0;
};

#endif // I_CHILDREN_LIST_H_
