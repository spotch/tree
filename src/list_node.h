
#ifndef LIST_NODE_H_
#define LIST_NODE_H_

#include "i_list_node.h"

class ListNode : public IListNode
{
public:
	ListNode();
	~ListNode();

	IListNode* GetPrevious();
	IListNode* GetNext();

	void SetPrevious(IListNode* pNode);
	void SetNext(IListNode* pNode);

private:
	IListNode* m_pPrevious;
	IListNode* m_pNext;
};

#endif // LIST_NODE_H_
