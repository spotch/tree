#ifndef CHILDREN_LIST_H_
#define CHILDREN_LIST_H_

#include "i_children_list.h"

class INode;

class ChildrenList : public IChildrenList
{
public:
	ChildrenList();
	~ChildrenList();

	void Add(INode* pNode);
	INode* Find(INode* pNode);

private:
	INode* m_pHead;
};

#endif // CHILDREN_LIST_H_
