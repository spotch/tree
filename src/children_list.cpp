
#include "children_list.h"

#include "i_node.h"

ChildrenList::ChildrenList():
	m_pHead(0)
{
}

ChildrenList::~ChildrenList()
{
}

void ChildrenList::Add(INode* pNode)
{
	m_pHead = pNode;
}

INode* ChildrenList::Find(INode* pNode)
{
	return m_pHead;
}
